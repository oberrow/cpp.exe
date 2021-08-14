#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "Func.h"
using namespace std;
using namespace func;
const int SUCCESS = 0;
const int FAIL = 1;
int functions;
int age = 15;
int operVal;
double a;
double b;
char twoD[3][3] = {
	{'v','a','l',},
	{'o','n','e',},
	{'O','K','\0'}
};
int twod[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
};
string password = "OmarBerrow";
string passcheck;
int main();
int main() {

	cout << "Choose a function to run.Press 1 for function 1, 2 for function 2, 3 for function 3, 4 for function 4, 5 for function 5, 6 for function 6 and 7 for function 7.\nEnter 8 to exit\n";
	cin >> functions;
	if (functions == 1) {
		//cout << "\n Enter any number from 0-9\n";
		//cin >> i;
		//if (i > 9)
		//{
		//	cout << "\nInvalid Number! Enter any number from 0-9";
		//	return FAIL;
		//}
		//else {
		//	//Nothing here either
		//}
		//cout << "Your favourite food is: ";
		//if (i == 0) {
		//	cout << foodchoice[0];
		//}
		//else if (i == 1) {
		//	cout << foodchoice[1];
		//}
		//else if (i == 2) {
		//	cout << foodchoice[2];
		//}
		//else if (i == 3) {
		//	cout << foodchoice[3];
		//}
		//else if (i == 4) {
		//	cout << foodchoice[4];
		//}
		//else if (i == 5) {
		//	cout << foodchoice[5];
		//}
		//else if (i == 6) {
		//	cout << foodchoice[6];
		//}
		//else if (i == 7) {
		//	cout << foodchoice[7];
		//}
		//else if (i == 8) {
		//	cout << foodchoice[8];
		//}
		//else if (i == 9) {
		//	cout << foodchoice[9];
		//}
		//else {
		//	//Nothing here
		//}
		//key();
		food();
	}
	else if (functions == 2) {
		cout << "Enter an operation 1 for addition, 2 for substraction, 3 for multiplacation and 4 for division.";
		cin >> operVal;
		if (operVal == 1) {
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
			add(a, b);
			key();
		}
		else if (operVal == 2) {
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
			sub(a, b);
			key();
		}
		else if (operVal == 3) {
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
			multi(a, b);
			key();
		}
		else if (operVal == 4) {
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
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
			int pri;
			Class1* p1 = 0;
			cout << "Enter a number from 1-4: ";
			cin >> pri;
			p1->print(pri);
			p1->print_cheese();
			/*cout << " " << twod[0][0];
			cout << twod[0][1];
			cout << twod[0][2];
			cout << " " << twod[1][0];
			cout << twod[1][1];
			cout << twod[1][2];
			cout << " " << twod[2][0];
			cout << twod[2][1];
			cout << twod[2][2];*/
			/*for (int i = 0; i < 1001; i++)
			{
				cout << endl << i;

			}*/

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
	else if (functions == 8) {
		return SUCCESS;
	}
	else {
		cout << "\nInvalid Function!";
		key();
		return FAIL;
	}
	return SUCCESS;
}