/* Programación de Estructuras de datos y Algoritmos Fundamentales
 * Actividad 1.1: Funciones Iterativas, Recursivas y su análisis de Complejidad
 * Victoria Rodríguez de León			A01656328
 * Ricardo Campos Luna				A01656898
 * Raúl Armando Vélez Robles			A01782488
 * Lunes 22 de agosto del 2022
*/

// Instituto Tecnológico y de Estudios Superiores de Monterrey (ITESM)
// Profesor: Francisco Javier Vázquez Gómez

/* ------------------------------------------------------------------------------------------------
 * 					    TEST CASES
 * ------------------------------------------------------------------------------------------------
 *  1) Cuando la cantidad ingresada es muy grande, se provoca
 * 	desbordamiento de memoria (Stack Overflow) en el caso recursivo, los otros casos 
 *  funcionan bien mientras el resultado de la operación sea menor que lo que puede 
 * 	almacenar el tipo de dato long unsigned int que es 2^64 - 1 (generalmente). 
 * 
 *  2) Cuando la cantidad ingresada es negativa, nuestro programa hace una reinterpretación
 *  binaria para convertirlo en un tipo unsigned int, sin embargo esta conversión es 
 * 	2^32 - [El valor absoluto del número insertado] y cuando el número negativo está más 
 *  cercano al 0, más cercano estará su conversión al número 2^32
 * 
 *  3) Cuando el usuario ingresa otra cosa que no son valores numéricos, el caso iterativo y
 *  matemático dan 0 y el recursivo provoca un desbordamiendo de memoria (Stack Overflow).
 * 
 *  4) Cuando el tiempo en ejecutar un algoritmo es muy pequeño el sistema redondea el
 *  tiempo a 0 y por eso para cantidades muy chicas en el método matemático se puede ver
 *  que el programa dice que el tiempo tardado es 0.
 * 
 *	El usuario debe ingresar para n una cantidad menor que: 4,294,967,295 = 2^32 - 1
 * 
 *  Nota: El desbordamiento de memoria generalmente provoca que el sistema operativo aborte 
 * 	este programa. 
*/

// ¿Ocupamos manejo de excepciones?

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
	
	cout << "Suma iterativa: " << sum1 << "\t" << "Tiempo: ";
	cout << static_cast<long double>(diff)/CLOCKS_PER_SEC << " segundos" << endl;

	// Caso Recursivo
	begin = clock();
	sum2 = sumaRecursiva(n);
	end = clock();
	diff = end - begin;

	cout << "Suma recursiva: " << sum2 << "\t" << "Tiempo: ";
	cout << static_cast<long double>(diff)/CLOCKS_PER_SEC << " segundos" << endl;

	// Caso Directo
	begin = clock();
	sum3 = sumaDirecta(n);
	end = clock();
	diff = end - begin;

	cout << "Suma directa: \t" << sum3 << "\t" << "Tiempo: ";
	cout << static_cast<long double>(diff)/CLOCKS_PER_SEC << " segundos" << endl << endl;
	
 
	return 0;
}

