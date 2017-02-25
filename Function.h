// Function.h

#pragma once

#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class Function {
	friend ostream& operator << (ostream&, const Function); // Operador de flujo.
	private:
		int grade;
		vector <int>* coefficients;

	public:
		// Constructor.
		Function(int);
		// Setters.
		void setGrade(int);
		void setCoefficient(int);
		// Getters.
		int getGrade();
		vector <int>* getCoefficients();
		// Destructor.
		~Function();
		// Operadores sobrecargados.
		Function operator + (Function); // Suma.
		Function operator - (Function); // Resta.
		Function operator * (Function); // Multiplicación.
		Function operator / (Function); // División.
		int operator () (); // Factor común.
		bool operator == (Function); // Iguales.
		bool operator != (Function); // Diferentes.
		string toString()const;
};