//
//  Estanteria.h
//  Projecto biblioteca prueba
//
//  Created by Isabel Vaca on 14/11/24.
//


#include<string>
#include <iostream>

using namespace std;

class Estanteria{
private:
    string nombre;
    string coleccion_libros[100];
    int lim_colecc;
    
public:
    Estanteria(): nombre(" "), lim_colecc(0){};
    Estanteria(string n): nombre(n), lim_colecc(0){};
    
    string get_nombre();
    string get_coleccion_libros();
    
    void set_nombre(string n);
    void agrega_libro(string);
    void mostrar_estanteria();

};


string Estanteria::get_nombre(){
    return nombre;
}
void Estanteria::set_nombre(string n){
    nombre = n;
}
void Estanteria::agrega_libro(string libro){
    if(lim_colecc<100){
        coleccion_libros[lim_colecc]=libro;
        lim_colecc++;
    }
    else {
        cout << "Estanteria llena" << endl;
    }
}
string Estanteria::get_coleccion_libros(){
    string libros;
    for (int i=0; i<lim_colecc;i++){
        libros+= coleccion_libros[i];
        if (i<lim_colecc - 1) {
            libros+= ", ";
        }
    }
    return libros;
        
}
void Estanteria::mostrar_estanteria(){
    cout<< "Libros en estanteria " << nombre << ":" <<get_coleccion_libros() << endl;
}
