#ifndef cliente_HPP
#define cliente_HPP

#include <string>
#include <iostream>
#include <fstream>

struct date {
	int d;
	int m;
	int y;
};

using namespace std;

class cliente {

	private:
		
		string _dni;
		string _nombre;
		string _apellidos;
		int _telefono;
		string _email;
		string _direccion;
		struct date _fecha;
		
	public:
		
		// Constructor
		cliente(string dni="", string nombre="", string apellidos="", int telefono=-1, string email="", string direccion="", int dia=-1, int mes=-1, int year=-1);
		
		// Imprime por pantalla los atributos del cliente (s=1 sólo nombre y apellidos, s=2 versión completa)
		void imprimircliente(int s);
		
		// Funciones "get". Devuelven el valor de cada uno de los atributos del cliente

		
		inline string getDNI() const {
			return _dni;
		}
		
		inline string getNombre() const {
			return _nombre;
		}
		
		inline string getApellidos() const {
			return _apellidos;
		}
		
		inline int getTelefono() const {
			return _telefono;
		}
		
		inline string getEmail() const {
			return _email;
		}
		
		inline string getDireccion() const {
			return _direccion;
		}
		
		inline struct date getFecha() const {
			return _fecha;
		}
		
		
		// Funciones "set". Modifican el valor de cada uno de los atributos del cliente. Devuelven true si se modifica correctamente.
		
		bool setDNI(string dni);
		bool setNombre(string nombre);
		bool setApellidos(string apellidos);
		bool setTelefono(int telefono);
		bool setEmail(string email);
		bool setDireccion(string direccion);
		bool setFecha(struct date fecha);
		
};

#endif