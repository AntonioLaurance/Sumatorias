/* Programación de Estructuras de datos y Algoritmos Fundamentales
 * Actividad 1.1: Funciones Iterativas, Recursivas y su análisis de Complejidad
 * Ricardo Campos Luna
 * Victoria Rodríguez de León
 * Martes 16 de agosto del 2022
*/

#include <iostream>
#include "functions.h"

int main(int argc, char *argv[]){
	int n;

	cout << "Sumatoria de 1 hasta n" << endl;
	cout << "n(número entero): ";
	cin >> n;

	cout << "Sumatoria de 1 hasta " << n << endl;

	cout << "Suma iterativa: " << sumaIterativa(n) << endl;
	cout << "Suma recursiva: " << sumaRecursiva(n) << endl;
	cout << "Suma directa: " << sumaDirecta(n) << endl;
 
	return 0;
}

