#include "EjemploApp.h"

void EjemploApp::setup()
{

}
void EjemploApp::update()
{

}
void EjemploApp::draw()
{
	Color azul(0, 0, 255, 255);
	Color rojo(255, 0, 0, 255);
	Color verde(0, 255, 0, 255);
	Color morado(255, 0, 255, 255);

	for (int x = 0; x < 1024; ++x)
	{
		putPixel(x, HEIGHT / 2, azul);
		putPixel(WIDTH / 2, x, rojo);
		putPixel((x * (-1)), x , verde);
		putPixel(x, x, morado);
	}
}