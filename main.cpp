//
//  main.cpp
//  Projecto biblioteca prueba
//
//  Created by Isabel Vaca on 14/11/24.
//


#include <iostream>
#include "Estanteria.h"
#include "Usuario.h"
#include "Estanteria personalizada.h"
using namespace std;


int main() {
    
    //objeto 1
    Libro libro1("The poppy war", "Fantasy");
    Libro libro2("Pride and Prejudice", "Romance");
    
    //objeto 2
    Estanteria estanteria_Juan("Estanteria de Juan");
    
    string titulo_libro = libro1.get_titulo();
    
    estanteria_Juan.agrega_libro(titulo_libro);
    
    estanteria_Juan.mostrar_estanteria();
    
    //objeto 3
    Estanteria estanteria_Isa("Estantería de Isa");
    
    string pride_Prejudice = libro2.get_titulo();
    
    estanteria_Isa.agrega_libro(pride_Prejudice);
    
    estanteria_Isa.agrega_libro(titulo_libro);
    
    string nombre_est_Isa = estanteria_Isa.get_nombre();
    
    //objeto 4 estanteria
    Estanteria estanteria_prueba("Pruebita lol");
    
    estanteria_prueba.agrega_libro(pride_Prejudice);
    estanteria_prueba.agrega_libro(titulo_libro);
    string ejemplo_estanteria_prueba = estanteria_prueba.get_coleccion_libros();
    estanteria_prueba.mostrar_estanteria();
    
    //objeto 3 usuario

    Usuario Usuario_Isa("Isa", nombre_est_Isa, ejemplo_estanteria_prueba );
    Usuario_Isa.mostrar_estanteria();
    
    
    //objeto 4 estanteria personalizada
    EstanteriaPersonalizada estanteria1("Estantería de Juan");
    estanteria1.agrega_libro_leido(titulo_libro);
    estanteria1.agrega_libro_leyendo("Harry Potter");
    estanteria1.mostrar_estanteria();
    
    return 0;
    
    
}
