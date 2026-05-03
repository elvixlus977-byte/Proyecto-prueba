#include <iostream> 

#include <fstream> 

  

using namespace std; 

  

int main() { 

    ifstream arch("archivo1.dat", ios::binary); 

  

    if (!arch) { 

        cout << "Error al abrir archivo\n"; 

        return 1; 

    } 

  

    float v2; 

  

    arch.seekg(5, ios::beg); // saltamos char + int 

    arch.read((char*)&v2, sizeof(v2)); 

  

    cout << "float: " << v2 << endl; 

  

    arch.close(); 

    return 0; 

} 