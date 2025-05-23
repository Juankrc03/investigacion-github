#include <iostream>
using namespace std;

// Prototipos de funciones
int sumar(int a, int b);
int restar(int a, int b);

int main() {
    int opcion, num1, num2;
    
    cout << "===== Calculadora Simple =====" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    switch(opcion) {
        case 1:
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
            
    }
    
    return 0;
}

// Implementaciones de las funciones
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

