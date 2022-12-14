#pragma once

#ifdef _WIN32
#include "SDL2\include\SDL2\SDL.h"
#endif

#ifdef __linux__ 
#include <SDL2/SDL.h>  
#endif

#include "chip8.hpp"

class Display_and_input
{
    public:
        Display_and_input() = default;
        void begin_display(char const* title);
        void update_display(void const* pixels, int pitch);
        bool get_key_press(u8* keyboard_controls);
        bool quit = false;
        SDL_Window* window;
        SDL_Renderer* renderer;
        SDL_Texture* texture;       
};

