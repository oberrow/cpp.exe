#include <iostream>
#include <conio.h>
#include <fstream>
#include "Func.h"
#include <string>
using namespace std;
using namespace func;
struct Food {
	string ingredient1;
	string ingredient2;
	string ingredient3;
	string ingredient4;
	string ingredient5;
};
double a;
double b;
string foodName;
string ingred1;
string ingred2;
string ingred3;
string ingred4;
string ingred5;
string filename;
string nl1;
string nl2;
string nl3;
string nl4;
string nl5;
string nl6;
string nl7;
string nl8;
string nl9;
string nl10;
string firstn;
string lastn;
    void func::main2() {
		cout << "Your first name";
		cin >> firstn;
		cout << "Your last name";
		cin >> lastn;
		string fullname = firstn + lastn;
		cout << "Your full name is ";
		cout << firstn + " " + lastn;
		key();
	}
	void func::textEdit()
	{

		cout << "Enter file-name and extension (.txt, .log, .bat, No forbidden characters and no spaces) " << endl;
		cin >> filename;
		ofstream MyFile(filename);
		cin.ignore();
		getline(cin, nl1);
		cout << "\n Enter line 1";
		getline(cin, nl1);
		cout << "\n Enter line 2";
		getline(cin, nl2);
		cout << "\n Enter line 3";
		getline(cin, nl3);
		cout << "\n Enter line 4";
		getline(cin, nl4);
		cout << "\n Enter line 5";
		getline(cin, nl5);
		cout << "\n Enter line 6";
		getline(cin, nl6);
		cout << "\n Enter line 7";
		getline(cin, nl7);
		cout << "\n Enter line 8";
		getline(cin, nl8);
		cout << "\n Enter line 9";
		getline(cin, nl9);
		cout << "\n Enter line 10";
		getline(cin, nl10);

		MyFile << nl1;
		MyFile << endl << nl2;
		MyFile << endl << nl3;
		MyFile << endl << nl4;
		MyFile << endl << nl5;
		MyFile << endl << nl6;
		MyFile << endl << nl7;
		MyFile << endl << nl8;
		MyFile << endl << nl9;
		MyFile << endl << nl10;
		MyFile.close();
		key();
	}
	void func::key() {
		cout << "\nPress any key to continue...";
		_getch();
	}
	void func::struct1()
	{
		cout << "Enter one of the ingredients of your favourite food";
		cin >> ingred1;
		cout << "Enter another one of the ingredients";
		cin >> ingred2;
		cout << "Enter another one of the ingredients";
		cin >> ingred3;
		cout << "Enter another one of the ingredients";
		cin >> ingred4;
		cout << "Enter another one of the ingredients";
		cin >> ingred5;
		Food food{ ingred1, ingred2, ingred3, ingred4, ingred5 };
		cout << "The ingredients of youur favourite food is: \n";
		cout << food.ingredient1 << "\n";
		cout << food.ingredient2 << "\n";
		cout << food.ingredient3 << "\n";
		cout << food.ingredient4 << "\n";
		cout << food.ingredient5;
		key();
	}
	void func::oper() 
	{
	cout << "Number 1";
	cin >> a;
	cout << "Number 2";
	cin >> b;
	}
	void func::multi(double m, double u)
	{
		double product = m * u;
		cout << m << " x " << u << " = " << product << endl;
	}
	void func::add(double a, double d)
	{
		double sum = a + d;
		cout << a << " + " << d << " = " << sum << endl;
	}
	void func::sub(double s, double b) {
		double differ = s - b;
		cout << s << " - " << b << " = " << differ << endl;
	}
	void func::div(double d, double i)
	{
		double quotient = d / i;
		cout << d << " / " << i << " = " << quotient << endl;
	}
	class Class1 {
	public: 
		void print_cheese() {
			cout << "cheese";
			func::key();
		}
	
	};
	