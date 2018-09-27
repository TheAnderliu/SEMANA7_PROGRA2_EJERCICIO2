// Semana07-Ejercicio2.cpp : main project file.

#include "stdafx.h"

using namespace System;
void Menu() {
	cout << "1.HELICOPTERO" << endl;
	cout << "2.AVION" << endl;
	cout << "3.MOTO" << endl;

}

int main()
{
	CManejador *objMan = new CManejador();
	char opc;
	Menu();
	cout << "Ingrese Opcion: ";
	cin >> opc;

	while (1){
		Console::Clear();
		objMan->Mostrar(opc);
		_sleep(50);
		objMan->Borrar(opc);
		objMan->Mover(opc);

		if (_kbhit()) {
			if (toupper(_getch()) == 'M')//menu
			{
				Console::Clear();
				Menu();
				cout << "Ingrese Opcion: ";
				cin >> opc;
			}
		}
		
	}
		
    return 0;
}
