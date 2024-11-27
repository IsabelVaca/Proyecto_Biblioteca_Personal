/*
 *
 * Biblioteca personal
 *Isabel Vaca Sánchez
 *A01352522
 *
 */

/*
 *Clase Libro que tiene los atributos generales del libro y tiene metodos getters, setters y un metodo para mostrar la
 *info completa del libro.
 *Es clase padre de Libro_digital y Libro_fisico
 */


#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>

using namespace std;

//Declaracion de clase Libro
class Libro {
protected:
    //Declaracion de atributos privados
    string titulo;
    string genero;
    string autor;
    string estado;

public:
    //Constructor por default
    Libro() : titulo(""), genero(""), autor(""), estado("") {}
    //Constructor que recibe valores para llenar variables de la instancia
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

/*
*getter titulo
*@param:
*@return: string:titulo
*/
string Libro::get_titulo() {
    return titulo;
}
/*
*getter genero
*@param:
*@return: string:genero
*/
string Libro::get_genero() {
    return genero;
}
/*
*getter autor
*@param:
*@return: string:autor
*/
string Libro::get_autor() {
    return autor;
}
/*
*getter estado
*@param:
*@return: string:estado
*/
string Libro::get_estado() {
    return estado;
}
/*
*setter titulo
*@param:string:t
*@return:
*/
void Libro::set_titulo(string t) {
    titulo = t;
}
/*
*setter genero
*@param:string:g
*@return:
*/
void Libro::set_genero(string g) {
    genero = g;
}
/*
*setter autor
*@param:string:a
*@return:
*/
void Libro::set_autor(string a) {
    autor = a;
}
/*
*setter estado
*@param:string:e
*@return:
*/
void Libro::set_estado(string e) {
    estado = e;
}
/*
*Muestra informacion completa del libro
*@param:
*@return:
*/
void Libro::mostrar_libro() {
    cout << "Titulo: " << titulo << ", Autor: " << autor << ", Genero: " << genero << ", Estado: " << estado << endl;
}

#endif
