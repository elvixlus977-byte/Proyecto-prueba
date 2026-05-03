#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream arch("archivo2.dat", ios::binary);

    if (!arch) {
        cout << "Error\n";
        return 1;
    }
//int pesan 4 * 2 = 8
//flaot pesan 4* 2 = 8
//ytotal es 16
//en posiciones es 0,1,2,3 =1 int, 4,5,6,7=2 int
//8,9,10,11 = 1 float, 12,13,14,15= 2 float
//total de 15 posiciones
    int a, b;
    float x, y;

    cout << "Ingrese 2 enteros:\n";
    cin >> a >> b;

    cout << "Ingrese 2 floats:\n";
    cin >> x >> y;

    arch.write((char*)&a, sizeof(a));
    arch.write((char*)&b, sizeof(b));
    arch.write((char*)&x, sizeof(x));
    arch.write((char*)&y, sizeof(y));

    arch.close();
    return 0;
}