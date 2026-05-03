#include <iostream>
#include <fstream>

using namespace std;

void crear() {
    ofstream arch("archivo3.dat", ios::binary | ios::trunc);

    if (!arch) {
        cout << "Error al crear archivo\n";
        return;
    }

    int v1 = 10, v2 = 20, v3 = 30;

    arch.write((char*)&v1, sizeof(v1));
    arch.write((char*)&v2, sizeof(v2));
    arch.write((char*)&v3, sizeof(v3));

    arch.close();
}

void agregar() {
    ofstream arch("archivo3.dat", ios::binary | ios::app);

    if (!arch) {
        cout << "Error al abrir archivo\n";
        return;
    }

    float f1 = 5.45f;

    arch.write((char*)&f1, sizeof(f1));

    arch.close();
}

void imprimir() {
    ifstream arch("archivo3.dat", ios::binary);

    if (!arch) {
        cout << "Error al abrir archivo\n";
        return;
    }

    int v1, v2, v3;
    float f1;

    arch.read((char*)&v1, sizeof(v1));
    cout << "entero: " << v1 << endl;

    arch.read((char*)&v2, sizeof(v2));
    cout << "entero: " << v2 << endl;

    arch.read((char*)&v3, sizeof(v3));
    cout << "entero: " << v3 << endl;

    arch.read((char*)&f1, sizeof(f1));
    cout << "float: " << f1 << endl;

    arch.close();
}

int main() {
    crear();
    agregar();
    imprimir();
    return 0;
}