//
//  Usuario.h
//  Biblioteca personal
//
//  Created by Isabel Vaca on 07/11/24.
//
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include "Libro.h"
#include "Estanteria.h"

using namespace std;

class Usuario {
private:
    string nombre_usuario;
    Estanteria estanteria;
    
public:
    Usuario(): nombre_usuario("") {};
    Usuario( string n ):  nombre_usuario(n) {}
    string get_nombre_usuario();
    void set_nombre_usuario(string n);
    void agregar_Libro(Libro& libro, string estado);
    void mostrar_estanteria();
    
};

void Usuario::agregar_Libro(Libro& libro, string estado){
    estanteria.agrega_libro(libro, estado);
}

string Usuario::get_nombre_usuario(){
        return nombre_usuario;
}
    
void Usuario::set_nombre_usuario(string n){
        nombre_usuario = n;
}
void Usuario:: mostrar_estanteria(){
    cout<< "Estanteria de: " << nombre_usuario << ":\n";
    estanteria.mostrar_estanteria();
}
#endif
