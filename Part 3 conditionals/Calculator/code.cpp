#include <iostream>


double calculate(double x, double y, std::string op){
	double total;
	if (op == "+"){
	total = x + y;
	}
	else if (op == "-"){
	total = x - y;
	}
	else if (op == "*"){
	total = x * y;
	}
	else if(op == "/"){
	total = x / y;
	}
	else{
		std:: cout << "Nope";
	}
		return total;

}
int main(){
	double x;
	double y;
	std::string op;
	std:: cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|WELCOME TO THE C++ CALCULATOR |_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << "\n";
	std:: cout << "--------- > Select the first number: ";
	std:: cin >> x;
	std:: cout << "--------- > Select the secound number: ";
	std:: cin >> y;
	std:: cout << "--------- > Select an operator |  +  | -  |  *  |  /  | ";
	std:: cin >> op;
	
	double total = calculate(x,y,op);
	std:: cout << "Total: " << total << "\n";
	total = 0;

	bool again = true;
	int numConfirmation = 0;
	while (again == true )
	{

	std:: cout << "Again? ------------------------" << "\n" << "Select your option: ------------------------" << "\n" << "1-Yes " << "2-No" << "\n";
	std:: cin >> numConfirmation;

	if(numConfirmation == 2){
		again = false;
	}
	if(numConfirmation == 1){
		again = true;
	std:: cout << "--------- > Select the first number: ";
	std:: cin >> x;
	std:: cout << "--------- > Select the secound number: ";
	std:: cin >> y;
	std:: cout << "--------- > Select an operator: ";
	std:: cin >> op;
	total = calculate(x,y,op);
	std:: cout << "Total: " << total << "\n";
	total = 0;
	}
	}
	

return 0;



}