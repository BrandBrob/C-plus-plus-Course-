#include <iostream>

int main(){
    //std: significa standar
    //cout: significa (character output)
    //<<: (output) es un operador logico el cual muestra algo en la consola
    //>>: (input) es un operador logico el cual deja escribir al usuario y colocar algo en la consola como un prompt
    //endl: hace un salto de linea tambien se puede remplazar endl con "\n"
    





    //int: integer (entero) son numeros enteros como 10, 21, 20, 40
    int age = 21;
    int year = 2025;
    int days = 7;

    //double: float number (decimales) numeros deciamles como 10.3, 4.5, 3.1416
    double temperature = 24.4;
    double calification = 9.9;
    double costProduct = 20.99;

    //char: (single character) variable que tiene solo un simbolo en comillas simples
    char letter = 'A';
    char firstLetterName = 'B';
    char dollarSign = '$';

    //bool: (booleans) TRUE or FALSE valores falso o verdadero
    bool student = true;
    bool power = true;
    bool forSale = false;


    //strings (objects that represents a sequence of text)
    std::string name = "Brandon";
    std::string lastname = "Flores";
    std::string greetings = "Hello world";



    //Un string es un objeto con un numero de caracteres
    std::string phrase = "This year is ";
    std::string phrase2 = " and my age is ";
    std::string phrase3 = " and the total of days we been had in this month is ";
    std::cout << phrase + std::to_string(year) + phrase2 + std::to_string(age) + phrase3 + std::to_string(days);

    return 0;
}