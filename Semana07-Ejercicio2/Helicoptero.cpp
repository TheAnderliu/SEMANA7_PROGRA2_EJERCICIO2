#include "stdafx.h"

CHelicoptero::CHelicoptero():CVehAereo(){
	x = 1;
	y = 8;
	dx = 1;
	dy = 1;
	ancho = 13;
	alto = 3;

}


CHelicoptero::~CHelicoptero()
{}

void CHelicoptero::Mostar() {
	Console::SetCursorPosition(x, y);
	cout << "  -----|-----";
	Console::SetCursorPosition(x, y + 1);;
	cout << "*>=====[_]L) ";
	Console::SetCursorPosition(x, y + 2);
	cout << "     _'_`_   ";
}

void CHelicoptero::Mover(){
	if (x + dx < 0 || x + ancho + dx>79)
		dx *= -1;
	if (y + dy < 0 || y + alto + dy>13)
		dy *= -1;

	x += dx;
	y += dy;

}

void CHelicoptero::Borrar(){
	Console::SetCursorPosition(x, y);
	cout << "             ";
	Console::SetCursorPosition(x, y + 1);;
	cout << "             ";
	Console::SetCursorPosition(x, y + 2);
	cout << "             ";

}