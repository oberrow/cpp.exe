#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "Func.cpp"
using namespace std;
using namespace func;
const int SIZE = 25;
string foodchoice[SIZE] = { "pizza", "shawarma", "maccoroni and cheese", "falafal", "rice", "spagettie", "chicken burger", "chicken", "chicken nuggets", "normal burger,", };
const int SUCCESS = 0;
const int FAIL = 1;
int functions;
int age = 15;
int i;
int operVal;
string password = "OmarBerrow";
string passcheck;
int main();
int main() {
	cout << "Choose a function to run.Press 1 for function 1, 2 for function 2, 3 for function 3, 4 for function 4, 5 for function 5, 6 for function 6 and 7 for function 7.\n";
	cin >> functions;
	if (functions == 1) {
		cout << "\n Enter any number from 0-9\n";
		cin >> i;
		if (i > 9)
		{
			cout << "\nInvalid Number! Enter any number from 0-9";
			return FAIL;
		}
		else {
			//Nothing here either
		}
		cout << "Your favourite food is: ";
		if (i == 0) {
			cout << foodchoice[0];
		}
		else if (i == 1) {
			cout << foodchoice[1];
		}
		else if (i == 2) {
			cout << foodchoice[2];
		}
		else if (i == 3) {
			cout << foodchoice[3];
		}
		else if (i == 4) {
			cout << foodchoice[4];
		}
		else if (i == 5) {
			cout << foodchoice[5];
		}
		else if (i == 6) {
			cout << foodchoice[6];
		}
		else if (i == 7) {
			cout << foodchoice[7];
		}
		else if (i == 8) {
			cout << foodchoice[8];
		}
		else if (i == 9) {
			cout << foodchoice[9];
		}
		else {
			//Nothing here
		}
		key();

	}
    else if (functions == 2) {
		cout << "Enter an operation 1 for addition, 2 for substraction, 3 for multiplacation and 4 for division.";
		cin >> operVal;
		if (operVal == 1) {
			oper();
			add(a, b);
			key();
		}
		else if (operVal == 2) {
			func::oper();
			sub(a, b);
			key();
		}
		else if (operVal == 3) {
			oper();
			multi(a, b);
			key();
		}
		else if (operVal == 4) {
			oper();
			func::div(a, b);
			key();
		}
		
	
	}
	else if (functions == 3) {
	cout << "Check in cpp.txt to see the secret message!";
	ofstream MyFile("cpp.txt");

	MyFile << "I love you";

	MyFile.close();
	key();
	}
	else if (functions == 4)
	{
	cout << "\nYour age please";
	cin >> age;
	try {
		if (age >= 18) {
			cout << "Access granted To The Secret Message- you are old enough.";
			ofstream MyFile("Function 7.txt");

			MyFile << "Hello 18+ user! This file has been created by cpp.exe - Function 7";

			MyFile.close();
		}
		else {
			throw (age);
		}
	}
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << myNum;
		
	}
	key();
	
	}
	else if (functions == 5) {
	main2();

}
	else if (functions == 0) {
	cout << "Enter the password to enter testing";
    cin >> passcheck;
	if (passcheck == password) {
		Class1* p1 = 0;
		p1->print_cheese();
		key();
	}
	else {
		cout << "Incorrect Password!";
	}
	
}
	else if (functions == 6) {
	textEdit();
}
	else if (functions == 7) {
	struct1();
	}
	else {
	cout << "\nInvalid Function!";
	key();
	return FAIL;
}
	return SUCCESS;
}
