/*
 *
 * Biblioteca personal
 *Isabel Vaca Sánchez
 *A01352522
 *
 */
/*
 *
 *Clase libro fisico que hereda de la clase Libro, crea objetos tipo libro fisico con sus propios atributos
 *especificos como numero de paginas y la condicion.
 *tiene metodos getters, setters y para mostrar la informacion del libro fisico
 */
#ifndef LIBRO_FISICO_H
#define LIBRO_FISICO_H

#include "Libro.h"
//Declacion de la clase Libro fisico que hereda de Libro
class Libro_fisico : public Libro {
private:
    int num_paginas; //numero de paginas
    string condicion; // Nuevo o Usado

public:
    //Constructor por default
    Libro_fisico() : Libro(), num_paginas(0), condicion("") {}
    //Constructor que recibe valores para llenar variables de la instancia
    Libro_fisico(string t, string g, string a, string e, int num_pag, string c) : Libro(t, g, a, e), num_paginas(num_pag), condicion(c) {}
//Metodos getters y setter
    int get_num_paginas();
    string get_condicion();
    void set_num_paginas(int num_pag);
    void set_condicion(string c);
    void mostrar_libro_fisico();
    float calcular_tiempo_lectura(int minutos_por_pagina);
};

/*
 *getter numero de paginas
 *@param:
 *@return: int:num_paginas
 *
 */

int Libro_fisico::get_num_paginas() {
    return num_paginas;
}
/*
 *getter condicion
 *@param:
 *@return: string:condicion
 *
 */
string Libro_fisico::get_condicion() {
    return condicion;
}
/*
 *setter num_paginas
 *@param: int:num_pag
 *@return:
 *
 */
void Libro_fisico::set_num_paginas(int num_pag) {
    num_paginas = num_pag;
}
/*
 *setter condicion
 *@param: string:c
 *@return:
 *
 */
void Libro_fisico::set_condicion(string c) {
    if (c == "Nuevo" || c == "Usado") {
        condicion = c;
    } else {
        cout << "Condición invalida. Usa 'Nuevo' o 'Usado'.\n";
    }
}
/*
 *Muestra info del libro fisico
 *@param:
 *@return:
 *
 */
void Libro_fisico::mostrar_libro_fisico() {
    mostrar_libro();
    cout << "Numero de paginas: " << num_paginas << endl;
    cout << "Condición: " << condicion << endl;
}
/*
 *setter
 *@param: int:num_pag
 *@return:
 *
 */
float Libro_fisico::calcular_tiempo_lectura(int minutos_por_pagina) {
    return num_paginas * minutos_por_pagina;
}

#endif
