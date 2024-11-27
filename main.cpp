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




#include <iostream> //Para imprimir
#include "Estanteria.h" //Archivos con las clases
#include "Usuario.h"
#include "Libro.h"
#include "Libro_digital.h"
#include "Libro_fisico.h"

using namespace std;

//Menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "Se recomienda realizar en orden \n";
    cout << "1. Crea un usuario \n";
    cout << "2. Agregar libros fisicos \n";
    cout << "3. Agregar libros digitales \n";
    cout << "4. Calcular tiempo de lectura de un libro fisico especifico \n";
    cout << "5. Cambiar estado de un libro fisico\n";
    cout << "6. Cambiar tamano archivo de libro digital \n";
    cout << "7. Cambiar estado de un libro digital \n";
    cout << "8. Consultar numero de paginas de libro fisico \n";
    cout << "9. Mostrar la estanteria completa  \n";
    cout << "10. Salir \n";
}

int main(int argc, char* argv[]){
    


    string temp_nombre;
    string temp_titulo;
    string temp_genero;
    string temp_autor;
    string temp_estado;
    string temp_cond;
    Usuario usuario(" ");
//Variables
    int opcion = 0, temp_num_pags = 0, temp_tamano_archivo = 0.0, temp_vel_lect = 0;

    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 10 && opcion > -1){

          //Impresion de menu
          menu();
          cin >> opcion;

          switch(opcion){

              //Crea usuario
              case 1:{
                  cout << "Dime tu nombre ";
                  cin >> temp_nombre ;
                  usuario = Usuario(temp_nombre);
                  break;
              }
              //Agrega libro fisico
              case 2:{
                  cout<< "Ingrese el titulo del libro: \n";
                  cin >> temp_titulo;
                  cout<<"Ingrese el genero: \n";
                  cin >> temp_genero;
                  cout<<"Ingrese el autor del libro: \n";
                  cin >> temp_autor;
                  cout<<"Ingrese la que aplique: leido, en lectura, pendiente: \n";
                  cin >> temp_estado;
                  cout<<"Ingrese el numero de páginas: \n";
                  cin >> temp_num_pags;
                  cout<<"Ingrese la que aplique: Nuevo, Usado: \n";
                  cin >> temp_cond;
                  usuario.agregar_libro_fisico(temp_titulo, temp_genero, temp_autor, temp_estado, temp_num_pags, temp_cond);
                  break;
              }
              //Agrega libro digital
              case 3:{
                  cout<< "Ingrese el titulo del libro: \n";
                  cin >> temp_titulo;
                  cout<<"Ingrese el genero: \n";
                  cin >> temp_genero;
                  cout<<"Ingrese el autor del libro: \n";
                  cin >> temp_autor;
                  cout<<"Ingrese la que aplique: leido, en lectura, pendiente: \n";
                  cin >> temp_estado;
                  cout<<"Ingrese el numero de MB en decimales: \n";
                  cin >> temp_tamano_archivo;
                  if (cin.fail()) {
                      cout << "Error en la entrada. Intenta de nuevo.\n";
                      cin.clear();
                  }
                  usuario.agregar_libro_digital(temp_titulo, temp_genero, temp_autor, temp_estado, temp_tamano_archivo);
                  break;
              }
              //Muestra tiempo de lectura
              case 4:{
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
                  cout<<"Ingrese el titulo exacto del libro digital ya agregado previamente a estanteria: \n";
                  cin>>temp_titulo;
                  cout<<"Ingrese el estado nuevo: leido, en lectura, pendiente :";
                  cin>>temp_estado;
                  Libro_digital libro1 = usuario.get_estanteria().buscar_lib_digi(temp_titulo);
                  libro1.set_estado(temp_estado);
                  cout<< libro1.get_titulo() << libro1.get_estado();
                  break;
              }
              //Cambia tamano de archivo de libro digital
              case 6:{
                  cout<<"Ingrese el titulo exacto del libro digital ya agregado previamente a estanteria: \n";
                  cin>>temp_titulo;
                  cout<< "ingrese el nuevo tamano en MB en dedimales: \n";
                  cin>>temp_tamano_archivo;
                  Libro_digital libro2 = usuario.get_estanteria().buscar_lib_digi(temp_titulo);
                  libro2.set_tamano_archivo(temp_tamano_archivo);
                  cout<< libro2.get_titulo() << libro2.get_tamano_archivo();
                  break;
              }
              //Obtener numero de paginas de libro fisico
              case 7:{
                  cout<<"Ingrese el titulo exacto del libro fisico ya agregado previamente a estanteria: \n";
                  cin>>temp_titulo;
                  Libro_fisico libro3 = usuario.get_estanteria().buscar_lib_fisi(temp_titulo);
                  cout<< libro3.get_titulo() << libro3.get_num_paginas();
                  break;
              }
              //Muestra la estanteria completa
              case 8:{
                  usuario.mostrar_estanteria();
                  break;
              }
              case 9:
                  cout<< "Saliendo";
                  break;
                  
          }
    }
    return 0;
}
