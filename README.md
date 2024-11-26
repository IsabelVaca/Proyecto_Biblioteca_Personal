# Proyecto_Biblioteca_Personal

# Descripción general
Este programa sirve como una biblioteca personal digital, le permite al usuario poder tener un registro respecto a sus libros.

# Funcionalidad
Este programa lo que hace es mantener un registro de diferentes cosas, los libros que tiene el usuario, los que está leyendo, los que ya completó, 
libros pendientes, libros fisicos y digitales y el tiempo de lectura de  libros fisicos. 

# Acciones del usuario
El usuario puede ingresar su nombre y ir agregando libros desde el main, de tipo fisico o digital. Dependiendo del tipo de libro seria los parametros a ingresar. 
Se puede observar la estanteria completa con todos los libros de todas las categorias, tambien se pueden obtener datos especificos, para hacer esto se debe crear una variable 
del tipo de libro que se quiere buscar de esta manera.
Se asume que existe un libro digital con titulo A thousand splendid suns

 Libro_digital libro3 = usuario.get_estanteria().buscar_lib_digi("A thousand splendid suns");  
 libro3.set_tamano_archivo(3.0);  // Cambiar el tamaño del archivo

// Verificar los cambios en el libro digital
 cout << "Verificando los cambios del libro digital:\n";
cout << "Título: " << libro3.get_titulo() << endl;
out << "Tamaño del archivo: " << libro3.get_tamano_archivo() << " MB\n";

Utilizamos el get_estanteria para poder usarlo fuera de la clase de usuario y usamos el metodo .buscar_lib_digi
Se puede hacer igual para libros fisicos, solo usando el metodo para buscar libros fisicos y crear la variable pero de tipo libro fisico 

Tambien se puede checar el tiempo en minutos  estimado de lectura de un libro fisico de la siguiente manera:
// Calcular tiempo de lectura de un libro físico
  float tiempo_lectura = usuario.calcular_tiempo_lib_fisi("Cien años de soledad", 2); (el segundo parametro son los minutos por pagina)
  cout << "Tiempo estimado de lectura de 'Cien años de soledad': " << tiempo_lectura << " minutos." << endl;

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
estanteria ya que si el usuario desaparece tambien su estanteria. 
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
Agregué en el readme instrucciones para poder correr el código 
Correciones avance 2:
Retroalimentación: "Tu implementación de herencia  esta bien indicada con la flecha , sin embargo, esa herencia se podría implementar directamente en tu clase padre con un constructor con esos parámetros "
Corregí la implementación de la herencia agregando un constructor con los parámetros directamente en la clase de Libro. 
Correciones Avance 3:
Implementé las clases en c++ siguiendo el diseño del UML.
Elimine caracteres especiales y agregue comentarios para mejorar el formato.


