//
//  Libros.h
//  Biblioteca personal corr
//
//  Created by Isabel Vaca on 08/11/24.
//

#ifndef LIBROS_H
#define LIBROS_H

#include <string>
#include <iostream>

using namespace std;

class Libro {
private:
    string titulo;
    string genero;

public:
    Libro(string t, string g): titulo(t), genero(g) {}

    string get_titulo(){
        return titulo;
    }

    string get_genero(){
        return genero;
    }

    void mostrar_libro(){
        cout << "Título: " << titulo << endl;
        cout << "Género: " << genero << endl;
    }
};

#endif 
