//
//  main.cpp
//  Biblioteca personal corregido lol
//
//  Created by Isabel Vaca on 26/11/24.
#include <iostream>
#include "Estanteria.h"
#include "Usuario.h"
#include "Libro.h"
#include "Libro_digital.h"
#include "Libro_fisico.h"

using namespace std;

int main() {
    // Crear un usuario llamado Isabel
        Usuario usuario("Isabel");

        // Agregar libros físicos a la estantería de Isabel
        usuario.agregar_libro_fisico("Daisy Jones and the Six", "Historical fiction", "Taylor Jenkins", "leido", 400, "Nuevo");
        usuario.agregar_libro_fisico("Revenge of the Sith", "Sci-fi", "Matthew Woodring", "leido", 400, "Usado");

        // Agregar libros digitales a la estantería de Isabel
        usuario.agregar_libro_digital("A thousand splendid suns", "Historical fiction", "Khaled Hosseini", "en lectura", 1.5);
        usuario.agregar_libro_digital("The Hobbit", "Fantasia", "J.R.R. Tolkien", "leido", 2.0);

        // Crear un libro físico manualmente y agregarlo usando setters
        Libro_fisico libro1;
        libro1.set_titulo("The Poppy War");
        libro1.set_genero("Fantasia");
        libro1.set_autor("R.F. Kuang");
        libro1.set_estado("leido");
        libro1.set_num_paginas(600);
        libro1.set_condicion("Usado");
        usuario.agregar_libro_fisico(libro1.get_titulo(), libro1.get_genero(), libro1.get_autor(), libro1.get_estado(), libro1.get_num_paginas(), libro1.get_condicion());

        // Mostrar toda la estantería de Isabel
        usuario.mostrar_estanteria();

        // Calcular tiempo de lectura de un libro físico
        float tiempo_lectura = usuario.calcular_tiempo_lib_fisi("Cien años de soledad", 2);
        cout << "Tiempo estimado de lectura de 'Cien años de soledad': " << tiempo_lectura << " minutos." << endl;

        // Modificar un libro digital usando setters
        cout << "\nModificando un libro digital...\n";
        Libro_digital libro3 = usuario.get_estanteria().buscar_lib_digi("A thousand splendid suns");  // Usamos el método correcto
        libro3.set_tamano_archivo(3.0);  // Cambiar el tamaño del archivo

        // Verificar los cambios en el libro digital
        cout << "Verificando los cambios del libro digital:\n";
        cout << "Título: " << libro3.get_titulo() << endl;
        cout << "Tamaño del archivo: " << libro3.get_tamano_archivo() << " MB\n";

    return 0;
}
