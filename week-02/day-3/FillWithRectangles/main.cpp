// Exercise:
// draw four different size and color rectangles.
// avoid code duplication.
#include <iostream>
#include <SDL.h>
//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
//Starts up SDL and creates window
bool init();
//Frees media and shuts down SDL
void close();
// Draw a square
void rectangle(std::pair<int, int> cord, int width, int height);
//The window we'll be rendering to
SDL_Window* gWindow = nullptr;
//The window renderer
SDL_Renderer* gRenderer = nullptr;
bool init()
{
//Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }
//Create window
    gWindow = SDL_CreateWindow( "Four rectangles", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }
//Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }
//Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
    return true;
}
void close()
{
//Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;
    SDL_Quit();
}
void rectangle(std::pair<int, int> cord, int width, int height)
{
    SDL_Rect rectangle = {cord.first, cord.second, width, height};
    //rectangle.x = cord.first;
    //rectangle.y = cord.second;
    //rectangle.w = width;
    //rectangle.h = height;
    SDL_RenderFillRect( gRenderer, &rectangle );

}
int main( int argc, char* args[] )
{
//Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }
//Main loop flag
    bool quit = false;
//Event handler
    SDL_Event e;
//While application is running
    while( !quit ) {
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
//--------------------------------------------
//This is where you can start drawing geometry
//--------------------------------------------
        int witdh = 50;
        int height = 80;
        std::pair<int, int> startCord = {witdh, height};
        int red = 230;
        int green = 30;
        int blue = 9;

        for (int i = 0; i < 4; ++i) {
            SDL_SetRenderDrawColor( gRenderer, red, green, blue, 0xFF );
            rectangle(startCord, witdh, height);
            witdh += 30;
            height += 50;
            startCord.first += witdh;
            startCord.second += 20;
            red -= i * 40;
            green += i * 40;
            blue *= i;


        }

//Update screen
        SDL_RenderPresent(gRenderer);
    }
//Free resources and close SDL
    close();
    return 0;
}