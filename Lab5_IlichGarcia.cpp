// Main

#include <iostream>
#include "Function.h"
#include <vector>
#include <string>

using namespace std;

int main() {
	int option;
	vector <Function>* functions = new vector <Function>();

	do {
		int firstGrade, secondGrade, coefficient;

		cout << "Ingrese grado de f(x): ";
		cin >> firstGrade;

		Function firstFunction(firstGrade); // Primera función.

		for (int i = 0; i <= firstGrade; ++i) { // Creando f(x).
			cout << "Ingrese coeficiente de x^" << i << ": ";
			cin >> coefficient;
			firstFunction.setCoefficient(coefficient);
		}

		cout << "Ingrese grado de g(x): ";
		cin >> secondGrade;
		
		Function secondFunction(secondGrade); // Segunda función.

		coefficient = 0;

		for (int i = 0; i <= secondGrade; ++i) { // Creando g(x).
			cout << "Ingrese coeficiente de x^" << i << ": ";
			cin >> coefficient;
			secondFunction.setCoefficient(coefficient);
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
			int thirdGrade;

			if (firstGrade >= secondGrade) {
				thirdGrade = firstGrade;
			} else {
				thirdGrade = secondGrade;
			}

			Function thirdFunction(thirdGrade);
			thirdFunction = firstFunction + secondFunction;

			for (int i = 0; i <= thirdGrade; ++i) {
				cout << thirdFunction.getCoefficients() -> at(i);
			}

			functions -> push_back(thirdFunction);
		} else if (option == 2) { // Restar.
			int thirdGrade;

			if (firstGrade >= secondGrade) {
				thirdGrade = firstGrade;
			} else {
				thirdGrade = secondGrade;
			}

			Function thirdFunction(thirdGrade);
			thirdFunction = firstFunction - secondFunction;

			for (int i = 0; i <= thirdGrade; ++i) {
				cout << thirdFunction.getCoefficients() -> at(i);
			}

			functions -> push_back(thirdFunction);
		} else if (option == 3) { // Multiplicar.
			if (firstFunction == secondFunction) {
				cout << "Son iguales!";
			} else {
				cout << "No son iguales!";
			}
		} else if (option == 4) { // Dividir.
			
		} else if (option == 5) { // Factor común.
			
		} else if (option == 6) { // Iguales.
			
		} else if (option == 7) { // Diferentes.
			
		} else if (option == 8) { // Operador de flujo.
			
		}
	} while (option != 9);

	return 0;
}