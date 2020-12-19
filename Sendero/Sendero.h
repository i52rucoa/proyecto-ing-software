/*
 * Sendero.h
 *
 *  Created on: Dec 19, 2020
 *      Author: javi
 */

#ifndef SENDERO_H_
#define SENDERO_H_
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

class Sendero {
	private:
		int identificador_;
		string nombre_;
		string grado_dificultad_;
		bool disponibilidad_;

	public:
		Sendero(int identificador, string nombre="", string grado_dificultad="", bool disponibilidad="");
		inline int getIdentificador(){return Sendero::identificador_;}
		inline string getNombre(){return Sendero::nombre_;}
		inline string getGradoDificultad(){return Sendero::grado_dificultad_;}
		inline bool getDisponibilidad(){return Sendero::disponibilidad_;}
		inline void setNombre(string nombre){Sendero::nombre_=nombre;}
		inline void setIdentificador(int identificador){Sendero::identificador_=identificador;}
		inline void setGradoDificultad(string grado_dificultad){Sendero::grado_dificultad_=grado_dificultad;}
		inline bool setDisponibilidad(bool disponibilidad){if(disponibilidad==true){Sendero::disponibilidad_=disponibilidad;return true;}else{return false;}}
		void Borrar_Sendero(int identificador);
		virtual ~Sendero();


};




#endif /* SENDERO_H_ */
