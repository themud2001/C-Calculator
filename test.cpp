//First program of calculator

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

//Second program of calculator

#include <iostream>
using namespace std;

int main()
{
    int a, b, d;
    char c;
    cout << "enter operand:";
    cin >> c;

    if (c == '+')
    {
        cin >> a >> b;
        d = a + b;
        cout <<"a+b="<< d;
    }
    if (c == '-')
    {
        cin >> a >> b;
        d = a - b;
        cout <<"a-b="<< d;
    }
    if (c == '/')
    {
        cin >> a >> b;
        d = a / b;
        cout <<"a/b="<< d;
    }
    if (c == '*')
    {
        cin >> a >> b;
        d = a * b;

        cout <<"a*b="<< d;
    }
    return 0;
}
