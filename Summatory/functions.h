/* Funciones de Suma de números enteros de 1 hasta n
 * En este módulo se incluyen tres funciones que hacen
 * la sumatoria a través de diferentes métodos
*/

/*
 * @params: 
 * 		n: Es un número entero positivo
 * 
 * @return:
 * 		sum: Número entero positivo obtenido a través de la suma
 * 		total de números consecutivos comenzando en 1 hasta llegar a n
 * 		
 *
 * Complejidad algoritmica temporal única: T(n) = 3n + 3
 * Complejidad algoritmica espacial: S(n) = 
*/
unsigned long int sumaIterativa(unsigned int n){
	unsigned long int sum = 0;	// Acumulador 

	for(int i = 1; i <= n; i++)
		sum += static_cast<unsigned long int>(i);

	return sum;
}

/*
 * @params:
 * 		n: Es un número entero positivo
 * 
 * @return:
 * 		Número entero positivo obtenido a través de la suma total de números
 * 		consecutivos comenzando en 1 hasta llegar a n
 * 
 * Complejidad algoritmica temporal para el peor de los casos: 	T(n) = n
 * Complejidad algoritmica temporal para el mejor de los casos: T(n) = 0
 * 
 * Complejidad algoritmica espacial: S(n) = 
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
 * Se utilizo la fórmula de Gauss para calcular esta sumatoria
 *
 * @params: 
 * 		n: Es un número entero positivo
 *
 * @return:
 * 		Número entero positivo obtenido a través de la suma total de números
 * 		consecutivos comenzando en 1 hasta llegar a n
 * 		
 * Complejidad algoritmica temporal única: T(n) = 1
 * Complejidad algoritmica espacial: S(n) = 
*/

unsigned long int sumaDirecta(unsigned int n){
	return static_cast<unsigned long int>((n * (n + 1))/2);
}

