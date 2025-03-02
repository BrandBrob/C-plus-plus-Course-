#include <iostream>
//Using is the same like typedef but the principal difference is the sintax of how you define the new keyword for your type of variable
//"Using" es lo mismo que typdef pero la principal diferencia es en la sintaxis de como tu defines la nueva palabra clave para tu nuevo tipo de variable
//Structure:
//using (keyword) = (type of variable for your variable);
using str_t = std::string;
using negative_num_t = int;
//So at the end of the day is better to use "using" because it has the same functionaly of typedef but with a better an understandable sintax
int main(){
    str_t greetings = "Hola";
    std:: cout << greetings;
    return 0; 
}