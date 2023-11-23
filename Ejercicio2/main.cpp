#include <iostream>
#include <string>

using namespace std;

int main() {
    // Crear una cadena utilizando la clase string
    string miCadena = "Hola, esto es un ejemplo.";

    // Imprimir el tamaño de la cadena utilizando la función size()
    cout << "El tamano de la cadena es: " << miCadena.size() << " caracteres." << endl;

    // Comprobar si la cadena está vacía utilizando la función empty()
    if (miCadena.empty()) {
        cout << "La cadena esta vacia." << endl;
    } else {
        cout << "La cadena no esta vacia." << endl;
    }

    return 0;
}
