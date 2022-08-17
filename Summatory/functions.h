/* Funciones de Suma de números enteros de 1 hasta n
 * En este módulo ...
*/

/*
 * @params:
 *
 * Complejidad algoritmica temporal única: T(n) = 3n + 3
*/
unsigned long int sumaIterativa(unsigned int n){
	unsigned long int sum = 0;	// Acumulador 

	for(int i = 1; i <= n; i++)
		sum += static_cast<unsigned long int>(i);

	return sum;
}

/*
 * @params:
 *
 * Complejidad algoritmica temporal para peor de los casos: 	T(n) = n
 * Complejidad algoritmica temporal para el mejor de los casos: T(n) = 0
*/
unsigned long int sumaRecursiva(unsigned int n){
	// Caso base 
	if(n == 1)
		return static_cast<unsigned long int>(n);
	// Caso recursivo
	else
		return static_cast<unsigned long int>(n + sumaRecursiva(n - 1));
}

/*
 * @params: 
 *
 * Complejidad algoritmica temporal única: T(n) = 1
*/
/* Formula de Gauss para las sumatorias */
unsigned long int sumaDirecta(unsigned int n){
	return static_cast<unsigned long int>((n * (n + 1))/2);
}

