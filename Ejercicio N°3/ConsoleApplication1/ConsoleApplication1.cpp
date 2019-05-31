// Se ingresa un conjunto de valores positivos terminado con un valor negativo. Se pide desarrollar el programa
//que imprima el valor máximo del conjunto y su posición relativa dentro del mismo (el número de orden en el
//que fue ingresado).

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int mayor = 0;
	int posicion = 0;
	int numeros = 0;
	int cantidadDeNumeros = 0;

	do 
	{
		cout << "Ingrese un numero ";
		cin >> numeros;
		
		cantidadDeNumeros++;

		if (numeros > mayor)
		{
			mayor = numeros;
			posicion = cantidadDeNumeros;
		}
	} while (numeros >= 0);
	{
		cout << "El numero mayor es: " << mayor;
		cout << "La posicion del numero mayor es: " << posicion;
	}
}
