//
//  Estantería.h
//  Biblioteca personal corr
//
//  Created by Isabel Vaca on 08/11/24.
//
#ifndef ESTANTERIA_H  
#define ESTANTERIA_H
#include <string>
#include <list>
#include <iostream>

using namespace std;

class Estanteria{
private:
    string nombre;
    list<string> l_libros;

public:
    Estanteria() {}  
    Estanteria(string n): nombre(n) {}

    void agregar_libro(string n){
        l_libros.push_back(n);
    }

    void mostrar_libros(){
        cout << "Libros en estanteria: " << nombre << endl;
        for (auto libro : l_libros) {
            cout << libro << endl;
        }
    }
};
#endif
