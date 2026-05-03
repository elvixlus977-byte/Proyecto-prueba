#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream arch("archivo1.dat", ios::binary);

    if (!arch) {
        cout << "Error al abrir el archivo\n";
        return 1;
    }

    char c;
    int v1;
    float v2;

    arch.read((char*)&c, sizeof(c));
    cout << "caracter: " << c << endl;

    arch.read((char*)&v1, sizeof(v1));
    cout << "entero: " << v1 << endl;

    arch.read((char*)&v2, sizeof(v2));
    cout << "float: " << v2 << endl;

    arch.close();

    return 0;
}