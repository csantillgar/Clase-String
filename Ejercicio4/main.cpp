#include <iostream>
#include <string>

using namespace std;

int main() {
    // Crear una cadena utilizando la clase string
    string miCadena = "Hola, mundo! Esto es un ejemplo.";

    // Utilizar la función find() para buscar una subcadena
    size_t indiceInicio = miCadena.find("mundo");

    // Imprimir el índice de inicio de la subcadena
    if (indiceInicio != string::npos) {
        cout << "La subcadena 'mundo' comienza en el indice: " << indiceInicio << endl;

        // Utilizar la función replace() para reemplazar la subcadena por otra
        miCadena.replace(indiceInicio, 5, "profe");

        // Imprimir la cadena resultante
        cout << "La cadena resultante es: " << miCadena << endl;
    } else {
        cout << "La subcadena no fue encontrada." << endl;
    }

    return 0;
}

