/*Project Name : Chapter 3 (Extra Credit) Exercise 18 -Interest Earned
File Name : Chapter 3 (Extra Credit) Exercise 18 -Interest Earned.cpp
Programmer : Samuel Soovajian
Date : 09 / 19
Requirements:
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double principal = 0, rate = 0, compound = 0, subtotal = 0;
	cout << "What is your principal?" << endl;
	cin >> principal;
	cout << "What is your interest rate?" << endl;
	cin >> rate;
	cout << "How often is your interest compounded? " << endl;
	cin >> compound;

	cout << "Interest Rate: " << rate << "%" << endl;
	cout << "Times compounded: " << compound << endl;
	cout << "Principal: " << principal << "$" << endl;

	subtotal = rate / compound + 1;
	subtotal = pow(subtotal, compound);

	cout << "Interest: " << subtotal << "$" << endl;
	cout << "Amount in savings: " << principal + subtotal << "$";
}