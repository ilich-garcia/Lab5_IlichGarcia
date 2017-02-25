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

int Function::operator()() { // Factor común.
	int number, grade;

	grade = this -> coefficients -> size();
	number = this -> coefficients -> at(0);

	for (int i = 0; i < grade; ++i) {
		if (this -> coefficients -> at(i) <= number) {
			number = this -> coefficients -> at(i);
		}
	}

	for (int i = 0; i < grade; ++i)	{
		if (this -> coefficients -> at(i) % number != 0) {
			cout << number;
			return 1;
		}
	}

	return number;
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
	bool different = false;
	int firstGrade, secondGrade;

	firstGrade = this -> getCoefficients() -> size();
	secondGrade = function.getCoefficients() -> size();

	if (firstGrade == secondGrade) {
		for (int i = 0; i < firstGrade; ++i) {
			if(this -> getCoefficients() -> at(i) != function.getCoefficients() -> at(i)) {
				different = true;
				break;
			}
		}
	}

	return different;
}

ostream& operator << (ostream& out, const Function function) {
	out << function.toString();
    return out;
}

string Function::toString()const {
	stringstream ss;

	for (int i = 0; i <= this -> coefficients -> size() - 1; ++i) {
		if (this -> coefficients -> at(i) > 0 && i != 0) {
			ss << "+" << this -> coefficients -> at(i) << "x^" << i;
		} else if (this -> coefficients -> at(i) < 0) {
			ss << this -> coefficients -> at(i) << "x^" << i;
		} else {
			ss << "+" << this -> coefficients -> at(i) << "x^" << i;
		}
	}

	ss << "\n";

	return ss.str();
}