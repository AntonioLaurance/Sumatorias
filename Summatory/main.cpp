/* Programación de Estructuras de datos y Algoritmos Fundamentales
 * Actividad 1.1: Funciones Iterativas, Recursivas y su análisis de Complejidad
 * Victoria Rodríguez de León			A01656328
 * Ricardo Campos Luna					A01656898
 * Martes 16 de agosto del 2022
*/

#include <iostream>
#include <time.h>
#include "functions.h"

using namespace std;

int main(int argc, char *argv[]){
	unsigned int n;

	if(argc < 2 ){
		// n ingresado manualmente 
		cout << "Sumatoria de 1 hasta n" << endl;
		cout << "n(número entero): ";

		cin >> n;
		cout << endl;
	} else{
		// n ingresado como parámetro de programa
		n = static_cast<unsigned int>(atoi(argv[1])); 
	}
	
	cout << "Sumatoria de 1 hasta " << n << endl;
	cout << endl;

	cout << "Suma iterativa: " << sumaIterativa(n) << endl;
	cout << "Suma recursiva: " << sumaRecursiva(n) << endl;
	cout << "Suma directa: " << sumaDirecta(n) << endl << endl;
 
	return 0;
}

