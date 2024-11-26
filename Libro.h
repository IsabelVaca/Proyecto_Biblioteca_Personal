//
//  Libro.h
//  Biblioteca personal corregido lol
//
//  Created by Isabel Vaca on 26/11/24.
//
#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>

using namespace std;
//Clase Libro clase "padre" de libro digital y fisico
class Libro {
protected:
    //Atributos
    string titulo;
    string genero;
    string autor;
    string estado;

public:
    //Constructor y valores default
    Libro() : titulo(""), genero(""), autor(""), estado("") {}
    Libro(string t, string g, string a, string e) : titulo(t), genero(g), autor(a), estado(e) {}

    //Metodos
    //getters
    string get_titulo();
    string get_genero();
    string get_autor();
    string get_estado();
    //setters
    void set_titulo(string t);
    void set_genero(string g);
    void set_autor(string a);
    void set_estado(string e);
    void mostrar_libro();
};

string Libro::get_titulo() {
    return titulo;
}
string Libro::get_genero() {
    return genero;
}
string Libro::get_autor() {
    return autor;
}
string Libro::get_estado() {
    return estado;
}
void Libro::set_titulo(string t) {
    titulo = t;
}
void Libro::set_genero(string g) {
    genero = g;
}
void Libro::set_autor(string a) {
    autor = a;
}
void Libro::set_estado(string e) {
    estado = e;
}
void Libro::mostrar_libro() {
    cout << "Titulo: " << titulo << ", Autor: " << autor << ", Genero: " << genero << ", Estado: " << estado << endl;
}

#endif
