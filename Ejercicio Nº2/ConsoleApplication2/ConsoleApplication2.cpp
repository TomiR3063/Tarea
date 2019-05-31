// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <sstream>


int main()
{
	using namespace std;
	int numeros[50];
	int promedio = 100;
	int puntero = 0;
	int sumaDeMayores = 0;
	int sumaDeNegativos = 0;
	int numerosNegativos = 0;

	for (int index = 0; index < 50; index++)
	{
		cout << "Ingrese un numero";
		cin >> numeros[index];
	
		if (numeros[index] > promedio) 
		{
			puntero + 1;
			sumaDeMayores = sumaDeMayores + numeros[index];
		}
		
		if (numeros[index] < -10)
		{
			numerosNegativos = numerosNegativos + numeros[index];
		}
	}

	cout << "El promedio de los numeros mayores a 100 es:" << sumaDeMayores / puntero;
	cout << "La suma de los numeros menores a -10 es:" << numerosNegativos;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
