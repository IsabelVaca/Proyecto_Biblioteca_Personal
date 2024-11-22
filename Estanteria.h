//
//  Estanteria.h
//  Biblioteca personal
//
//  Created by Isabel Vaca on 07/11/24.
//
#ifndef ESTANTERIA_H
#define ESTANTERIA_H
#include<string>
#include <iostream>
#include "Libro.h"

using namespace std;

class Estanteria{
private:
    Libro coleccion_libros[100];
    Libro libros_leidos[50];
    Libro libros_leyendo[50];
    int lim_colecc;
    int lim_leidos;
    int lim_leyendo;
    string estado;
public:
    Estanteria():  estado(""), lim_colecc(0),lim_leidos(0),lim_leyendo(0) {};
    
    string get_coleccion_libros();
    void agrega_libro(Libro& libro, string estado);
    void mostrar_estanteria();
    void mostrar_titulos();
    

};


void Estanteria::agrega_libro(Libro& libro, string estado){
    if(lim_colecc<100){
        coleccion_libros[lim_colecc]=libro;
        lim_colecc++;
        if(estado == "leido"){
            if(lim_leidos<50){
                libros_leidos[lim_leidos] = libro;
                lim_leidos++;
            }else{
                cout<<"Lista libros leidos llena";
            }
        }else if(estado== "en lectura"){
            if (lim_leyendo<50){
                libros_leyendo[lim_leyendo] = libro;
                lim_leyendo++;
            }else{
                cout<< "Lista libros en lectura llena";
            }
        }else{
            cout<<"Estado no valido. Usa: 'leido', 'en lectura' ";
        }
        
    }
    else {
        cout << "lEstanteria llena" << endl;
    }
}

void Estanteria::mostrar_estanteria(){
    cout<< "Libros leidos: ";
    for(int i=0; i< lim_leidos; i++){
        libros_leidos[i].mostrar_libro();
    }
    cout<< "Libros en lectura";
    for(int i=0; i< lim_leyendo; i++){
        libros_leyendo[i].mostrar_libro();
    }
        
}
string Estanteria::get_coleccion_libros(){
    string libros;
    for (int i=0; i<lim_colecc;i++){
        libros+= coleccion_libros[i].get_titulo();
        if (i<lim_colecc - 1) {
            libros+= ", ";
        }
    }
    return libros;
}
void Estanteria::mostrar_titulos(){
    cout<< "Titulos en estanteria:" <<get_coleccion_libros() << endl;
}
#endif
