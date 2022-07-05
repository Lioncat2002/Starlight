#ifndef RENDER_H
#define RENDER_H

#include <SDL2/SDL.h>
#include <linmath.h>

#include "../types.h"

typedef struct render_state{
    SDL_Window *window;
    f32 width;
    f32 height;
}Render_State;

void render_init();
void render_begin();
void render_end();

void render_quad(vec2 pos, vec2 size, vec4 color);
#endif