//
//  Estanteria.h
//  Biblioteca personal corregido lol
//
//  Created by Isabel Vaca on 26/11/24.
//
#ifndef ESTANTERIA_H
#define ESTANTERIA_H

#include <string>
#include <iostream>
#include "Libro.h"
#include "Libro_digital.h"
#include "Libro_fisico.h"

using namespace std;

// Clase Estanteria
class Estanteria {
    //Atributos
private:
    string coleccion_titulos[150];         // Títulos de todos los libros
    Libro libros_leidos[50];              // Libros leidos
    Libro libros_leyendo[50];             // Libros en lectura
    Libro libros_pendientes[50];          // Libros pendientes
    Libro_digital libros_digitales[50];   // Libros digitales
    Libro_fisico libros_fisicos[50];      // Libros físicos

    int lim_libros_dig; //limites de cada arreglo
    int lim_libros_fisi;
    int lim_colecc;
    int lim_leidos;
    int lim_leyendo;
    int lim_pendientes;

public:
    //Constructor
    Estanteria()
        : lim_colecc(0), lim_leidos(0), lim_leyendo(0),
          lim_libros_dig(0), lim_libros_fisi(0), lim_pendientes(0) {}

    // Metodos
    void agrega_libro_dig(Libro_digital& libro);
    void agrega_libro_fisi(Libro_fisico& libro);
    void agregar_libro_pendiente(Libro& libro);
    void mostrar_estanteria();
    void mostrar_libros_pendientes();
    Libro_digital buscar_lib_digi(string titulo);
    Libro_fisico buscar_lib_fisi(string titulo);
    
};

// Metodo para agregar un libro digital
void Estanteria::agrega_libro_dig(Libro_digital& libro) {
    if (lim_colecc < 150) {
        coleccion_titulos[lim_colecc++] = libro.get_titulo();
        if (lim_libros_dig < 50) {
            libros_digitales[lim_libros_dig++] = libro;
        } else {
            cout << "Lista de libros digitales llena\n";
        }
        if (libro.get_estado() == "leido") {
            if (lim_leidos < 50) {
                libros_leidos[lim_leidos++] = libro;
            } else {
                cout << "Lista de libros leidos llena\n";
            }
        } else if (libro.get_estado() == "en lectura") {
            if (lim_leyendo < 50) {
                libros_leyendo[lim_leyendo++] = libro;
            } else {
                cout << "Lista de libros en lectura llena\n";
            }
        } else if (libro.get_estado() == "pendiente") {
            agregar_libro_pendiente(libro);
        } else {
            cout << "Estado no valido. Usa: 'leido', 'en lectura', 'pendiente'.\n";
        }
    } else {
        cout << "Estanteria llena\n";
    }
}

// Método para agregar un libro físico
void Estanteria::agrega_libro_fisi(Libro_fisico& libro) {
    if (lim_colecc < 150) {
        coleccion_titulos[lim_colecc++] = libro.get_titulo();
        if (lim_libros_fisi < 50) {
            libros_fisicos[lim_libros_fisi++] = libro;
        } else {
            cout << "Lista de libros fisicos llena\n";
        }
        if (libro.get_estado() == "leido") {
            if (lim_leidos < 50) {
                libros_leidos[lim_leidos++] = libro;
            } else {
                cout << "Lista de libros leidos llena\n";
            }
        } else if (libro.get_estado() == "en lectura") {
            if (lim_leyendo < 50) {
                libros_leyendo[lim_leyendo++] = libro;
            } else {
                cout << "Lista de libros en lectura llena\n";
            }
        } else if (libro.get_estado() == "pendiente") {
            agregar_libro_pendiente(libro);
        } else {
            cout << "Estado no valido. Usa: 'leido', 'en lectura', 'pendiente'.\n";
        }
    } else {
        cout << "Estanteria llena\n";
    }
}

// agregar libro pendiente
void Estanteria::agregar_libro_pendiente(Libro& libro) {
    if (lim_pendientes < 50) {
        libros_pendientes[lim_pendientes++] = libro;
    } else {
        cout << "Lista de libros pendientes llena\n";
    }
}

//mostrar libros pendientes
void Estanteria::mostrar_libros_pendientes() {
    cout << "\n--- Libros pendientes ---\n";
    if (lim_pendientes == 0) {
        cout << "No hay libros pendientes\n";
        return;
    }
    for (int i = 0; i < lim_pendientes; i++) {
        libros_pendientes[i].mostrar_libro();
    }
}

// Método para mostrar todos los libros de la estantería
void Estanteria::mostrar_estanteria() {
    cout << "\n--- Coleccion de titulos ---\n";
    for (int i = 0; i < lim_colecc; i++) {
        cout << coleccion_titulos[i] << endl;
    }
    cout << "\n--- Libros fisicos ---\n";
    for (int i = 0; i < lim_libros_fisi; i++) {
        libros_fisicos[i].mostrar_libro_fisico();
    }
    cout << "\n--- Libros digitales ---\n";
    for (int i = 0; i < lim_libros_dig; i++) {
        libros_digitales[i].mostrar_libro_digital();
    }
    cout << "\n--- Libros leidos ---\n";
    for (int i = 0; i < lim_leidos; i++) {
        libros_leidos[i].mostrar_libro();
    }
    cout << "\n--- Libros en lectura ---\n";
    for (int i = 0; i < lim_leyendo; i++) {
        libros_leyendo[i].mostrar_libro();
    }
    mostrar_libros_pendientes(); // Mostrar también los libros pendientes
}

// Metodos para buscar libros
Libro_digital Estanteria::buscar_lib_digi(string titulo) {
    for (int i = 0; i < lim_libros_dig; i++) {
        if (libros_digitales[i].get_titulo() == titulo) {
            return libros_digitales[i];
        }
    }
    cout << "Libro digital no encontrado\n";
    return Libro_digital();
}

Libro_fisico Estanteria::buscar_lib_fisi(string titulo) {
    for (int i = 0; i < lim_libros_fisi; i++) {
        if (libros_fisicos[i].get_titulo() == titulo) {
            return libros_fisicos[i];
        }
    }
    cout << "Libro fisico no encontrado\n";
    return Libro_fisico();
}

#endif
