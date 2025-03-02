#include <iostream>

int main(){
    double a;
    double b;

    std:: cout << "Check which number is bigger than the other one" << "\n";
    std:: cout << "Write the first digit: ";
    std:: cin >> a;
    std:: cout << "Write the secound digit: ";
    std:: cin >> b;



    if(b > a){
        std::cout << "Yeah the biggest number is b: " << b << " Is bigger than " << a;
    }
    else if (b == a){
        std:: cout << "Both numbers are equal";
    }
    else{
        std::cout << "Yeah the biggest number is a: " << a << " Is bigger than " << b ;
    };


    
    return 0;
}