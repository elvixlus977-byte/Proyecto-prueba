#include <iostream>
#include <string>

using namespace std;

class Persona {
// Atributos (por seguridad suelen ser privados)
private:
    string nombre;
    int edad;

// Métodos (públicos para poder usarlos desde fuera)
public:
    // Método para pedir datos
    void pedirDatos() {
        cout << "Introduce el nombre: ";
        getline(cin, nombre);
        cout << "Introduce la edad: ";
        cin >> edad;
        cin.ignore(); // Limpiar el buffer para evitar errores con getline después
    }

    // Método para mostrar datos
    void mostrarDatos() {
        cout << "\n--- Datos de la Persona ---" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

int main() {
    // 1. Creación del objeto (Instanciación)
    Persona persona1;

    // 2. Pedir datos al usuario
    persona1.pedirDatos();

    // 3. Mostrar los datos almacenados
    persona1.mostrarDatos();

    return 0;
}