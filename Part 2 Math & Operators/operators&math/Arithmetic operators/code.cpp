#include <iostream>


int main(){
    const int x = 3;
    const int y = 20;
    int total = x + y;

    std::cout << total << "\n";


    // ("+=") adds whatever number you put in the equal
    // ("*=") multiplys whatever number you put in the equal
    // ("/=") divides whatever number you put in the equal 
    int number = 0;
    number+=200;
    number/=10;
    number*=200;
    std::cout << number << "\n";

    // ("+") add one to a variable
    int numberPlusOne = 0;
    numberPlusOne++; 

    std::cout << numberPlusOne << " ++ " << "\n";

    //("-") rest one to a number of a variable
    int numberMinusOne = 0;
    numberMinusOne--; 

    std::cout << numberMinusOne << " -- " << "\n";

    //("*") rest one to a number of a variable
    int multiply = x * y;

    std::cout << multiply << " * "<< "\n";

    //("/") rest one to a number of a variable
    int division = y / x;

    std::cout << division << " / " << "\n";

    int remainder = y % 3;

    std:: cout << remainder;


    return 0;
}