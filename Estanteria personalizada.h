//
//  Estanteria personalizada.h
//  Projecto biblioteca prueba
//
//  
//
#include <iostream>
#include <string>

using namespace std;

class EstanteriaPersonalizada {
private:
    string nombre;
    string libros_leidos[50]; 
    string libros_leyendo[50];
    int lim_leidos;
    int lim_leyendo;

public:
    
    
    EstanteriaPersonalizada(string n) : nombre(n), lim_leidos(0), lim_leyendo(0) {}


    void agrega_libro_leido(string libro) {
        if (lim_leidos < 50) {
            libros_leidos[lim_leidos] = libro;
            lim_leidos++;
        } else {
            cout << "Limite de libros leídos alcanzado!" << endl;
        }
    }

    void agrega_libro_leyendo(string libro) {
        if (lim_leyendo < 50) {
            libros_leyendo[lim_leyendo] = libro;
            lim_leyendo++;
        } else {
            cout << "Limite de libros en lectura alcanzado!" << endl;
        }
    }

  

    void mostrar_estanteria() {
        cout << "Estantería: " << nombre << endl;

        cout << "Libros leídos: ";
        for (int i = 0; i < lim_leidos; i++) {
            cout << libros_leidos[i] << " ";
        }
        cout << endl;

        cout << "Libros en lectura: ";
        for (int i = 0; i < lim_leyendo; i++) {
            cout << libros_leyendo[i] << " ";
        }
        cout << endl;
    }


    string get_nombre() {
        return nombre;
    }
};
