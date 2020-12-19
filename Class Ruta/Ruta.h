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
#include <cstdio>
#include <string>

class Ruta {
private:
	int Identificador_;
	string Desplazamiento_;
	float Distancia_;
public:
	Ruta(int identificador, string desplazamiento="",float distancia=0);
	inline void setIndentificador(int identificador){Ruta::Identificador_=identificador;}
	inline int getIdentificador()const{return Ruta::Identificador_;}
	inline void setDesplazamiento(string desplazamiento){Ruta::Desplazamiento_=desplazamiento;}
	inline string getDesplazamiento()const{return Ruta::Desplazamiento_;}
	inline void setDistancia(float distancia){Ruta::Distancia_=distancia;}
	inline float getDistancia()const{return Ruta::Distancia_;}
	void Borrar_Ruta(int identificador);
	virtual ~Ruta();
};

#endif /* RUTA_H_ */
