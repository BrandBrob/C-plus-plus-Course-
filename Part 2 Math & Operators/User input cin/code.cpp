#include <iostream>

int main(){
    std::string name;
    std::string restaurant;

    std:: cout << "What's your name?: " << "\n";

    std::getline(std::cin, name);

    std:: cout << "Which is your favourite pizza restaurant?: " << "\n";
    std:: cin >> restaurant;

    std:: cout << "Hello "<< name << "\n";
    std:: cout << "Your favorite pizza is from " << restaurant;
    return 0;

}