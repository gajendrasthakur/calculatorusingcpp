#include <iostream>
using namespace std;
int main()
{
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    switch (oper)
    {
        case '+':
            cout <<"Sum is " << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout <<"Difference is " << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout <<"Product is " << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout <<"Quotient is " << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }
    return 0;
}
