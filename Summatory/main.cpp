/* Programación de Estructuras de datos y Algoritmos Fundamentales
 * Actividad 1.1: Funciones Iterativas, Recursivas y su análisis de Complejidad
 * Victoria Rodríguez de León			A01656328
 * Ricardo Campos Luna				A01656898
 * Raúl Armando Vélez Robles			A01782488
 * Martes 16 de agosto del 2022
*/

#include <iostream>
#include <time.h>
#include "functions.h"

using namespace std;

int main(int argc, char *argv[]){
	unsigned int n;
	unsigned long int sum1, sum2, sum3;
	clock_t begin, diff, end; 
	

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

	// Caso Iterativo
	begin = clock();
	sum1 = sumaIterativa(n);
	end = clock();
	diff = end - begin;
	
	cout << "Suma iterativa: " << sumaIterativa(n) << "\t" << "Tiempo: " << diff << endl;

	// Caso Recursivo
	begin = clock();
	sum2 = sumaRecursiva(n);
	end = clock();
	diff = end - begin;

	cout << "Suma recursiva: " << sumaRecursiva(n) << "\t" << "Tiempo: " << diff << endl;

	// Caso Directo
	begin = clock();
	sum3 = sumaDirecta(n);
	end = clock();
	diff = end - begin;

	cout << "Suma directa: " << sumaDirecta(n) << "\t" << "Tiempo: " << diff << endl << endl;	
 
	return 0;
}

