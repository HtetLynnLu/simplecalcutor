#include <iostream>
using namespace std;

int main(){
double num1, num2;
char op;
cout << "Enter your first numbers :"<<endl;
cin >> num1;
cout << "Enter your operator (+ - * /) :"<<endl;
cin >> op;
cout << "Enter your second numbers :"<< endl;
cin >> num2;
switch(op)
{
    case '+':
cout << num1 << op << num2 << "=" << num1+num2 << endl;
    break;
    case '-':
cout << num1 << op << num2 << "="<< num1-num2 << endl;
    break;
    case '*':
cout << num1 << op << num2<< "="<< num1*num2 << endl;
    break;
case '/':
    cout << num1 << op << num2<< "="<< num1 / num2  << endl;
break;
default:
cout << "Mechine can't understand! "<< endl; }
    return 0;
}