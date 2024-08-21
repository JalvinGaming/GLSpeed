#include <glad/gl.h>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <GLSpeed.hpp>
void gls_CreateDisplay(const char* title, int x, int y, int width, int height, int vmaj, int vmin)
{
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, GL_TRUE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, vmaj);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, vmin);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_COMPATIBILITY);
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow(title, x, y, width, height, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    SDL_GLContext ctx = SDL_GL_CreateContext(window);
    gladLoadGL((GLADloadfunc)SDL_GL_GetProcAddress);
}