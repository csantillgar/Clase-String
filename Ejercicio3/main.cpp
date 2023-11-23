#include <iostream>
#include <string>

using namespace std;

int main() {
    // Crear dos cadenas utilizando la clase string
    string primeraCadena = "Hola, ";
    string segundaCadena = "mundo!";

    // Concatenar las dos cadenas y asignar el resultado a una tercera cadena
    string cadenaResultante = primeraCadena + segundaCadena;

    // Imprimir la cadena resultante
    cout << "La cadena resultante es: " << cadenaResultante << endl;

    return 0;
}
