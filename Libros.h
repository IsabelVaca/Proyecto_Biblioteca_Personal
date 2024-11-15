//
//  Libro.h
//  Projecto biblioteca prueba
//
//  Created by Isabel Vaca on 14/11/24.
//


#include <string>
#include <iostream>

using namespace std;
 
class Libro {
private:
    string titulo;
    string genero;
    
public:
    Libro(string t, string g): titulo(t), genero(g){}
    
    string get_titulo();
    string get_genero();
    
    void set_titulo(string t);
    void set_genero(string g);
    
    void mostrar_libro(){
        cout<<" Titulo: " << titulo<< endl;
        cout<<"Genero: " << genero << endl;
    }
    
};
string Libro::get_titulo(){
    return titulo;
}
string Libro::get_genero(){
    return genero;
}
void Libro::set_titulo(string t){
    titulo = t;
}
void Libro::set_genero(string g){
    genero = g;
}
    
