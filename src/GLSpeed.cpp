#define SDL_MAIN_HANDLED
#include <GLSpeed.hpp>
//Creates an SDL_Window and OpenGL context.
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
//Creates a program from a vertex and fragment shader.
void gls_MakeMaterial(const char* vSrc, GLuint vShd, const char* fSrc, GLuint fShd, GLuint program)
{
    vShd = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vShd, 1, &vSrc, NULL);
    glCompileShader(vShd);
    fShd = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fShd, 1, &fSrc, NULL);
    glCompileShader(fShd);
    program = glCreateProgram();
    glAttachShader(program, vShd);
    glAttachShader(program, fShd);
    glLinkProgram(program);
}
//Checks if the user clicked the X button on the top right of a window.
bool gls_ShouldNotClose(SDL_Window *wnd)
{
    SDL_Event event;
    SDL_PollEvent(&event);
        if (event.type == SDL_QUIT)
        {
            return false;
        }
        else
        {
            return true;
        }
}