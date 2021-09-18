#include <iostream>
#include <conio.h>
#include <fstream>
#include "Func.h"
#include <string>
#include <Windows.h>
#include <filesystem>
#include "val_func.h"
using std::cout;
using std::cin;
using std::string;
using std::ofstream;
using std::ifstream;
using std::endl;
using func::Class1;
using func::cmd;
using func::food;
using func::key;
using func::struct1;
using func::math;
using func::main2;
using func::textEdit;
    void func::key() {
		cout << "\nPress any key to continue...";
		_getch();
	}
	void func::struct1()
	{
		cin.ignore();
		cout << "Enter one of the ingredients of your favourite food";
		getline(cin, ingred1);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred2);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred3);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred4);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred5);
		Food food{ ingred1, ingred2, ingred3, ingred4, ingred5 };
		cout << "The ingredients of youur favourite food is: \n";
		cout << food.ingredient1 << "\n";
		cout << food.ingredient2 << "\n";
		cout << food.ingredient3 << "\n";
		cout << food.ingredient4 << "\n";
		cout << food.ingredient5;
		key();
	}
	void func::Class1::time(int start, int duration, bool key = false)
	{
		if (key) {
			int minutes = 0;
			int seconds = 0;
			seconds = duration;
			int hours = 0;
			int days = 0;
			start++;
			cout << "Format DAYS : HOURS : MINUTES : SECONDS\n";
			for (int i = 0; i < duration; ++i) {

				cout << days << " : " << hours << " : " << minutes << " : " << start << std::endl;
				seconds++;
				start++;
				func::delay(1);
				if (start == 60 || seconds == 60) {
					minutes++;
					seconds = 0;
					start = 0;
				}
				else if (minutes == 60) {
					hours++;
					seconds = 0;
					minutes = 0;
				}
				else if (hours == 24) {
					days++;
					seconds = 0;
					minutes = 0;
					hours = 0;
				}
				else {

				}
			}
			PlaySound(TEXT("sound1.wav"), NULL, SND_SYNC);
		}
		else {
			int minutes = 0;
			int seconds = 0;
			seconds = duration;
			int hours = 0;
			int days = 0;
			start++;
			cout << "Format DAYS : HOURS : MINUTES : SECONDS\n";
			for (int i = 0; i < duration; ++i) {

				cout << days << " : " << hours << " : " << minutes << " : " << start << std::endl;
				seconds++;
				start++;
				func::delay(1);
				if (start == 60 || seconds == 60) {
					minutes++;
					seconds = 0;
					start = 0;
				}
				else if (minutes == 60) {
					hours++;
					seconds = 0;
					minutes = 0;
				}
				else if (hours == 24) {
					days++;
					seconds = 0;
					minutes = 0;
					hours = 0;
				}
				else {

				}
			}
			PlaySound(TEXT("sound1.wav"), NULL, SND_SYNC);
			func::key();
		}
	}
	void func::struct2()
	{
		cout << "Enter one of the ingredients of your favourite food";
		getline(cin, ingred1);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred2);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred3);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred4);
		cout << "Enter another one of the ingredients";
		getline(cin, ingred5);
		Food food{ ingred1, ingred2, ingred3, ingred4, ingred5 };
		cout << "The ingredients of youur favourite food is: \n";
		cout << food.ingredient1 << "\n";
		cout << food.ingredient2 << "\n";
		cout << food.ingredient3 << "\n";
		cout << food.ingredient4 << "\n";
		cout << food.ingredient5;
		key();
	}
	void func::math::multi(double m, double u)
	{
		
		double product = m * u;
		cout << m << " x " << u << " = " << product << endl;
	}
	void func::math::add(double a, double d)
	{
		double sum = a + d;
		cout << a << " + " << d << " = " << sum << endl;
	}
	void func::math::sub(double s, double u) {
		double differ = s - u;
		cout << s << " - " << u << " = " << differ << endl;
	}
	void func::math::div(double d, double i)
	{
		double quotient = d / i;
		cout << d << " / " << i << " = " << quotient << endl;
	}
	void func::math::square(double a)
	{
		double result = a * a;
		cout << a << " squared is " << result;
	}
	void func::cmd()
	{
		std::string exePath;
		getline(cin, pHolder);
		for (int loop = 0; loop < 100000; loop++) {
			getline(cin, executablePath);
			if (executablePath == "exit") {
				break;
			}
			else if (executablePath == "cmd") {
				system("C:\\WIndows\\System32\\cmd.exe");
			}
			else if (executablePath == "cd") {
				cout << "Enter directory: ";
				string dir;
				getline(cin, dir);
				std::filesystem::current_path(dir);
			}
			else if (executablePath == "chdir") {
				cout << "Enter directory: ";
				string dir;
				getline(cin, dir);
				std::filesystem::current_path(dir);
			}
			else {
				system(executablePath.c_str());
			}
		}
		system("pause");
	}
	void func::food() {
		//cout << "\n Enter any number from 0-9\n";
		//cin >> i;
		//if (i > 9)
		//{
		//	cout << "\nInvalid Number! Enter any number from 0-9";
		//	return 1;
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
		srand((unsigned)std::time(0));
		printf("Guessing your favourite food : \n ");
		int result = 1 + (rand() % 9);
		switch (result) {
		case 0:
			cout << foodchoice[0];
			break;
		case 1:
			cout << foodchoice[1];
			break;
		case 2:
			cout << foodchoice[2];
			break;
		case 3:
			cout << foodchoice[3];
			break;
		case 4:
			cout << foodchoice[4];
			break;
		case 5:
			cout << foodchoice[5];
			break;
		case 6:
			cout << foodchoice[6];
			break;
		case 7:
			cout << foodchoice[7];
			break;
		case 8:
			cout << foodchoice[8];
			break;
		case 9:
			cout << foodchoice[9];
			break;
		default:
			printf("Error");
			break;
		}
		key();
	}
	void func::delay(unsigned int milliseconds)
	{
		
		milliseconds *= 1000;
		Sleep(milliseconds);
	}
	bool func::findChar(const char* find[], const char* car[1], int num)
	{
		if(find[num] == car[0])
			return true;
		else
			return false;
	}
	void func::main2() {
		cout << "Your first name";
		cin >> firstn;
		cout << "Your last name";
		cin >> lastn;
		std::string fullname = firstn + lastn;
		cout << "Your full name is ";
		cout << firstn + " " + lastn;
		key();
	}
	void func::textEdit()
	{
			cout << "Would you like to read or write? 0 To read, 1 to write, 2 to rename a file and 3 to delete a file\n";
			cin >> rw;
			if (rw == 0) {
				cout << "Enter filename: ";
				cin >> filename;
				ifstream myFile(filename);
				while (getline(myFile, myText)) {
					cout << myText << endl;
				}
				myFile.close();
			}
			else if (rw == 1) {
				cout << "Enter file-name and extension (.txt, .log, .bat, No forbidden characters and no spaces) " << endl;
				cin >> filename;
				ofstream MyFile(filename);
				getline(cin, pHolder);
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
			}
			else if (rw == 2) {
				cout << "Enter file to rename: ";
				getline(cin, pHolder);
				cin.getline(fileName, 1000);
				cout << "Enter new name: ";
				getline(cin, newFileName);
				int returnVal;
				returnVal = rename(fileName, newFileName.c_str());
			}
			else if (rw == 3) {
				cout << "Enter file to delete: ";
				getline(cin, pHolder);
				cin.getline(fileName, 1000);
				cout << "Are you sure you want to PERMANENTLY delete " << fileName << " y for yes and n for no";
				cin >> choice;
				if (choice == 'y') {
					Class1* p1 = 0;
					p1->deleteFile(fileName, 1);
				}
				else {
					cout << "Cancled deletion of " << filename;
				}

			}	
			else
			{
				cout << "Incorrect file operation!  Enter any number from 0-3";
			}
			key();
	}
    void func::Class1::print_cheese() {
			cout << "cheese";
		}
    void func::Class1::printCar(char* print) {
		cout << print;
	}
	int func::Class1::print(int print = 0) {
		cout << print;
		return print;
	}
	void func::Class1::deleteFile(char const deleteFile[100], bool dis)
	{
		if (dis == true) {
			cout << "Deleting " << deleteFile << endl;
			remove(deleteFile);
			cout << "Deleted " << deleteFile << " Successfully";
		}
		else if (dis == false) {
			remove(deleteFile);
		}
		else {
		}
	}
	void func::Class1::deleteFile(char deleteFile[100], bool dis)
	{
		if (dis == true) {
			cout << "Deleting " << deleteFile << endl;
			remove(deleteFile);
			cout << "Deleted " << deleteFile << " Successfully";
		}
		else if (dis == false) {
			remove(deleteFile);
		}
		else {
		}
	}
	bool func::Class1::argCheck(char* argv[], const char text[100], int argc) {
		if (strcmp(argv[argc], text) == 0) 
			return 1;
		else
			return 0;
	}
	bool func::Class1::argCheck(char* argv[], char text[100], int argc) {
		if (strcmp(argv[argc], text) == 0) 
			return 1;
		else
			return 0;
	}
	bool func::Class1::argCheck(char* argv[], std::string text, int argc) {
		if (strcmp(argv[argc], text.c_str()) == 0) 
			return 1;
		else
			return 0;
	}
	std::ostream& func::operator<<(std::ostream& os, const func::constructer& dt)
	{
		constructer* c;
		os << c->r;
		return os;
	}
	bool func::find(char argv[], char text[], int argc)
	{
		if (argv[argc] == text[0])
			return 1;
		else
			return 0;
	}
	int func::constructer::add(int a, int b)
	{
		return func::constructer::c + func::constructer::d;
	}
	int func::constructer::sub(int a, int b) {
		return func::constructer::c - func::constructer::d;
	}
	int func::constructer::multi(int a, int b)
	{
		return func::constructer::c * func::constructer::d;
	}
	int func::constructer::div(int a, int b)
	{
		return func::constructer::c / func::constructer::d;
	}
