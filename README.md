# Proyecto_Biblioteca_Personal

# Descripción general
Este programa sirve como una biblioteca personal digital, le permite al usuario poder tener un registro respecto a sus libros.

# Funcionalidad
Este programa lo que hace es mantener un registro de diferentes cosas, los libros que tiene el usuario, los que está leyendo, los que ya completó, 
libros pendientes, libros fisicos y digitales y el tiempo de lectura de  libros fisicos. 

# Acciones del usuario
Ir ingresando los datos en el orden del menu, cada opcion muestra una funcion diferente del programa. 



# Clases
Hay 5 clases diferentes:
-Estanteria:
Esta clase guarda listas con los libros del usuario, se pueden guardar en las siguientes categorías:
 -Libros leidos, libros por leer, libros en lectura, libros fisicos,libros digitales, coleccion de titulos. 
Estos libros se guardan en arreglos, Estantería tiene composicion con usuario ya que si el usuario de elimina su estanteria tambien.
Pero estanteria tiene agregacion con libros ya que existe la opcion de crear libros y ingresarlos en estanteria, si se elimina la estanteria 
los libros siguen existiendo. 
Entre sus metodos permite agregar libros, mostrar los libros de la estanteria y permite buscarlos para poder usar los getters y setters. 
-Libro:
Esta es la clase padre de Libro digital y libro fisico, les hereda los atributos de:
Genero, autor, titulo, estado. Contiene getters y setters y un metodo para mostrar los datos del libro.
-Libro fisico:
Esta clase hereda de Libro, pero tiene como atributos extras el numero de paginas y la condicion ( nuevo o usado)
Tiene metodos de getters, setters, para mostrar los datos del objeto y calcular el tiempo de lectura dependiendo de la velocidad de lectura por pagina. 
-Libro digital:
Esta clase hereda de Libro, tiene como atributo extra en tamaño del archivo.
Tiene metodos getters, setters y para mostrar los datos del libro. 
-Usuario:
La clase usuario representa a un usuario que puede poseer su propia estanteria, con sus colecciones de libros, tiene composicion con 
estanteria y los tipos de libros ya que si el usuario desaparece tambien su estanteria y los libros creados en usuario. 
El usuario tiene atributos de nombre y estanteria. 
Tiene metodos getters, setters, para agregar libros fisicos, digitales, calcular tiempo de lectura solo de libros fisicos y para mostrar todos sus libros. 

 

# Instrucciones para correr el código

Descargar todos los archivos .cpp y .h
En terminal localizar la carpeta donde se localizan los archivos usando "cd"
en terminal ingresar g++ main.cpp -o biblioteca_personal
seleccionar el archivo ejecutable llamado "biblioteca_personal" 
correr en linux: "/a.out"
correr en windows: "a.exe"

# Correciones

Correciones Avance 1:
Sub competencia: Estandares
Agregué en el readme instrucciones para poder correr el código 

Correciones avance 2:
Retroalimentación: "Tu implementación de herencia  esta bien indicada con la flecha , sin embargo, esa herencia se podría implementar directamente en tu clase padre con un constructor con esos parámetros "
Sub competencia: Toma de decisiones 
Corregí la implementación de la herencia agregando un constructor con los parámetros directamente en la clase de Libro. 

Correciones Avance 3:
Sub competencia: Toma de decisiones 
Implementé las clases en c++ siguiendo el diseño del UML.
Subcompetencia: Estandares
Elimine caracteres especiales y agregue comentarios para mejorar el formato.


