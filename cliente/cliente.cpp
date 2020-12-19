#include "cliente.hpp"
#include "cute.h"

cliente::cliente(string dni, string nombre, string apellidos, int telefono, string email, string direccion, int curso, int dia, int mes, int year, int IDgrupo, bool lider) {
	
	_dni = dni;
	_nombre = nombre;
	_apellidos = apellidos;
	_telefono = telefono;
	_email = email;
	_direccion = direccion;
	_fecha.d = dia;
	_fecha.m = mes;
	_fecha.y = year;
}

void cliente::imprimircliente(int s) {

	cout << "\tNombre: " << getNombre() << endl;
	cout << "\tApellidos: " << getApellidos() << endl;
	
	// Si se va a imprimir la versión completa, se imprimen el resto de parámetros
	if(s == 2) {
		cout << "\tDNI: " << getDNI() << endl;
		cout << "\tTeléfono: " << getTelefono() << endl;
		cout << "\tEmail: " << getEmail() << endl;
		cout << "\tDirección: " << getDireccion() << endl;
		cout << "\tFecha de nacimiento: " << getFecha().d << "-" << getFecha().m << "-" << getFecha().y << endl;
	}
	
}

bool cliente::setDNI(string dni) {

	_dni = dni;
	
	if(dni == _dni)
		return true;
	else
		return false;
}

bool cliente::setNombre(string nombre) {

	_nombre = nombre;
	
	if(nombre == _nombre)
		return true;
	else
		return false;
}

bool cliente::setApellidos(string apellidos) {

	_apellidos = apellidos;
	
	if(apellidos == _apellidos)
		return true;
	else
		return false;
}

bool cliente::setTelefono(int telefono) {

	_telefono = telefono;
	
	if(telefono == _telefono)
		/*ASSERT(telefono>0) comentario de prueba*/
		return true;
	else
		return false;
}

bool cliente::setEmail(string email) {

	_email = email;
	
	if(email == _email)
		return true;
	else
		return false;
}

bool cliente::setDireccion(string direccion) {

	_direccion = direccion;
	
	if(direccion == _direccion)
		return true;
	else
		return false;
}

bool cliente::setCurso(int curso) {

	_curso = curso;
	
	if(curso == _curso)
		return true;
	else
		return false;
}

bool cliente::setFecha(struct date fecha) {

	_fecha.d = fecha.d;
	_fecha.m = fecha.m;
	_fecha.y = fecha.y;
	
	if(fecha.d == _fecha.d  and  fecha.m == _fecha.m  and  fecha.y == _fecha.y)
		return true;
	else
		return false;
}

