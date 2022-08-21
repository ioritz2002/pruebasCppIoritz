#include <iostream>
#include <string>
using namespace std;

class Persona{
    string dni;
    string nombre;
    int edad;
public:
    void setDni(string dni);
    void setNombre(string nombre);
    void setEdad(int edad);
    string getDni();
    string getNombre();
    int getEdad();

    void mostrar();
    bool esMayorDeEdad(int edad);
};

void Persona::setDni(std::string dni) {
    this->dni = dni;
}

void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

string Persona::getDni() {
    return this->dni;
}

string Persona::getNombre() {
    return this->nombre;
}

int Persona::getEdad() {
    return this->edad;
}

void Persona::mostrar() {
    cout << "---PERSONA---\nDNI:" + this->dni + "\n";
    cout << "Nombre: " + this->nombre + "\n";
    cout << "Edad: " + this->edad << endl;
}

bool Persona::esMayorDeEdad(int edad) {
    if(edad >= 18){
        return true;
    }
    return false;
}

int main() {
    Persona* persona;
    persona = new Persona();


    delete persona;


    return 0;
}
