#pragma once
#include "Helicoptero.h"

class CManejador
{
	CHelicoptero* objHelp;
public:
	CManejador();
	~CManejador();
	void Mostrar(char opc);
	void Mover(char opc);
	void Borrar(char opc);

};

