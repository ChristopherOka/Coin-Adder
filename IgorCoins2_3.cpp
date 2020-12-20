#include <iostream>

void coin_adder() {
	int toonies; 
	int loonies; 
	int quarters;
	double total_money; 
	double const toonie_value = 2.00; //declare constant variable of a toonie
	double const loonie_value = 1.00; //declare constant variable of a loonie
	double const quarter_value = 0.25; //declare constant variable of a quarter

	std::cout << "How many toonies do you have?\n"; //ask the user how many toonies they have
	std::cin >> toonies; //accept user inputted value for toonies
	std::cout << "How many loonies do you have?\n"; //ask the user how many loonies they have
	std::cin >> loonies; //accept user inputted value for toonies
	std::cout << "How many quarters do you have?\n"; //ask the user how many loonies they have 
	std::cin >> quarters; //accept user inputted value for quarters
	total_money = toonies * toonie_value + loonies * loonie_value + quarters * quarter_value; //add up the total value of the coins

	std::cout << "Your total cash value is: $" << total_money << std::endl; //output the total cash value of all the coins
	
}
int main() {
	coin_adder();
}