//
//  Usuario.h
//  Biblioteca personal corregido lol
//
//  Created by Isabel Vaca on 26/11/24.
//
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include "Libro.h"
#include "Estanteria.h"

using namespace std;
//Clase Usuario
class Usuario {
    //Atributos
private:
    string nombre_usuario;
    Estanteria estanteria;

public:
    //Constructor
    Usuario() : nombre_usuario("") {}
    Usuario(string n) : nombre_usuario(n), estanteria() {}

    //Getters,setters y metodos
    string get_nombre_usuario();
    void set_nombre_usuario(string n);
    void agregar_libro_fisico(string titulo, string genero, string autor, string estado, int num_pag, string condicion);
    void agregar_libro_digital(string titulo, string genero, string autor, string estado, float tamano);
    void mostrar_estanteria();
    float calcular_tiempo_lib_fisi(string titulo, int minutos_por_pagina);
    Estanteria get_estanteria() {
           return estanteria;
       }
};

string Usuario::get_nombre_usuario() {
    return nombre_usuario;
}

void Usuario::set_nombre_usuario(string n) {
    nombre_usuario = n;
}
//Agrega libro fisico a la estanteria del usuario
void Usuario::agregar_libro_fisico(string t, string g, string a, string e, int num_pag, string c) {
    Libro_fisico libro(t, g, a, e, num_pag, c);
    estanteria.agrega_libro_fisi(libro);
}
//Agrega libro digital a la estanteria del usuario
void Usuario::agregar_libro_digital(string t, string g, string a, string e, float tam) {
    Libro_digital libro(t, g, a, e, tam);
    estanteria.agrega_libro_dig(libro);
}
//Muestra la estanteria completa
void Usuario::mostrar_estanteria() {
    cout << "Estanteria de: " << nombre_usuario << ":\n";
    estanteria.mostrar_estanteria();
}
//Calcula el tiempo de lectura solo de libros fisicos
float Usuario::calcular_tiempo_lib_fisi(string t, int minutos_por_pagina) {
    Libro_fisico libro = estanteria.buscar_lib_fisi(t);
    return libro.calcular_tiempo_lectura(minutos_por_pagina);
}

#endif
