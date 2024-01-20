#include <iostream>
#include <conio.h>

double ans;

double addition(double num1, double num2);
double subtraction(double num1, double num2);
double multiplication(double num1, double num2);
double division(double num1, double num2);

int main(int argc, char const* argv[]) {
	char ch, func;
	double num1, num2;

	std::cout << "Hello and welcome!" << std::endl;
	std::cout << "You can start using the calculator by pressing \'ENTER\'" << std::endl;

	do {
		ch = _getch(); // Wait for a key press
	} while (ch != 13); // ASCII value of Enter key is 13

	std::cout << "\nPlease Enter the values. Please Use these functions --> (\'+\' \'-\' \'*\' \'/\')" << std::endl;
	std::cout << "Example: 2 + 4" << std::endl;
	std::cout << "Operation: ";
	std::cin >> num1 >> func >> num2;

	std::cout << "\nCalculating...\n\n";

	if (func == '+') {
		ans = addition(num1, num2);
	}
	else if (func == '-') {
		ans = subtraction(num1, num2);
	}
	else if (func == '*') {
		ans = multiplication(num1, num2);
	}
	else if (func == '/') {
		ans = division(num1, num2);
	}
	else {
		ans = 0;
	}

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << num1 << " " << func << " " << num2 << " = " << ans << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
}

double addition(double num1, double num2) {
	ans = num1 + num2;
	return ans;
}

double subtraction(double num1, double num2) {
	ans = num1 - num2;
	return ans;
}

double multiplication(double num1, double num2) {
	ans = num1 * num2;
	return ans;
}

double division(double num1, double num2) {
	ans = num1 / num2;
	return ans;
}