//
//  main.cpp
//  Biblioteca personal corr
//
//  Created by Isabel Vaca on 08/11/24.
//
#include <iostream>
#include "Estanteria.h"
#include "Usuario.h"

using namespace std;

int main(){
    
    // Objeto 1
    Libro libro1("The poppy war", "Fantasy");
    
    // Objeto 2
    Estanteria estanteria("Estantería de Juan");
    
    // Agregar el libro a la estantería
    string titulo_libro = libro1.get_titulo();
    estanteria.agregar_libro(titulo_libro);
    
    // Mostrar libros en la estantería
    estanteria.mostrar_libros();
    
    // Objeto 3
    Usuario usuario1("Juan", "Estantería de Juan");
    
    // Agregar el libro de título a la estantería del usuario
    usuario1.agregar_lib_estanteria(libro1.get_titulo());
    
    // Mostrar libros en la estantería del usuario
    usuario1.mostrar_libros();
    
    return 0;
}
