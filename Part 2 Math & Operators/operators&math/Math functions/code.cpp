#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z;

    //max() returns the higher number from a comparision of two numbers example: if 6 > 4 its going to return 6
    z = std::max(x, y);
    std:: cout << z << "\n"; //Output: 4 (the biggest number is 4)

    //min() returns the lowest number from two numbers like if 3 > 2 the function its going to return 2
    z = std::min(x, y);
    std:: cout << z << "\n"; //Output: 3 (the biggest number is 4)

    // pow(x,y) returns the power of the x number by the y number
    z = pow(2,3); 
    std::cout << z << "\n"; //Output: 8

    // sqrt(x) returns the square root of a number x devuelve la raiz cuadrada de un numero x
    z = sqrt(9);
    std::cout << z << "\n"; //Output: 3

    //abs(x) returns the absolute number that is in the parameter of the function
    z = abs(-100);
    std::cout << z << "\n"; //Output: 100

    //round(x) returns the number rounded to the closest natural number
    z = round(3.14);
    std:: cout << z << "\n"; // Output: 3

    //ceil(x) means ceiling if the number has a decimal it will return the highest posible number (rounds up)
    z = ceil(3.10);
    std:: cout << z << "\n"; //Output : 4

    //floor(x) returns always the lowest natural number of the decimal (rounds down)
    z = floor(9.99); //Output: 9
    std:: cout << z << "\n";

    z = cos(90);
    std::cout << z << "\n";

    z = sin(90);
    std::cout << z << "\n";

    z = tan(90);
    std::cout << z << "\n";
    return 0;
}