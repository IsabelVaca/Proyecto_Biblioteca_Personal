//
//  Usuario.h
//  Projecto biblioteca prueba
//
//  Created by Isabel Vaca on 14/11/24.
//

#include <string>
#include <iostream>
#include "Libro.h"


using namespace std;

class Usuario {
private:
    string nombre_usuario;
    string nombre_estanteria;
    string estanteria_usuario;
    
public:
    Usuario(): nombre_usuario(""), nombre_estanteria(""), estanteria_usuario(""){};
    Usuario(string n,  string nom_e, string est_u): nombre_usuario(n),  nombre_estanteria(nom_e), estanteria_usuario(est_u) {}
    
    string get_nombre_usuario();
    void set_nombre_usuario(string n);
    string get_nombre_estanteria();
    void set_nombre_estanteria(string nom_e);
    string get_estanteria_usuario();
    void set_estanteria_usuario(string est_u);
    
    void mostrar_estanteria(){
        cout<< "Libros en estanteria " << nombre_usuario << ":" << estanteria_usuario << endl;
        
    }
    
};
string Usuario::get_nombre_usuario(){
        return nombre_usuario;
}
    
void Usuario::set_nombre_usuario(string n){
        nombre_usuario = n;
}
string Usuario::get_nombre_estanteria(){
        return nombre_estanteria;
}
void Usuario::set_nombre_estanteria(string nom_e){
        nombre_estanteria = nom_e;
}
string Usuario::get_estanteria_usuario(){
        return estanteria_usuario;
}
void Usuario::set_estanteria_usuario(string est_u){
        estanteria_usuario = est_u;
}
