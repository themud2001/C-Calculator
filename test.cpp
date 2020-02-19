#include <iostream>
#include <string>
#include "Calculator.h"

using namespace std;

int main() {
	string equation;
	
	cout<<"Enter a basic formula:"<<endl;
	getline(cin, equation);

	Calculator calc(equation);
	cout<<calc.evaluate()<<endl;

	return 0;
}