//Ejercicio2.cpp
//Meneses Medina, Norelia Yamile Nayeli
#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Ingresa un primer numero: "; 
    cin >> n1;
    cout << "Ingresa un segundo numero: "; 
    cin >> n2;

    int C = 0;
    int i = 1;

    while (i <= n1 && i <= n2) {
        if (n1 % i == 0 && n2 % i == 0) {
            C = C + 1;
        }
        i = i + 1;
    }

    if (C > 1) {
        cout << "NO son PESI" << endl;
    } else {
        cout << "Son PESI" << endl;
    }

    return 0;
}
