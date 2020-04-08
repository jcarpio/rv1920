#include "Display.h"
#include <GL/glew.h>
#include <iostream>

	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ALPHA, 8); # Transparency
	# 32 bits for color data

	SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32); # Bits for a single picture
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER_SIZE, 1); # we need space for a second window

	m_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, with, height, SDL_WINDOW_OPENGL);
	m_glContext = SDL_GL_CreateContext(m_window);

	GLenum status = glewInit();

	if (status != GLEW_OK) {
		std::cerr << "Glew failed to initialize!" << sdt::endl;
	}
	    
}


Display::~Display()
{
	SDL_GL_DeleteContext(m_glContext);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}

void Display::SwapBuffers() 
{
   SDL_GL_SwapWindow(m_window);
}