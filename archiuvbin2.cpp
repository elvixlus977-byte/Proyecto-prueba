#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream arch("archivo1.dat", ios::binary);

    if (!arch) {
        cout << "Error al crear el archivo\n";
        return 1;
    }

    char letra = 'A';
    int valor1 = 12;
    float valor2 = 5.25f;

    arch.write((char*)&letra, sizeof(letra));
    arch.write((char*)&valor1, sizeof(valor1));
    arch.write((char*)&valor2, sizeof(valor2));

    arch.close();

    cout << "Se creo un archivo binario con un char, un int y un float.\n";

    return 0;
}

