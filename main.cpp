/*
 *
 * Biblioteca personal
 *Isabel Vaca Sánchez
 *A01352522
 *
 */
/*
 *
 * Este proyecto permite guardar un registro con los libros del usuario, agregar libros y aplicar diferentes metodos.
 *
 *
 *
 */
#include <iostream>
#include <string>
#include "Estanteria.h"
#include "Usuario.h"
#include "Libro.h"
#include "Libro_digital.h"
#include "Libro_fisico.h"

using namespace std;

void menu() {
    cout << "\nMenu:\n";
    cout << "1. Crear un usuario\n";
    cout << "2. Agregar libros físicos\n";
    cout << "3. Agregar libros digitales\n";
    cout << "4. Calcular tiempo de lectura de un libro fisico\n";
    cout << "5. Cambiar estado de un libro digital \n";
    cout << "6. Cambiar tamaño de archivo de libro digital\n";
    cout << "7. Mostrar numero de paginas de libro fisico\n";
    cout << "8. Mostrar la estanteria completa\n";
    cout << "9. Salir\n";
    cout << "Selecciona una opcion: \n";
    cout << "(Si selecciona una opcion y no sucede nada vuelva a ingresar el numero)\n";
}

// Funcion para validar si una entrada es un numero entero
bool esNumeroValido1(int& numero) {
    cin >> numero;
    if (cin.fail()) {
        cin.clear(); // Limpiar el error
        while (cin.get() != '\n') {} // Ignorar el resto de la entrada
        return false;
    }
    return true;
}

bool esNumeroValido2(float& numero) {
    cin >> numero; // Intentar leer el número
    if (cin.fail()) { // Si la lectura falla
        cin.clear(); // Limpiar el estado de error
        // Descarta los caracteres hasta el salto de linea
        while (cin.get() != '\n') {}
        return false; // Entrada no valida
    }
    return true; // Entrada valida
}
// Funcion para validar que una cadena no este vacia
bool esCadenaValida(const string& cadena) {
    return !cadena.empty();
}

int main() {
    Usuario usuario("");
    int opcion = 0;

    while (true) {
        menu();
        cin >> opcion;

        // Validar opcion del menu
        if (!esNumeroValido1(opcion) || opcion < 1 || opcion > 9) {
            cout << "Entrada no valida. Por favor, selecciona una opcion entre 1 y 8.\n";
            continue;
        }

        switch (opcion) {
            case 1: {
                string nombre;
                cout << "Introduce tu nombre: ";
                cin >> ws; // Para descartar cualquier espacio en blanco antes de la entrada
                getline(cin, nombre);
                
                if (!esCadenaValida(nombre)) {
                    cout << "El nombre no puede estar vacio.\n";
                    continue;
                }
                usuario = Usuario(nombre);
                break;
            }
            case 2: { // Agregar libro físico
                string titulo, genero, autor, estado, condicion;
                int paginas;

                cout << "Introduce los datos del libro fisico:\n";
                cout << "Titulo: (ingrese sin espacios, ej: TheHobbit )"; cin >> ws; getline(cin, titulo);
                if (!esCadenaValida(titulo)) {
                    cout << "El titulo no puede estar vacio.\n";
                    continue;
                }

                cout << "Genero: "; cin >> ws; getline(cin, genero);
                if (!esCadenaValida(genero)) {
                    cout << "El genero no puede estar vacio.\n";
                    continue;
                }

                cout << "Autor: "; cin >> ws; getline(cin, autor);
                if (!esCadenaValida(autor)) {
                    cout << "El autor no puede estar vacio.\n";
                    continue;
                }

                cout << "Estado (leido/en lectura/pendiente) ingrese exactamente: "; cin >> ws; getline(cin, estado);
                if (estado != "leido" && estado != "en lectura" && estado != "pendiente") {
                    cout << "Estado no valido. Usa: 'leido', 'en lectura', 'pendiente'.\n";
                    continue;
                }

                cout << "Numero de paginas: (Si no sucede nada vuelva a ingresar el numero)"; cin >> paginas;
                if (!esNumeroValido1(paginas) || paginas <= 0) {
                    cout << "Por favor, introduce un numero valido de paginas mayor que 0.\n";
                    continue;
                }

                cout << "Condicion (Nuevo/Usado): (ingrese exactamente la que aplique)"; cin >> ws; getline(cin, condicion);
                if (!esCadenaValida(condicion)) {
                    cout << "La condicion no puede estar vacia.\n";
                    continue;
                }

                usuario.agregar_libro_fisico(titulo, genero, autor, estado, paginas, condicion);
                break;
            }
            case 3: { // Agregar libro digital
                string titulo, genero, autor, estado;
                float tamano_archivo;

                cout << "Introduce los datos del libro digital:\n";
                cout << "Titulo: "; cin >> ws; getline(cin, titulo);
                if (!esCadenaValida(titulo)) {
                    cout << "El titulo no puede estar vacio.\n";
                    continue;
                }

                cout << "Genero: "; cin >> ws; getline(cin, genero);
                if (!esCadenaValida(genero)) {
                    cout << "El genero no puede estar vacio.\n";
                    continue;
                }

                cout << "Autor: "; cin >> ws; getline(cin, autor);
                if (!esCadenaValida(autor)) {
                    cout << "El autor no puede estar vacio.\n";
                    continue;
                }

                cout << "Estado (leido/en lectura/pendiente): "; cin >> ws; getline(cin, estado);
                if (estado != "leido" && estado != "en lectura" && estado != "pendiente") {
                    cout << "Estado no valido. Usa: 'leido', 'en lectura', 'pendiente'.\n";
                    continue;
                }

                cout << "Tamano del archivo (MB): (ingrese numero tipo float)"; cin >> tamano_archivo;
                if (!esNumeroValido2(tamano_archivo) || tamano_archivo <= 0) {
                    cout << "Por favor, introduce un tamano de archivo valido mayor que 0.\n";
                    continue;
                }

                usuario.agregar_libro_digital(titulo, genero, autor, estado, tamano_archivo);
                break;
            }
                //Muestra tiempo de lectura
                case 4:{
                    string temp_titulo;
                    int temp_vel_lect;
                    cout<< "Ingrese el titulo exacto del libro fisico ya agregado previamente a estanteria: \n";
                    cin>>temp_titulo;
                    cout<<"Ingrese el tiempo en minutos en el que lee una pagina en valor entero: \n";
                    cin>>temp_vel_lect;
                    float tiempo_lectura = usuario.calcular_tiempo_lib_fisi(temp_titulo, temp_vel_lect);
                    cout<< "Tiempo estimado de lectura: " <<tiempo_lectura << "minutos" << endl;
                    break;
                }
                //Cambia el estado de un libro digital
                case 5:{
                    string temp_titulo, temp_estado;
                    cout<<"Ingrese el titulo exacto del libro digital ya agregado previamente a estanteria: \n";
                    cin>>temp_titulo;
                    cout<<"Ingrese el estado nuevo: leido, en lectura, pendiente :";
                    cin>>temp_estado;
                    Libro_digital libro1 = usuario.get_estanteria().buscar_lib_digi(temp_titulo);
                    libro1.set_estado(temp_estado);
                    cout<< libro1.get_titulo() <<": "<< libro1.get_estado();
                    break;
                }
                //Cambia tamano de archivo de libro digital
                case 6:{
                    string temp_titulo;
                    float temp_tamano_archivo;
                    cout<<"Ingrese el titulo exacto del libro digital ya agregado previamente a estanteria: \n";
                    cin>>temp_titulo;
                    cout<< "ingrese el nuevo tamano en MB en dedimales: \n";
                    cin>>temp_tamano_archivo;
                    Libro_digital libro2 = usuario.get_estanteria().buscar_lib_digi(temp_titulo);
                    libro2.set_tamano_archivo(temp_tamano_archivo);
                    cout<< libro2.get_titulo() <<": "<< libro2.get_tamano_archivo();
                    break;
                }
                //Obtener numero de paginas de libro fisico
                case 7:{
                    string temp_titulo;
                    cout<<"Ingrese el titulo exacto del libro fisico ya agregado previamente a estanteria: \n";
                    cin>>temp_titulo;
                    Libro_fisico libro3 = usuario.get_estanteria().buscar_lib_fisi(temp_titulo);
                    cout<< libro3.get_titulo() << ": "<< libro3.get_num_paginas();
                    break;
                }
                //Muestra la estanteria completa
            case 8:{
                usuario.mostrar_estanteria();
                break;
            }
            case 9: // Salir
                cout << "Saliendo del programa\n";
                return 0;
            default:
                cout << "Opcion no valida. Intenta de nuevo.\n";
        }
    }
}
