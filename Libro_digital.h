//
//  Libro_digital.h
//  Biblioteca personal corregido lol
//
//  Created by Isabel Vaca on 26/11/24.
//
#ifndef LIBRO_DIGITAL_H
#define LIBRO_DIGITAL_H

#include "Libro.h"
//Clase libro digital, hereda de Libro
class Libro_digital : public Libro {
    //Atributo
private:
    float tamano_archivo; // Tamaño del archivo en MB

public:
    //Constructor y valores default
    Libro_digital() : Libro(), tamano_archivo(0.0) {}
    Libro_digital(string t, string g, string a, string e, float tam) : Libro(t, g, a, e), tamano_archivo(tam) {}
//Getters, setters y metodos
    float get_tamano_archivo();
    void set_tamano_archivo(float tam);
    void mostrar_libro_digital();
};

float Libro_digital::get_tamano_archivo() {
    return tamano_archivo;
}

void Libro_digital::set_tamano_archivo(float tam) {
    tamano_archivo = tam;
}
//Muestra info del libro digital
void Libro_digital::mostrar_libro_digital() {
    mostrar_libro();
    cout << "Tamaño del archivo: " << tamano_archivo << " MB" << endl;
}

#endif
