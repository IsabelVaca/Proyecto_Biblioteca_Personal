//
//  Libro.h
//  Biblioteca personal
//
//  Created by Isabel Vaca on 07/11/24.
//
#ifndef LIBRO_H
#define LIBRO_H
#include <string>
#include <iostream>

using namespace std;
 
class Libro {
private:
    string titulo;
    string genero;
    string autor;
    
public:
    Libro(): titulo(""), genero(""), autor("") {}
    Libro(string t, string g, string a): titulo(t), genero(g), autor(a){}

    string get_titulo();
    string get_genero();
    string get_autor();
    
    void set_titulo(string t);
    void set_genero(string g);
    void set_autor(string a);
    void mostrar_libro(){
        cout<<" Titulo: " << titulo<< ", Autor:" << autor<< ", Genero: "
        << genero << endl;
    }
    
};
string Libro::get_titulo(){
    return titulo;
}
string Libro::get_genero(){
    return genero;
}
string Libro::get_autor(){
    return autor;
}
void Libro::set_titulo(string t){
    titulo = t;
}
void Libro::set_genero(string g){
    genero = g;
}
void Libro::set_autor(string a){
    autor = a;
}
    
#endif
