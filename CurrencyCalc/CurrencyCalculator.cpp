// This program converts currency from dollar to kroner, yen, swiss francs and sterling pound based on the users choice.

#include <iostream>

constexpr double KRONER_VALUE = 10.842818;
constexpr double YEN_VALUE = 155.78;
constexpr double POUND_VALUE = 0.80;
constexpr double SWISS_VALUE = 0.91;

double amount;
char currency;

int main()
{
	std::cout << "Welcome to the currency converter program!!\n";
	std::cout << "Enter any amount of US dollars\n";
	std::cin >> amount;

	std::cout << "What currency do you want to convert it to?\n"
				 "Type between K for Norwegian Krone, Y for Japanese yen, S for Swiss francs, and P for British sterling pound\n";
	std::cin >> currency;
	
	switch (currency) {

	case 'k': case 'K':
			std::cout << "$" << amount << " Dollars is:\n";
			amount *= KRONER_VALUE;
			std::cout << amount << " kr\n";
			break;
	case 'y': case 'Y':
		
			std::cout << "$" << amount << " Dollars is:\n";
			amount *= YEN_VALUE;
			std::cout << amount << " Japanese yen\n";
			break;
	case 'p': case 'P':
			std::cout << "$" << amount << " Dollars is:\n";
			amount *= POUND_VALUE;
			std::cout << amount << " Pounds\n";
			break;
	case 's': case 'S':
			std::cout << "$" << amount << " Dollars is:\n";
			amount *= SWISS_VALUE;
			std::cout << amount << " Swiss francs\n";
			break;
	default:
		std::cout << "That's not a currency that i am able to convert!";
	}
	std::cin.get();
}