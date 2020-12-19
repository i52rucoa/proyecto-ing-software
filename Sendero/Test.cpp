/*
 * Test.cpp
 *
 *  Created on: Dec 19, 2020
 *      Author: javi
 */

#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include "Sendero.h"


void TestBorrarSendero(){
	int identificador=1;
	Sendero s(identificador);
	s.setIdentificador(identificador);
	ASSERT_EQUAL(1,s.getIdentificador());
	s.Borrar_Sendero(identificador);
	ASSERT_EQUAL(0,s.getIdentificador());
}

void thisIsATest() {
	ASSERTM("start writing tests", false);
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(thisIsATest));
	s.push_back(CUTE(TestBorrarSendero));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}


