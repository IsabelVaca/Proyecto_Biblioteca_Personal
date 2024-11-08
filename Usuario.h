//
//  Usuario.h
//  Biblioteca personal corr
//
//  Created by Isabel Vaca on 08/11/24.
//
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <list>
#include "Libros.h"
#include "Estanteria.h"

using namespace std;

class Usuario {
private:
    string nombre;
    Estanteria estanteria;

public:
    Usuario(string n, string nombre_estanteria) : nombre(n), estanteria(nombre_estanteria) {}

    string get_nombre() {
        return nombre;
    }

    void set_nombre(string n) {
        nombre = n;
    }

    void agregar_lib_estanteria(string n) {
        estanteria.agregar_libro(n);
    }

    void mostrar_libros() {
        estanteria.mostrar_libros();
    }
};

#endif 
