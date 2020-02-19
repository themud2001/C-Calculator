#ifndef CALCULATOR_INCLUDED

#define CALCULATOR_INCLUDED
#define ARRAY_SIZE 10
#include <string>

using namespace std;

class Calculator {
private:
	string equation;
	string equationArray[ARRAY_SIZE];

	void trimEquation() {
		string returnedStr = "";
		for(int i=0; i<equation.size(); i++) {
			if(equation[i] != ' ') {
				returnedStr += equation[i];
			}
		}

		equation = returnedStr;
	}

	void splitEquation() {
		int arrayIndex = 0;
		for(int i=0; i<equation.size(); i++) {
			if(equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/') {
				equationArray[++arrayIndex] += equation[i];
				arrayIndex++;
			} else {
				equationArray[arrayIndex] += equation[i];
			}
		}
	}

public:
	Calculator(string equation) {
		this->equation = equation;
		this->trimEquation();
		this->splitEquation();
	}

	double evaluate() {
		double total = 0;
		for(int i=0; i<ARRAY_SIZE; i++) {
			if(equationArray[i] == "+") {
				if(i == 1) {
					total += stoi(equationArray[i-1]) + stoi(equationArray[i+1]);
				} else {
					total += stoi(equationArray[i+1]);
				}
			} else if(equationArray[i] == "-") {
				if(i == 1) {
					total -= stoi(equationArray[i-1]) - stoi(equationArray[i+1]);
				} else {
					total -= stoi(equationArray[i-1]);
				}
			} else if(equationArray[i] == "*") {
				if(i == 1) {
					total += stoi(equationArray[i-1]) * stoi(equationArray[i+1]);
				} else {
					total *= stoi(equationArray[i+1]);
				}
			} else if(equationArray[i] == "/") {
				if(i == 1) {
					total += stoi(equationArray[i-1]) / stoi(equationArray[i+1]);
				} else {
					total /= stoi(equationArray[i+1]);
				}
			}
		}

		return total;
	}
};

#endif