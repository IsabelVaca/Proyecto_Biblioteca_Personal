//
//  main.cpp
//  Biblioteca personal
//
//  Created by Isabel Vaca on 07/11/24.
//


#include <iostream>
#include "Estanteria.h"
#include "Usuario.h"
#include "Libro.h"
#include "Libro_digital.h"
#include "Libro_fisico.h"
using namespace std;


int main() {
    //libros del usuario
    Usuario usuario("Isa");
    Libro libro1("El Hobbit", "Fantasía", "J.R.R. Tolkien");

    usuario.agregar_Libro(libro1, "leido");
    usuario.mostrar_estanteria();

    //libro digital
    Libro_digital libro_digital("1984", "Distopía", "George Orwell", 2.5);

    // Mostrar información del libro digital
    libro_digital.mostrar_libro_digital();
    Libro_fisico the_PW("The Poppy War", "Fantasia militar", "R.F. KUANG", 600, "Nuevo");
    //Se ingresa el tiempo promedio de lectura por pagina en minutos en el parametro
    float tiempo_lectura = the_PW.calcular_tiempo_lectura(2);
    cout << "Tiempo de lectura de: " << the_PW.get_titulo() << " es " << tiempo_lectura << " minutos." << endl;

    
    usuario.agregar_Libro(the_PW, "leido");
    usuario.agregar_Libro(libro_digital, "en lectura");

    // Mostrar la estantería del usuario
    usuario.mostrar_estanteria();

    
    return 0;
}
