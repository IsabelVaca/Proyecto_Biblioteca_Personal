/*
 *
 * Biblioteca personal
 *Isabel Vaca Sánchez
 *A01352522
 *
 */


/*
 *Clase  Usuario que seria pues el usuario, este puede anadir libros fisicos y digitales a su estanteria.
 *Tiene metodos getters, setters, para agregar libros a la estanteria, para mostrar la estanteria con
 *todos los libros. Esta clase tiene composicion con los tipos de libros y con estanteria, ya que si se
 *elimina la clase también lo hacen los libros y la estanteria que fueron creados desde esta clase.
 *
 */
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include "Libro.h"
#include "Estanteria.h"

using namespace std;
//Declaracion de la clase Usuario
class Usuario {
    //Declaracion de atributos
private:
    string nombre_usuario;
    Estanteria estanteria;

public:
    //Constructor por default
    Usuario() : nombre_usuario("") {}
    //Constructor que recibe valores para llenar variables de la instancia
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
/*
 *getter nombre usuario
 *@param:
 *@return: string: nombre_usuario
 *
 */
string Usuario::get_nombre_usuario() {
    return nombre_usuario;
}
/*
 *setter nombre usuario
 *@param: string:n
 *@return:
 *
 */
void Usuario::set_nombre_usuario(string n) {
    nombre_usuario = n;
}
/*
 *agrega libro fisico a la estanteria
 *@param:string t, string g, string a, string e, int num_pag, string c
 *@return:
 *
 */
void Usuario::agregar_libro_fisico(string t, string g, string a, string e, int num_pag, string c) {
    Libro_fisico libro(t, g, a, e, num_pag, c);
    estanteria.agrega_libro_fisi(libro);
}
/*
 *agrega libro digital a la estanteria
 *@param:string t, string g, string a, string e, float tam.
 *@return:
 *
 */
void Usuario::agregar_libro_digital(string t, string g, string a, string e, float tam) {
    Libro_digital libro(t, g, a, e, tam);
    estanteria.agrega_libro_dig(libro);
}
/*
 *Muestra la estanteria
 *@param:
 *@return:
 *
 */
void Usuario::mostrar_estanteria() {
    cout << "Estanteria de: " << nombre_usuario << ":\n";
    estanteria.mostrar_estanteria();
}
/*
 *Calcula tiempo de lectura de libro fisico
 *@param:string t, int minutos_por_pagina
 *@return: float
 *
 */
float Usuario::calcular_tiempo_lib_fisi(string t, int minutos_por_pagina) {
    Libro_fisico libro = estanteria.buscar_lib_fisi(t);
    return libro.calcular_tiempo_lectura(minutos_por_pagina);
}

#endif
