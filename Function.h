// Function.h

#pragma once

#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class Function {
	private:
		int grade;
		vector<int>* coefficients;

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
		vector <int>* operator + (Function*); // Suma.
		vector <int>* operator - (Function*); // Resta.
		vector <int>* operator * (Function*); // Multiplicación.
		vector <int>* operator / (Function*); // División.
		vector <int>* operator ^ (Function*); // Factor común.
		vector <int>* operator == (Function*); // Iguales.
		vector <int>* operator != (Function*); // Diferentes.
};