#include <iostream>

typedef std::string str_t;
typedef int negative_num_t;

int main(){
    str_t name = "Brandon";
    //std::string name = "Brandon" without the keyword what we made
    std:: cout << name << '\n';
    
    negative_num_t x = -10;
    std:: cout << x;

    return 0;
}