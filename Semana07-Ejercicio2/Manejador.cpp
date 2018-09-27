#include "stdafx.h"

CManejador::CManejador()
{
	objHelp= new CHelicoptero();
}


CManejador::~CManejador()
{}

void CManejador::Mostrar(char opc){
	if (opc == 'h'||opc=='H')
		objHelp->Mostar();

}

void CManejador::Mover(char opc){
	if (opc == 'h' || opc == 'H')
		objHelp->Mover();

}

void CManejador::Borrar(char opc){
	if (opc == 'h' || opc == 'H')
		objHelp->Borrar();

}