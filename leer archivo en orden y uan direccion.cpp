#include <iostream> 

#include <fstream> 

  

using namespace std; 

  

int main() { 

    ifstream arch("archivo1.dat", ios::binary); 

  

    if (!arch) { 

        cout << "Error\n"; 

        return 1; 

    } 

  

    char c; 

    float v2; 

  

    // Leer char 

    arch.read((char*)&c, sizeof(c)); 

    cout << "caracter: " << c << endl; 

  

    // Saltar el int (4 bytes) 

    arch.seekg(4, ios::cur); 

  

    // Leer float 

    arch.read((char*)&v2, sizeof(v2)); 

    cout << "float: " << v2 << endl; 

  

    arch.close(); 

    return 0; 

} 