#include <iostream>
#include <SDL.h>
#include <map>
#include <vector>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Draws geometry on the canvas
void draw();

// Draw a square
void square(std::pair<int, int> cord, int width);

// Draw a centered and fill with color
void squareCentered(int width);

void squareCenteredAndColored(int width, std::vector<int> color);

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
    // Create a square drawing function that takes 2 parameters:
    // The square size, and the fill color,
    // and draws a square of that size and color to the center of the canvas.
    // Create a loop that fills the canvas with rainbow colored squares.
    int width = 400;
    std::map<int, std::vector<int>> rainbow{{0, {255, 0,   0,   255}},   //"#FF0000"
                                            {1, {255, 127, 0,   255}},   //"#FF7F00"
                                            {2, {255, 255, 0,   255}},   //"#FFFF00"
                                            {3, {0,   255, 0,   255}},   //"#00FF00"
                                            {4, {0,   0,   255, 255}},   //"#0000FF"
                                            {5, {75,  0,   130, 255}},   //"#4B0082"
                                            {6, {143, 0,   255, 255}}};  //"#8F00FF"

    for (std::map<int, std::vector<int>>::iterator it = rainbow.begin(); it != rainbow.end(); ++it) {
        squareCenteredAndColored(width, it->second);
        width -= width / rainbow.size();
    }
}

void square(std::pair<int, int> cord, int width)
{
    SDL_Rect rectangle;
    rectangle.x = cord.first;
    rectangle.y = cord.second;
    rectangle.w = width;
    rectangle.h = width;
    SDL_RenderFillRect(gRenderer, &rectangle);

}

void squareCentered(int width)
{
    square({SCREEN_WIDTH / 2 - width / 2, SCREEN_HEIGHT / 2 - width / 2}, width);
}

void squareCenteredAndColored(int width, std::vector<int> color)
{
    SDL_SetRenderDrawColor(gRenderer, color[0], color[1], color[2], color[3]);
    squareCentered(width);
}

bool init()
{
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow("Rainbow box function", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
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