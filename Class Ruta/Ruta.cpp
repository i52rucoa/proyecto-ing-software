/*
 * Ruta.cpp
 *
 *  Created on: 14 dic. 2020
 *      Author: rgr
 */

#include "Ruta.h"

Ruta::Ruta(int identificador, string desplazamiento,float distancia)
{
	setIndentificador(identificador);
	setDesplazamiento(desplazamiento);
	setDistancia(distancia);
	// TODO Auto-generated constructor stub

}
void Ruta::Borrar_Ruta(int identificador)
{
	indentificador=0;
	Identificador_=identificador;
}

Ruta::~Ruta() {
	// TODO Auto-generated destructor stub
}

