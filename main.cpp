#include <iostream>
#include <fstream>
#include <string>
#include "headers\Func.h"
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <filesystem>
#include "headers\val_main.h"
using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::ofstream;
using func::Class1;
using func::cmd;
using func::key;
using func::food;
using func::struct1;
using func::math;
using func::main2;
using func::textEdit;
int main(int argc, char* argv[]) {
	func::db db;
	Class1 c;
	math math;
	ofstream log(logfile);
	log << "Application started\n";
	if ((argc == 2) && _stricmp(argv[1], "1") == 0) {
		food();
	}
	else if ((argc == 3) && _stricmp(argv[1], "2") == 0) {
		int d{};
		int e{};
		if (c.argCheck(argv, "+", 2)) {
			log << "User chose addition";
			cout << "Number 1: ";
			cin >> a;
			cout << "Number 2: ";
			cin >> b; 
			func::math2 add = { a, '+', b };
			cout 
				<< a
				<< " + "
				<< b
				<< " = "
				<< add;
		}
		else if (c.argCheck(argv, "-", 2) == 1) {
			log << "\nUser chose substraction";
			cout << "Number 1: ";
			cin >> a;
			cout << "Number 2: ";
			cin >> b;
			func::math2 sub = { a, '-' , b };
			cout 
				<< a 
				<< " - " 
				<< b 
				<< " = "
				<< sub;
		}
		else if (c.argCheck(argv, "*", 2)) {
			log << "\nUser chose multiplication";
			cout << "Number 1: ";
			cin >> a;
			cout << "Number 2: ";
			cin >> b;
			func::math2 multi = { a, '*', b };
			cout 
				<< a 
				<< " x " 
				<< b 
				<< " = "
			    << multi;
		}
		else if (c.argCheck(argv, "/", 2)) {
			log << "\nUser chose divison";
			cout << "Number 1: ";
			cin >> a;
			cout << "Number 2: ";
			cin >> b;
			func::math2 div = { a, '/', b };
			cout
				<< a 
				<< " / " 
				<< b 
				<< " = "
			    << div;
		}
		else if (c.argCheck(argv, "²", 2)) {
			log << "\nUser chose squaring";
			cout << "Enter number to square";
			cin >> a;
			math.square(a);
		}
		else if (c.argCheck(argv, "³", 2)) {
			log << "\nUser chose cubing";
			cout << "Enter number to cube";
			cin >> a;
			math.cube(a);
		}
		else {
		}
	}
	else if ((argc == 2) && _stricmp(argv[1], "3") == 0) {
		log << "\nUser chose secret message";
		cout << "Check in cpp.txt to see the secret message!";
		ofstream MyFile("cpp.txt");

		MyFile << "I love you";

		MyFile.close();
		key();
	}
	else if ((argc == 2) && _stricmp(argv[1], "4") == 0) {
		log << "\nUser chose function 4";
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
	else if ((argc == 2) && _stricmp(argv[1], "5") == 0) {
		log << "\nUser chose name function";
		main2();
	}
	else if ((argc == 2) && _stricmp(argv[1], "6") == 0) {
		log << "\nUser chose text editor";
		textEdit();
	}
	else if ((argc == 2) && _stricmp(argv[1], "7") == 0) {
		log << "\nUser chose ingredients function";
		func::struct1();
	}
	else if ((argc == 2) && _stricmp(argv[1], "8") == 0) {
		cmd();
	}	
	else if ((argc == 3) && _stricmp(argv[1], "9") == 0) {
		log << "\nUser chose timer";
		int duration = atoi(argv[2]);
		c.time(0, duration, true);
	}
	else if ((argc == 2) && _stricmp(argv[1], "new") == 0) {
	std::filesystem::current_path("C:\\MCBEPlay\\bds\\worlds\\");
	cout << "Enter world name: ";
	string worldName;
	getline(cin, worldName);
	std::filesystem::create_directory(worldName);
}
	else if ((argc == 3) && _stricmp(argv[1], "0") == 0 && (argc == 3) && _stricmp(argv[2], "OmarBerrow") == 0) {
		log << "\nUser chose testing function via command line";
		for (int i = 0; i < argc; i++) {
			cout << "argv[" << i << "] is " << argv[i] << endl;
		}
		/*char check[12] = { "Omar Berrow" };
		char b;
		cin >> b;
		char a[1] = { b };
		if(check[0] == a[0]) 
			cout << "Yes";
		else 
			cout << "No";*/
}
	else if (argc > 3) {
		cout << "Arguments are: HELP, /?, -h, 1, 2, 3, 4, 5, 6, 7, 8 and 9\n";
	}
	else if ((argc == 2) && _stricmp(argv[1], "-h") == 0 || (argc == 2) && _stricmp(argv[1], "/?") == 0 || (argc == 2) && _stricmp(argv[1], "HELP") == 0) {
		cout << "Arguments are: HELP, /?, -h, 1, 2, 3, 4, 5, 6, 7, 8 and 9\n";
	}
	else {
		cout << "Choose a function to run.Press 1 for function 1, 2 for function 2, 3 for function 3, 4 for function 4,\n 5 for function 5, 6 for function 6, 7 for function 7, 8 for function 8 and 9 for function 9.\nEnter 10 to exit\n";
		cin >> functions;
		if (functions == 1) {
			log << "\nUser chose function food()";
			food();
		}
		else if (functions == 2) {
			log << "User chose calculator function";
			cout << "Enter an operation 1 for addition, 2 for substraction, 3 for multiplacation, 4 for division, 5 to square a number and 6 to cube a number.";
			cin >> operVal;
			if (operVal == 1) {
				log << "\nUser chose addition";
				cout << "Number 1";
				cin >> a;
				cout << "Number 2";
				cin >> b;
				math.add(a, b);
				key();
			}
			else if (operVal == 2) {
				log << "\nUser chose substraction";
				cout << "Number 1";
				cin >> a;
				cout << "Number 2";
				cin >> b;
				math.sub(a, b);
				key();
			}
			else if (operVal == 3) {
				log << "\nUser chose multiplication";
				cout << "Number 1";
				cin >> a;
				cout << "Number 2";
				cin >> b;
				math.multi(a, b);
				key();
			}
			else if (operVal == 4) {
				log << "\nUser chose divison";
				cout << "Number 1";
				cin >> a;
				cout << "Number 2";
				cin >> b;
				math.div(a, b);
				key();
			}
			else if (operVal == 5) {
				log << "\nUser chose squaring";
				cout << "Enter number to square";
				cin >> a;
				math.square(a);
				key();
			}
			else if (operVal == 6) {
				log << "\nUser chose cubing";
				cout << "Enter number to cube";
				cin >> a;
				math.cube(a);
				key();
			}
			else {
				OutputDebugStringA("[INFO] CODE 1 (EXIT_FAILURE)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code");
				cout << "Invalid Operation";
				key();
				return EXIT_FAILURE;
			}
		}
		else if (functions == 3) {
			log << "\nUser chose secret message";
			cout << "Check in cpp.txt to see the secret message!";
			ofstream MyFile("cpp.txt");

			MyFile << "I love you";

			MyFile.close();
			key();
		}
		else if (functions == 4)
		{
			log << "\nUser chose function 4";
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
			log << "\nUser chose name function";
			main2();

		}
		else if (functions == 6) {
			log << "\nUser chose text editor";
			textEdit();
		}
		else if (functions == 7) {
			log << "\nUser chose ingredients function";
			struct1();
			key();
		}
		else if (functions == 8) {
			cmd();

		}
		else if (functions == 9) {
		log << "\n User chose timer";
		cout << "Enter time (in seconds) for the timer to last : ";
		int duration;
		cin >> duration;
		c.time(0, duration, false);
		}
		else if (functions == 10) {
		OutputDebugStringA("[INFO] CODE 0 (EXIT_SUCCESS)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code\n");
			log << "\nEnded successfully (code 0)";
			log.close();
			c.deleteFile(logFile, 0);
			return EXIT_SUCCESS;
		}
		else if (functions == 0) {
			log << "\nUser chose testing function";
			cout << "Enter the password to enter testing \n";
			cin >> passcheck;
			if (passcheck == db.encryptDecrypt(password, 'O')) {
				/*log << "\nUser entered correct password";
				cout << sizeof(long int);
				cout << endl;
				cout << sizeof(int);
				cout << endl;
				cout << sizeof(double);
				cout << endl;
				cout << sizeof(float);
				cout << endl;
				cout << sizeof(std::string);
				cout << endl;
				cout << sizeof(func::cmdArgs);
				cout << endl;
				cout << sizeof(char*);
				cout << endl;
				cout << sizeof(char);
				cout << endl;
				cout << sizeof(bool);
				cout << endl;*/
				/*char txt[2] = { 'h', '\0'};
				bool check = c.argCheck(argv, txt, 1);
				if (check == true) {
					cout << "Yay!";
				}
				else {
					cout << "Boo :(";
				}*/
				/*const char* car1[2] = { "a\0" };
				const char* car2[5] = { "Omar\0" };
				bool check = func::findChar(car2, car1, 3);
				if (check)
					cout << "Yes!";
				else
					cout << "No :(";*/
					/*cout << sizeof(int64_t);
					cout << "\n";
					cout << sizeof(int) << "\n";
					cout << sizeof(long long int);*/
					/*cout << "Enter +, -, * or / : ";
					char oper;
					cin >> oper;
					cout << "Number 1: ";
					cin >> a;
					cout << "Number 2";
					cin >> b;
					func::math2 build(a, oper, b);
					cout << build;*/
					/*if (MessageBoxA(NULL, "Whatever", argv[0], MB_OKCANCEL || MB_ICONINFORMATION) == 1) {
						cout << "\nYeah i guess it works";
					}
					else {
						cout << "\nNo it doesn't";
					}*/
					/*int* heapArray = new int[8];
					heapArray[0] = 1; heapArray[1] = 0; heapArray[2] = 0; heapArray[3] = 1; heapArray[4] = 0; heapArray[5] = 1;
					heapArray[6] = 0; heapArray[7] = 1;
					int array1[8] = { 1, 0, 0, 1, 0, 1, 0, 1 };
					int array2[8] = { 1, 0, 1, 0, 0, 1, 0, 0 };
					int array3[8] = { 1, 0, 0, 1, 0, 0, 1, 1 };
					func::byte byte1 = heapArray;
					func::byte byte2 = array1;
					cout << byte1 << endl << byte2 << endl;
					(~byte1.val);
					if (byte1.bit2 & 1) {
						cout << "Yes";
					}
					else {
						cout << "No";
					}
					delete[] heapArray;*/
					/*string noursData = db.encryptDecrypt("Nour 5/2/2007", 'N');
					string omarsData = db.encryptDecrypt("Omar 8/6/2011", 'O');
					string mohammadsData = db.encryptDecrypt("Mohammad 1/12/2015", 'M');
					string obadasData = db.encryptDecrypt("Obada 11/8/2017", 'o');
					string mamasData = db.encryptDecrypt("Mama 19/6/1980", 'R');
					string babasData = db.encryptDecrypt("Baba 25/11/1980", 'K');
					db.createFile("omarDb.omarDb", omarsData, 'O');
					string data = db.readFile("omarDb.omarDb", 'O');
					std::ifstream myFile("omarDb.omarDb");
					std::string fileyFile;
					while (getline(myFile, fileyFile)) {

					}
					db.encryptDecrypt(fileyFile, 'O');
					cout << data << std::endl << fileyFile << endl;
					myFile.close();*/
				/*db.createFile("db.omDB", omarsData, 'O');
				string fileData = db.readFile("db.omDb", 'O');
				db.readFile("db.omDb", 'O');
				cout << fileData;
				std::ofstream myWriteFile("db.omDb");
				myWriteFile << omarsData;
				myWriteFile.close();
				std::ifstream myReadFile("db.omDb");
				string fileyText;
				while (std::getline(myReadFile, fileyText)) {
					
				}
				string filerText = db.encryptDecrypt(fileyText, 'O');
				cout << filerText;
				myReadFile.close(); */
		string noursData = db.encryptDecrypt("Nour 5/2/2007", 'N');
		string omarsData = db.encryptDecrypt("Omar 8/6/2011", 'O');
		string mohammadsData = db.encryptDecrypt("Mohammad 1/12/2015", 'M'); 
		string obadasData = db.encryptDecrypt("Obada 11/8/2017", 'o');
		string mamasData = db.encryptDecrypt("Mama 19/6/1980", 'R');
		string babasData = db.encryptDecrypt("Baba 25/11/1980", 'K');
		string data = db.encryptDecrypt("Nour 05/02/2007, Omar 08/06/2011, Mohammad 01/12/2015, Obada 11/08/2017, Mama 19/6/1980, Baba 25/11/1980", 3);
		db.createFile("file.omDb", data, 3);
		string fileData = db.readFile("file.omDb");
		cout << "Enter key to de-encrypt: ";
		int key;
		cin >> key;
		string unEncryptedFileData = db.encryptDecrypt(fileData, key);
		cout << unEncryptedFileData;
		std::time_t time2;
		std::time_t& time3 = time2;
		int timex = static_cast<long int> (std::time(&time3));
		string time = std::to_string(timex);
		time = time + "/";
		cout << std::endl << time;
		func::key();
			}
			else {
				log << "\nUser entered an incorrect password";
				cout << "Incorrect Password!";
				key();
			}

		}
		else {
		    OutputDebugStringA("[INFO] CODE 0 (EXIT_SUCCESS)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code\n");
			cout << "\nInvalid Function!";
			key();
			return EXIT_FAILURE;
		}
	}
	OutputDebugStringA("[INFO] CODE 0 (EXIT_SUCCESS)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code\n");
	log << "\nEnded successfully (code 0)";
	log.close();
	c.deleteFile(logFile, 0);
	return EXIT_SUCCESS;
}