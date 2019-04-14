#include <iostream>
#include <SDL.h>
#include <math.h>

//Screen dimension constants
const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 800;

//Draws geometry on the canvas
void draw();

std::pair<int, int> secondPointCoord(std::pair<int, int>, int);

std::pair<int, int> thirdPointCoord(std::pair<int, int>, int);

// Draw triangle
void triangle(std::pair<int, int>, int);

void triangleFractal(std::pair<int, int>, int);

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window *gWindow = nullptr;

//The window renderer
SDL_Renderer *gRenderer = nullptr;

void draw()
{
    // create a square drawing function that takes 1 parameter:
    // the square size
    // and draws a square of that size to the center of the canvas.
    // draw at least 3 squares with that function.
    // the squares should not be filled otherwise they will hide each other
    // avoid code duplication.
    //SDL_Point point = {0, 0};
    //point.x;
    //point.y;
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    int triangleLength = 800;
    std::pair<int, int> startCoord = {10, 10};

    triangleFractal(startCoord, triangleLength);

}

std::pair<int, int> secondPointCoord(std::pair<int, int> startCoord, int length)
{
    return {startCoord.first + length, startCoord.second};
}

std::pair<int, int> thirdPointCoord(std::pair<int, int> startCoord, int length)
{
    return {startCoord.first + length / 2, startCoord.second + sqrt(3) / 2 * length};
}

void triangle(std::pair<int, int> startCoord, int length)
{
    SDL_RenderDrawLine(gRenderer,
                       startCoord.first, startCoord.second,
                       secondPointCoord(startCoord, length).first, secondPointCoord(startCoord, length).second);

    SDL_RenderDrawLine(gRenderer,
                       secondPointCoord(startCoord, length).first, secondPointCoord(startCoord, length).second,
                       thirdPointCoord(startCoord, length).first, thirdPointCoord(startCoord, length).second);

    SDL_RenderDrawLine(gRenderer,
                       thirdPointCoord(startCoord, length).first, thirdPointCoord(startCoord, length).second,
                       startCoord.first, startCoord.second);
}

void triangleFractal(std::pair<int, int> startCoord, int length)
{
    triangle(startCoord, length);
    if (length < 10)
        return;
    length /= 2;

    triangleFractal(startCoord, length);
    triangleFractal(secondPointCoord(startCoord, length), length);
    triangleFractal(thirdPointCoord(startCoord, length), length);
}


bool init()
{
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow("Triangles", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == nullptr) {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if (gRenderer == nullptr) {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main(int argc, char *args[])
{
    //Start up SDL and create window
    if (!init()) {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        draw();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}