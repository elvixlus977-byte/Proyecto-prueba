#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream arch("archivo2.dat", ios::binary);

    float x, y;
//Recordemso que en psiiuciones siempre meepzamso desde 0 .
//y lso bytes se mepiezan desde 1 
//si dice 8 ahi empeizan el float 
//0,1,2,3 primer int----- 4,5,6,7 segundoi int---- 8 empieza float 
//cvomo leee el 8 todo el varlo es 8,9,10,11---- por lo qeu el siguiente valro qeu qeudara en final es 12 y como solo pedimso leerlo es 
// 12,13,14,15 este es el segundol float 
//reucerdda qeu esto es en base de posicion.
    arch.seekg(8, ios::beg); // saltar los 2 ints

    arch.read((char*)&x, sizeof(x));
    arch.read((char*)&y, sizeof(y));

    cout << x << " " << y << endl;

    arch.close();
    return 0;
}