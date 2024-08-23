# GLSpeed
 The fastest way to write OpenGL

# Features
`void gls_CreateDisplay(const char* title, int x, int y, int width, int height, int vmaj, int vmin)` Creates a window and OpenGL context

`void gls_MakeMaterial(const char* vSrc, GLuint vShd, const char* fSrc, GLuint fShd, GLuint program)` Creates a program from a vertex and fragment shader.
`bool gls_ShouldNotClose(SDL_Window *wnd)` Determines whether a window should close or not.

# Requirements
This library requires:
- [SDL2](https://www.libsdl.org/)
- [Glad](https://gen.glad.sh/)

# Compilation
In order to compile you need to type:
`make compile`
wait a bit,
`make libset`
and then the library and include will appear in the bin folder.