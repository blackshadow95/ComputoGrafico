#pragma once

#include "BaseApplication.h"

class Application : public BaseApplication
{
private:
	int centerX, centerY;
	int currentPositionX, currentPositionY;
	Color currentColor;

public:
	Application();
	~Application();
	virtual void setup();
	virtual void update();
	virtual void draw();
	void PutPixel(const int& x, const int& y);
	void setColor(const char& R, const char& G, const char& B, const char& A);
	void clearScreen();
	void moveTo(const int& x, const int& y);
	void lineTo(const int& x, const int& y);
	void midPointLine(int X1, int Y1, int X2, int Y2);
};
