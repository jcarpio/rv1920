#pragma once
#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>
#include <string>


class Display
{
public:
	Display(int width, int height, const std::string& title);

	void SwapBuffers();

	virtual ~Display();

protected:

private:
	Display(const Display& other) {}
	Display& operator=(const Display& other) {}

	SDL_Window* m_window;
	SDL_GLContext m_glContext;
};

#endif // DISPLAY_H
