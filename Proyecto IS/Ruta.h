/*
 * Ruta.h
 *
 *  Created on: 14 dic. 2020
 *      Author: rgr
 *      Se define la clase Ruta
 */

#ifndef RUTA_H_
#define RUTA_H_
#include <iostream>
#include <string>
#include <cstdio>

class Ruta {
private:
	int Identificador_;
	string Desplazamiento_;
	float Distancia_;
public:
	Ruta();
	virtual ~Ruta();
};

#endif /* RUTA_H_ */
