#include <iostream>
#include <string>

using namespace std;

int main() {
    // Crear una cadena utilizando la clase string
    string miCadena = "Hola, esto es un ejemplo.";

    // Utilizar la función substr() para obtener una subcadena
    string subcadena = miCadena.substr(6, 4); // Obtener una subcadena de 4 caracteres a partir del índice 6

    // Imprimir la subcadena obtenida
    cout << "La subcadena es: " << subcadena << endl;

    // Utilizar la función insert() para insertar otra cadena en la cadena original
    miCadena.insert(12, "mundo "); // Insertar "mundo " en el índice 12

    // Imprimir la cadena resultante
    cout << "La cadena resultante es: " << miCadena << endl;

    return 0;
}
