#include "Function.h"


// Constructor.

Function::Function(int grade) {
	this -> grade = grade;
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
	std::cout << "Eliminando objeto: " << this << std::endl;
}

// Operadores sobrecargados.

vector <int>* Function::operator + (Function* function) { // Suma.
	for (int i = 0; i < this -> coefficients -> size(); ++i) {
		this -> coefficients -> at(i) += function -> getCoefficients() -> at(i);
	}

	return coefficients;
}

vector <int>* Function::operator - (Function* function) { // Resta.
	for (int i = 0; i < this -> coefficients -> size(); ++i) {
		this -> coefficients -> at(i) -= function -> getCoefficients() -> at(i);
	}

	return coefficients;
}

vector <int>* Function::operator * (Function* function) { // Multiplicación.

}

vector <int>* Function::operator / (Function* function) { // División.

}

vector <int>* Function::operator ^ (Function* function) { // Factor común.

}

vector <int>* Function::operator == (Function* function) { // Iguales.

}

vector <int>* Function::operator != (Function* function) { // Diferentes.

}