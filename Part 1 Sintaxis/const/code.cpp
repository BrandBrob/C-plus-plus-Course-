#include <iostream>

int main(){
    //std: significa standar
    //cout: significa (character output)
    //<<: (output) es un operador logico el cual muestra algo en la consola
    //>>: (input) es un operador logico el cual deja escribir al usuario y colocar algo en la consola como un prompt
    //endl: hace un salto de linea tambien se puede remplazar endl con "\n"
    
    //const keyword makes a variable unable to redefine after it is defined, const (constante) es una keyword que hace que una variable ya no se pueda cambiar su valor
    //the variable that are constant they characters must be in UPPERCASE;
    const double PI = 3.141519;
    const int LIGHT_SPEED = 299792458;
    const double EARTH_GRAVITY = 9.8;
    double radius = 100;
    double circumference = 2 * PI * radius; 

    std::cout << circumference << "cm" ;

    return 0;
}