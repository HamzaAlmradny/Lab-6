// Documentation Section

/*
File Name : Lab 6
Author : Hamza Alsayed Almradny
Version : V.1
Purpose : ask the user to enter two integer values and print their summation, multiplication, subtraction, division, and remainder.
Date : 7/7/2025
*/











#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, sum, sub, div, mult, mod;

	cout << "Please, enter the first number: ";
	cin >> num1;

	cout << "Please, enter the second number: ";
	cin >> num2;

	
	sum = num1 + num2;

	sub = num1 - num2;

	div = num1 / num2;

	mult = num1 * num2;

	mod = num1 % num2;

	cout << "The sum is " << sum << "\n";
  
	cout << "The sub is " << sub << "\n";

	cout << "The div is " << div << "\n";

	cout << "The mult is " << mult << "\n";

	cout << "The mod is " << mod << "\n";


	
	
	
	
	
	return 0;

}

