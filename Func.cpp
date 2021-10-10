#include <iostream>
#include <conio.h>
#include <fstream>
#include "Func.h"
#include <string>
#include <Windows.h>
#include <filesystem>
#include "val_func.h"
#pragma warning(disable : 6031)
using std::cout;
using std::cin;
using func::key;
using std::string;
using std::ofstream;
using std::ifstream;
using std::endl;
using func::Class1;
using func::cmd;
using func::food;
using func::struct1;
using func::math;
using func::main2;
using func::textEdit;
void func::math::cube(double a) {
double result;
result = a * a * a;
cout << a << " cubed = " << result;
}
void func::key() 
	{
		cout << "\nPress any key to continue...";
		_getch();
	}
HWND func::GetConsoleHwnd(void)
{
#define MY_BUFSIZE 1024 // Buffer size for console window titles.
	HWND hwndFound;         // This is what is returned to the caller.
	char pszNewWindowTitle[MY_BUFSIZE]; // Contains fabricated
										// WindowTitle.
	char pszOldWindowTitle[MY_BUFSIZE]; // Contains original
										// WindowTitle.

	// Fetch current window title.

	GetConsoleTitle(pszOldWindowTitle, MY_BUFSIZE);

	// Format a "unique" NewWindowTitle.

	wsprintf(pszNewWindowTitle, "%d/%d",
		GetTickCount(),
		GetCurrentProcessId());

	// Change current window title.

	SetConsoleTitle(pszNewWindowTitle);

	// Ensure window title has been updated.

	Sleep(40);

	// Look for NewWindowTitle.

	hwndFound = FindWindow(NULL, pszNewWindowTitle);

	// Restore original window title.

	SetConsoleTitle(pszOldWindowTitle);

	return(hwndFound);
}
int func::splitInt(int input)
{
	string s1 = std::to_string(input);
	std::stringstream os;
	os << s1;
	string numOfChars;
	os >> numOfChars;
	int out = std::stoi(numOfChars);
	
}
	std::string func::db::encryptDecrypt(string toEncrypt, int cryptKey) {
			string output = toEncrypt;

			for (int i = 0; i < toEncrypt.size(); i++)
				output[i] = toEncrypt[i] ^ cryptKey;

			return output;
}
	std::string func::db::encryptDecrypt(string toEncrypt, char cryptKey) {
			string output = toEncrypt;

			for (int i = 0; i < toEncrypt.size(); i++)
				output[i] = toEncrypt[i] ^ cryptKey;

			return output;
}
	std::string func::db::createFile(string file, string text, int cryptKey) {
		db db;
		std::ofstream writeToDataBase(file);
		db.encryptDecrypt(text, cryptKey);
		writeToDataBase << text << std::endl;
		writeToDataBase.close();
		return file;
	}
	std::string func::db::createFile(std::string file, std::string text, char cryptKey)
	{
		db db;
		std::ofstream writeToDataBase(file);
		func::db::encryptDecrypt(text, cryptKey);
		writeToDataBase << text << std::endl;
		writeToDataBase.close();
		return file;
	}
	std::string func::db::readFile(std::string file)
	{
		string line;
		ifstream myfile(file);
		if (myfile.is_open())
		{
			while (getline(myfile, line)) {
				myfile >> line;
			}
			myfile.close();
		}

		else cout << "Unable to open file";
		return line;
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
	std::ostream& func::operator<<(std::ostream& os, const func::math2& dt)
	{
		os << dt.r;
		return os;
	}
	std::ostream& func::operator<<(std::ostream& os, const byte& dt) {
		os << dt.val;
		return os;
	}
	std::istream& func::operator>>(std::istream& is, func::byte& dt) {
		is >> dt.val;
		int x = dt.val;
		int numberOfDigits = x ? static_cast<int>(log10(abs(x))) + 1 : 1;
		if (numberOfDigits > 8) dt.val = 11111111;
		else return is;
	}
	/*int operator~(func::byte&) {
		func::byte* not;
		if (not->bit1 == 1) {
			not->bit1 = 0;
		}
		else if (not->bit1 == 0) {
			not->bit1 = 1;
		}
		else if (not->bit2 == 1) {
			not->bit2 = 0;
		}
		else if (not->bit2 == 0) {
			not->bit2 = 1;
		}
		else if (not->bit3 == 1) {
			not->bit1 = 0;
		}
		else if (not->bit3 == 0) {
			not->bit3 = 1;
		}
		else if (not->bit4 == 1) {
			not->bit4 = 0;
		}
		else if (not->bit4 == 0) {
			not->bit1 = 1;
		}
		else if (not->bit5 == 1) {
			not->bit5 = 0;
		}
		else if (not->bit5 == 0) {
			not->bit5 = 1;
		}
		else if (not->bit6 == 1) {
			not->bit6 = 0;
		}
		else if (not->bit6 == 0) {
			not->bit6 = 1;
		}
		else if (not->bit7 == 1) {
			not->bit7 = 0;
		}
		else if (not->bit7 == 0) {
			not->bit7 = 1;
		}
		else if (not->bit8 == 1) {
			not->bit8 = 0;
		}
		else if (not->bit8 == 0) {
			not->bit8 = 1;
		}
		else {}
	}*/
	bool func::find(char argv[], char text[], int argc)
	{
		if (argv[argc] == text[0])
			return 1;
		else
			return 0;
	}
	double func::math2::add(double a, double b)
	{
		return func::math2::c + func::math2::d;
	}
	double func::math2::sub(double a, double b) {
		return func::math2::c - func::math2::d;
	}
	double func::math2::multi(double a, double b)
	{
		return func::math2::c * func::math2::d;
	}
	double func::math2::div(double a, double b)
	{
		return func::math2::c / func::math2::d;
	}
	int func::byte::returnInt(int one, int two, int three, int four, int five, int six, int seven, int eight) const {
		string s1 = std::to_string(one);
		string s2 = std::to_string(two);
		string s3 = std::to_string(three);
		string s4 = std::to_string(four);
		string s5 = std::to_string(five);
		string s6 = std::to_string(six);
		string s7 = std::to_string(seven);
		string s8 = std::to_string(eight);

		// Concatenate both strings 
		string s = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8;

		// Convert the concatenated string 
		// to integer 
		int returnValue = stoi(s);

		// return the formed integer 
		return returnValue;
	}