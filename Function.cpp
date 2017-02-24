#include "Function.h"


// Constructor.

Function::Function(int grade) {
	this -> grade = grade;
	coefficients = new vector <int>();
}

// Setters.

void Function::setGrade(int grade) {
	this -> grade = grade;
}

void Function::setCoefficient(int coefficient) {
	this -> coefficients -> push_back(coefficient);
}

// Getters.

int Function::getGrade() {
	return grade;
}

vector <int>* Function::getCoefficients() {
	return coefficients;
}

// Destructor.

Function::~Function() {
	/*if (coefficients) {
		for (int i = 0; i < coefficients -> size(); ++i) {
			if (coefficients -> at(i)) {
				coefficients -> erase(coefficients -> begin() + i);
			}
		}

		coefficients -> clear();
		delete coefficients;
	} */
}

// Operadores sobrecargados.

Function Function::operator + (Function function) { // Suma.
	int firstGrade, secondGrade, thirdGrade;

	firstGrade = this -> getCoefficients() -> size();
	secondGrade = function.	getCoefficients() -> size();

	if (firstGrade >= secondGrade) {
		thirdGrade = firstGrade;
	} else {
		thirdGrade = secondGrade;
	}

	Function newFunction(thirdGrade);

	for (int i = 0; i < this -> coefficients -> size(); ++i) {
		newFunction.setCoefficient(this -> coefficients -> at(i) += function.getCoefficients() -> at(i));
	}

	return newFunction;
}

Function Function::operator - (Function function) { // Resta.
	int firstGrade, secondGrade, thirdGrade;

	firstGrade = this -> getCoefficients() -> size();
	secondGrade = function.	getCoefficients() -> size();

	if (firstGrade >= secondGrade) {
		thirdGrade = firstGrade;
	} else {
		thirdGrade = secondGrade;
	}

	Function newFunction(thirdGrade);

	for (int i = 0; i < this -> coefficients -> size(); ++i) {
		newFunction.setCoefficient(this -> coefficients -> at(i) -= function.getCoefficients() -> at(i));
	}

	return newFunction;
}

Function Function::operator * (Function function) { // Multiplicación.

}

Function Function::operator / (Function function) { // División.

}

Function Function::operator ^ (Function function) { // Factor común.

}

bool Function::operator == (Function function) { // Iguales.
	bool same = true;
	int firstGrade, secondGrade;

	firstGrade = this -> getCoefficients() -> size();
	secondGrade = function.getCoefficients() -> size();

	if (firstGrade == secondGrade) {
		for (int i = 0; i < firstGrade; ++i) {
			if(this -> getCoefficients() -> at(i) != function.getCoefficients() -> at(i)) {
				same = false;
				break;
			}
		}
	}

	return same;
}

bool Function::operator != (Function function) { // Diferentes.

}