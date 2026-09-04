#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    string nombreMasLargo = "";
    int validos = 0;
    int vacios = 0;
    int cortos = 0;
    int conEspacio = 0;
    int totalVocales = 0;

    while (true) {
        cout << "Nombre o FIN: ";
        getline(cin, nombre);

        // TODO 1: detectar FIN y terminar el ciclo
        if (nombre == "FIN") {
            break;
        }

        // TODO 2: validar entrada vacía
        if (nombre.empty()) {
            vacios++;
            continue;
        }

        // TODO 3: validar longitud mínima
        if (nombre.length() < 3) {
            cortos++;
            continue;
        }

        // TODO 4: contar nombre válido y si contiene espacio
        validos++;
        if (nombre.find(" ") != string::npos) {
            conEspacio++;
        }

        // TODO 5: recorrer caracteres con for y contar vocales
        for (char c : nombre) {
            // Se validan vocales ASCII tanto minúsculas como mayúsculas
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                totalVocales++;
            }
        }

        // TODO 6: actualizar nombreMasLargo cuando corresponda
        if (nombre.length() > nombreMasLargo.length()) {
            nombreMasLargo = nombre;
        }
    }

    // TODO 7: mostrar resumen final
    cout << "\n================ RESUMEN FINAL ================\n";
    if (validos > 0) {
        cout << "Nombres válidos: " << validos << endl;
        cout << "Entradas vacías: " << vacios << endl;
        cout << "Nombres cortos (<3 car.): " << cortos << endl;
        cout << "Nombres con espacios: " << conEspacio << endl;
        cout << "Nombre más largo: " << nombreMasLargo << endl;
        cout << "Total de vocales: " << totalVocales << endl;
    } else {
        cout << "No se ingresó ningún nombre válido." << endl;
        cout << "Entradas vacías: " << vacios << endl;
        cout << "Nombres cortos (<3 car.): " << cortos << endl;
    }
    cout << "===============================================\n";

    return 0;
}