//
//  Libro_fisico.h
//  Biblioteca personal
//
//  Created by Isabel Vaca on 22/11/24.
//

#include "Libro.h"
#include <iostream>
using namespace std;


//Esta clase hereda de Libro
class Libro_fisico : public Libro {
private:
    int num_paginas; // Número de páginas del libro
    string estado;      // "Nuevo" o "Usado"

public:
    //constructor
    Libro_fisico(string t, string g, string a, int num_pag, string est)
        : Libro(t, g, a), num_paginas(num_pag), estado(est) {}

    // getters
    int get_num_paginas() const {
        return num_paginas;
    }

    string get_estado() const {
        return estado;
    }

    // setters
    void set_num_paginas(int num_pag) {
        num_paginas = num_pag;
    }

    void set_estado(string est) {
        if (est == "Nuevo" || est == "Usado") {
            estado = est;
        } else {
            cout << "Estado inválido. Usa 'Nuevo' o 'Usado'.\n";
        }
    }

    // Metodo para mostrar información del libro físico
    void mostrar_libro_fisico() {
        mostrar_libro(); //llama clase "padre" Libro
        cout << " Número de páginas: " << num_paginas << endl;
        cout << " Estado: " << estado << endl;
    }
    //Metodo para calcular tiempo de lectura del libro
    float calcular_tiempo_lectura(int minutos_por_pagina) {
        return num_paginas * minutos_por_pagina; // Tiempo en minutos
    }

};
