//
//  Libro_fisico.h
//  Biblioteca personal corregido lol
//
//  Created by Isabel Vaca on 26/11/24.
//
#ifndef LIBRO_FISICO_H
#define LIBRO_FISICO_H

#include "Libro.h"

class Libro_fisico : public Libro {
private:
    int num_paginas; //numero de paginas
    string condicion; // Nuevo o Usado

public:
    //Constructor
    Libro_fisico() : Libro(), num_paginas(0), condicion("") {}
    Libro_fisico(string t, string g, string a, string e, int num_pag, string c) : Libro(t, g, a, e), num_paginas(num_pag), condicion(c) {}
//Metodos getters y setters
    int get_num_paginas();
    string get_condicion();
    void set_num_paginas(int num_pag);
    void set_condicion(string c);
    void mostrar_libro_fisico();
    float calcular_tiempo_lectura(int minutos_por_pagina);
};
//getters
int Libro_fisico::get_num_paginas() {
    return num_paginas;
}

string Libro_fisico::get_condicion() {
    return condicion;
}
//setters
void Libro_fisico::set_num_paginas(int num_pag) {
    num_paginas = num_pag;
}

void Libro_fisico::set_condicion(string c) {
    if (c == "Nuevo" || c == "Usado") {
        condicion = c;
    } else {
        cout << "Condición invalida. Usa 'Nuevo' o 'Usado'.\n";
    }
}
//Muestra info del libro fisico
void Libro_fisico::mostrar_libro_fisico() {
    mostrar_libro();
    cout << "Numero de paginas: " << num_paginas << endl;
    cout << "Condición: " << condicion << endl;
}
//Calcula tiempo de lectura dependiendo del tiempo de lectura por pagina
float Libro_fisico::calcular_tiempo_lectura(int minutos_por_pagina) {
    return num_paginas * minutos_por_pagina;
}

#endif
