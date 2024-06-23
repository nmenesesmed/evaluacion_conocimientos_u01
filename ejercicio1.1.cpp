#include <iostream>
using namespace std;
int main(){
    int  op1, op2;
    int  r;
    char  op;
    
    cout << "Ingresa un número: "; cin >> op1;
    cout << "Ingresa otro número: "; cin >> op2;
    cout << "Ingresa un operador (+ , - , * , / ): "; cin >> op;


    switch(op){
        case '+':
        r = op1 + op2;
        break;
        case '-':
        r = op1 - op2;
        break;
        case '*':
        r = op1 * op2;
        break;
        case '/':
        r = op1 / op2;
        break;
    }

    cout << "El resultado es: " << r << endl;

    return 0;

}