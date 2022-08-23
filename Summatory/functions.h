/* Funciones de Suma de números enteros de 1 hasta n
 * En este módulo se incluyen tres funciones que hacen
 * la sumatoria de números consecutivos de 1 a n a través
 * de diferentes métodos computacionales, entre los cuales 
 * están:
 *  	- Iterativo
 *	- Recursivo
 *	- Directo (matemático)
*/

/*
 * @fn: unsigned long int sumaIterativa(unsigned int n)
 *
 * @brief:
 * 		Suma todos los números enteros de 1 a n
 * 
 * @params: 
 * 		n: Es un número entero positivo
 * 
 * @return:
 * 		sum: Número entero positivo obtenido a través de la suma
 * 		total de números consecutivos comenzando en 1 hasta llegar a n
 * 		
 *
 * Complejidad algoritmica temporal única: T(n) = 3n + 3
 *
*/
unsigned long int sumaIterativa(unsigned int n){
	unsigned long int sum = 0;	// Acumulador 

	for(unsigned int i = 1; i <= n; i++)
		sum += static_cast<unsigned long int>(i);

	return sum;
}

/*
 * @fn: unsigned long int sumaRecursiva(unsigned int n)
 *
 * @brief:
 * 		Suma todos los números enteros de 1 a n
 * 
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
 * @fn: unsigned long int sumaDirecta(unsigned int n)
 *
 * @brief:
 * 		Suma todos los números enteros de 1 a n
 *
 * @params: 
 * 		n: Es un número entero positivo
 *
 * @return:
 * 		Número entero positivo obtenido a través de la suma total de números
 * 		consecutivos comenzando en 1 hasta llegar a n
 * 		
 * Complejidad algoritmica temporal única: T(n) = 2
 * 
 * Se utilizo la fórmula de Carl Friedrich Gauss para calcular esta sumatoria,
 * la cuál es:
 *  							n(n + 1)/2 
 * 
 * long unsigned int ocupa 8 bytes por lo tanto el valor máximo que puede alcanzar
 * es el de:
 * 							2^8(8) - 1 = 2^64 - 1
 * 
 * Por lo tanto n(n + 1) debe ser menor a 2^64 - 1 para esto se separó en 
 * 
*/

unsigned long int sumaDirecta(unsigned int n){
	long double prevSum = static_cast<long double>(n)/2;
	unsigned long int sum = static_cast<unsigned long int>(prevSum * (n + 1));

	return sum;
}

