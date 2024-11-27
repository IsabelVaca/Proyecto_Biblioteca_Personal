/*
 *
 * Biblioteca personal
 *Isabel Vaca Sánchez
 *A01352522
 *
 */

/*
 *Clase Libro digital que crea objetos de tipo libro digital, clase hija de Clase Libro.
 *Tiene sus atributos especializados como el tamano del archivo.
 *Tiene metodos getters, setters y para mostrar la info del objeto
 *
 */
#ifndef LIBRO_DIGITAL_H
#define LIBRO_DIGITAL_H

#include "Libro.h"
//Declaracion de la clase Libro_digital que hereda de la clase Libro
class Libro_digital : public Libro {
    //Atributos privados
private:
    float tamano_archivo; // Tamano del archivo en MB

public:
    //Constructor y valores default
    Libro_digital() : Libro(), tamano_archivo(0.0) {}
    //Constructor que recibe valores para llenar variables de la instancia
    Libro_digital(string t, string g, string a, string e, float tam) : Libro(t, g, a, e), tamano_archivo(tam) {}
//Getters, setters y metodos
    float get_tamano_archivo();
    void set_tamano_archivo(float tam);
    void mostrar_libro_digital();
};

/*
/getter tamano archivo
/@param:
/@return: float
*/
float Libro_digital::get_tamano_archivo() {
    return tamano_archivo;
}
/*
 *setter tamano archivo
 *@param: float:tam
 *@return:
 */
void Libro_digital::set_tamano_archivo(float tam) {
    tamano_archivo = tam;
}
/*
 *Muestra la informacion del libro
 *@param: 
 *@return:
 */
void Libro_digital::mostrar_libro_digital() {
    mostrar_libro();
    cout << "Tamaño del archivo: " << tamano_archivo << " MB" << endl;
}

#endif
