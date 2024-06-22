//Ejercicio3.cpp
//Meneses Medina, Norelia Yamile Nayeli
#include <iostream>
using namespace std;
// Prototipos de las funciones
double calcularSuma(int n);
int factorial(int num);
int main() {
int n;
cout << "Ingrese el valor de n: "; cin >> n;
// Calcular y mostrar la suma
double suma = calcularSuma(n);
cout << "La suma S es: " << suma << endl;
return 0;
}
// Función para calcular la suma
double calcularSuma(int n) {
double suma = 0.0;
for (int i = 1; i <= n; ++i) {
suma += factorial(i) / (2.0 * i);
}
return suma;
}
// Función para calcular el factorial de un número
int factorial(int num) {
int resultado = 1;
for (int i = 1; i <= num; ++i) {
resultado *= i;
}
return resultado;
}