/*
 * Sendero.cpp
 *
 *  Created on: Dec 19, 2020
 *      Author: javi
 */

#include "Sendero.h"

Sendero::Sendero(int identificador, string nombre, string grado_dificultad, bool disponibilidad) {
	setIdentificador(identificador);
	setNombre(nombre);
	setGradoDificultad(grado_dificultad);
	setDisponibilidad(disponibilidad);
}

void Sendero::Borrar_Sendero(int identificador){
	identificador=0;
	Sendero::identificador_=identificador;
}

Sendero::~Sendero() {

}



