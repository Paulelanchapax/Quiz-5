//Bloque 0


/*

#include <iostream>
#include <string>
using namespace std;
struct Espada {
string nombre; // public por defecto
int dano;
}; // <-- quita este ';' y mira el error del compilador
int main() {
Espada e;
e.nombre = "Hacha";
e.dano = 42;
cout << e.nombre << " -- dano: " << e.dano << endl;
return 0;
}



//Anotaciones de comprension del programa mias (que no se piden pero las pongo)

//creamos un struct que es espada, que sirve para agrupar datos en una sola unidad, pero todo es publico por defecto, segun lei
// entonces creamos string nombre e int de danio, si quitamos el ; supongo que se ha de bugear, luego despues en el main
//creamos una espadita llamada e porque nuestra "clase" o "struct" es como q la cosa del objeto real echa conjunto, osea
//son las espadas luego ponemos e.nombre (nombre de nuestra categoria espada y objeto e), luego e danio, que usamos la misma e 
//que es la categoria espada e y le damos el danio, luego escribimos todo en la pantalla


#include <iostream>
#include <string>
using namespace std;
struct Espada {
string nombre; // public por defecto
int dano;
} // <-- quita este ';' y mira el error del compilador
int main() {
Espada e;
e.nombre = "Hacha";
e.dano = 42;
cout << e.nombre << " -- dano: " << e.dano << endl;
return 0;
}

//quitamos el ";" y el programa no corre, no funciona

//CHEKPOINTTT!

//El programa si ejecuta el nombre de la espada "Hacha", y su danio "42"
//Vi el error que daba cuando se quitaba el ";" de la clase (struct)
//Entendi la diferencia entre struct y class, que una es publica y la otra privada por defecto de ambas.
//Entendi lo que son private y public en la clase, pero aun nose a que se refiere protected. Talvez lo vea mas adelante.



//Bloque 1 

#include <iostream>
#include <string>

using namespace std;
class Personaje {
public:
// Constructor con lista de inicializacion
Personaje(string nombre, int vida, int nivel)
: nombre_(nombre), // asigna el parametro 'nombre' al atributo nombre_
vida_(vida),
nivel_(nivel) {}
void mostrar() const { // const: este metodo no modifica el objeto
cout << "[" << nivel_ << "] " << nombre_
<< " HP: " << vida_ << endl;
}

// Getters: acceso de lectura a atributos protegidos
string getNombre() const { return nombre_; }
int getVida() const { return vida_; }
int getNivel() const { return nivel_; }
// Destructor -- lo convertiremos en virtual en el Bloque 4
~Personaje() {}
protected: // accesible desde esta clase Y desde sus clases hijas (Bloque 2)
string nombre_;
int vida_;
int nivel_;
}; // <-- punto y coma obligatorio


int main() {
Personaje p("Thorin", 100, 5);
p.mostrar();
return 0;
}


//Anotaciones de comprension del programa mias (que no se piden pero las pongo)

//creamos nuestra clasesita llamada personajes, es como una categoria no?, o algo asi, pero bueno
//luego abrimos nuestra parte publica con public: y ponemos a nuestro constructor con su debida estructura
// Personaje(string nombre, int vida, int nivel) definimos lo que va a tener nuestro personaje ahi dentro
// la estructura dice que va el : despues de ) pero la ponemos abajo para que se vea bien 
// luego en vida nombre y nivel ponemos... lo mismo que la variable pero sin "_", esto es un parametro al atributo
//q es una caracteriztica de la clase
//Luego creamos un metodo void mostrar() const {, el metodo es lo que hace esa clase, una accion no?. 
//el metodo es mostrar() y usamos const para que no modifique el objeto, el metodo nos muestra el nivel nombre y vida.
//luego vamos a los getters que oermiten leer sin que se modifique la info, tienen la estructura que se observa, usamos const
//no entiendo la parte de protected ni porque hay un ~ en personaje pero ya lo eremos despues al destructor 

//(corro el programa), no funciona

//falta main. Asi que la agrego

// Check, si sale la salida esperada.

//Vamos a crear el segundo personaje



#include <iostream>
#include <string>

using namespace std;
class Personaje {
public:
// Constructor con lista de inicializacion
Personaje(string nombre, int vida, int nivel)
: nombre_(nombre), // asigna el parametro 'nombre' al atributo nombre_
vida_(vida),
nivel_(nivel) {}
void mostrar() const { // const: este metodo no modifica el objeto
cout << "[" << nivel_ << "] " << nombre_
<< " HP: " << vida_ << endl;
}

// Getters: acceso de lectura a atributos protegidos
string getNombre() const { return nombre_; }
int getVida() const { return vida_; }
int getNivel() const { return nivel_; }
// Destructor -- lo convertiremos en virtual en el Bloque 4
~Personaje() {}
protected: // accesible desde esta clase Y desde sus clases hijas (Bloque 2)
string nombre_;
int vida_;
int nivel_;
}; // <-- punto y coma obligatorio


int main() {
Personaje p("Thorin", 100, 5);
p.mostrar();


Personaje q("Elara", 85, 3);

q.mostrar(); 

return 0;

}

//CHEKPOINTTT 2!

//El programa corre perfectamente y muestra las caracteristicas del personaje p
//entiendo la lista de inicializacion aunque aun no me aprendo de memoria su estructura
//entiendo que si los pongo en public a los atributos cualquiera puede cambiarlos por eso van en protected
//const hace que no se modifique el objeto.

*/

//Bloque 2






