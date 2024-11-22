//
//  Libro_digital.h
//  Biblioteca personal
//
//  Created by Isabel Vaca on 22/11/24.
//
#include "Libro.h"
#include <iostream>
#ifndef LIBRO_DIGITAL
#define LIBRO_DIGITAL
using namespace std;
class Libro_digital: public Libro{
private:
    float tamano_archivo;//En mb
    
public:
    Libro_digital(string t, string g, string a, float tam):
    Libro(t,g,a), tamano_archivo(tam){}
    
    float get_tamano_archivo(){
        return tamano_archivo;
    }
    void set_tamano_archivo(float tam){
        tamano_archivo = tam;
    }
    void mostrar_libro_digital() {
           mostrar_libro();
           cout << " Tamaño del archivo: " << tamano_archivo << " MB" << endl;
       }
    
};
#endif
