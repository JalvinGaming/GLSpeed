#pragma once
#include <glad/gl.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
//Creates an SDL_Window and OpenGL context.
void gls_CreateDisplay(const char* title, int x, int y, int width, int height, int vmaj, int vmin, SDL_Window *wnd);
//Creates a program from a vertex and fragment shader.
void gls_MakeMaterial(const char* vSrc, GLuint vShd, const char* fSrc, GLuint fShd, GLuint program);
//Checks if the user clicked the X button on the top right of a window.
bool gls_ShouldNotClose(SDL_Window *wnd);