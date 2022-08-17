/* Funciones de Suma de números enteros de 1 hasta n
 * En este módulo ...
*/

/*
 * Complejidad algoritmica:
*/
long int sumaIterativa(int n){
	long int sum = 0;	

	for(int i = 1; i <= n; i++)
		sum += static_cast<long int>(i);

	return sum;
}

/*
 * Complejidad algoritmica:
*/
long int sumaRecursiva(int n){
	// Caso base 
	if(n == 1)
		return static_cast<long int>(n);
	// Caso recursivo
	else
		return static_cast<long int>(n + sumaRecursiva(n - 1));
}

/*
 * Complejidad algoritmica:
*/
/* Formula de Gauss para las sumatorias */
long int sumaDirecta(int n){
	return static_cast<long int>((n * (n + 1))/2);
}

