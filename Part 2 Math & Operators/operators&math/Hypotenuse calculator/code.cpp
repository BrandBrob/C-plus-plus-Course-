#include <iostream>
#include <cmath>


double hypotenuseTriangule( double a, double b){
    a = pow(a, 2);
    b = pow(b, 2);
    double c = sqrt(a + b);
    return c;
}

int main() {
    double a;
    double b;
    std:: cout << "Write a digit of the first cathetus: ";
    std:: cin >> a;
    std:: cout << "Write a digit of the secound cathetus: ";
    std:: cin >> b;
    
    double response = hypotenuseTriangule( a, b);

    std:: cout << "The hypotenuse of the triangule is: " << response;

    return 0;

}