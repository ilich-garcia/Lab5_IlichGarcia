// Main

#include <iostream>
#include "Function.h"
#include <vector>
#include <string>

using namespace std;

int main() {
	int option;

	do {
		int grade, coefficient;

		cout << "Ingrese grado de f(x): ";
		cin >> grade;

		Function* firstFunction = new Function(grade); // Primera función.

		for (int i = 0; i <= grade; ++i) { // Creando f(x).
			cout << "Ingrese coeficiente de x^" << i << ": ";
			cin >> coefficient;
			firstFunction -> setCoefficient(coefficient);
		}

		cout << "Ingrese grado de g(x): ";
		cin >> grade;
		
		Function* secondFunction = new Function(grade); // Segunda función.

		coefficient = 0;

		for (int i = 0; i <= grade; ++i) { // Creando g(x).
			cout << "Ingrese coeficiente de x^" << i << ": ";
			cin >> coefficient;
			secondFunction -> setCoefficient(coefficient);
		}

/*		if (firstFunction -> size() >= secondFunction -> size()) {
			grade = firstFunction -> size();
			int aux = secondFunction -> size();

			for (int i = 0; i <= grade; ++i) {
			}
		}
*/
		cout << "1) Sumar. \n2) Restar. \n3) Multiplicar. \n4) Dividir. ";
		cout << "\n5) Sacar factor común. \n6) Evaluar si dos funciones son iguales";
		cout << "\n7) Evaluar si dos funciones son diferentes. \n8) Operador de flujo de salida.";
		cout << "\nOpción: ";
		cin >> option;

		if (option == 1) { // Sumar.

		} else if (option == 2) { // Restar.
			
		} else if (option == 3) { // Multiplicar.
			
		} else if (option == 4) { // Dividir.
			
		} else if (option == 5) { // Factor común.
			
		} else if (option == 6) { // Iguales.
			
		} else if (option == 7) { // Diferentes.
			
		} else if (option == 8) { // Operador de flujo.
			
		}
	} while (option != 9);

	return 0;
}