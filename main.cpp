#include <iostream>
#include <fstream>
#include <string>
#include "Func.h"
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <filesystem>
#include "val_main.h"
using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::ofstream;
using func::Class1;
using func::cmd;
using func::food;
using func::key;
using func::struct1;
using func::math;
using func::main2;
using func::textEdit;
int main(int argc, char* argv[]) {
	Class1 c;
	math math;
	ofstream log(logfile);
	/*bool check = c.argCheck(argv, "timer", 1);*/
	log << "Application started\n";
	if ((argc == 2) && _stricmp(argv[1], "1") == 0) {
		food();
	}
	else if ((argc == 3) && _stricmp(argv[1], "2") == 0) {
		int cmdOperVal;
		cmdOperVal = atoi(argv[2]);
		if (cmdOperVal == 1) {
			log << "\nUser chose addition";
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
			math.add(a, b);
		}
		else if (cmdOperVal == 2) {
			log << "\nUser chose substraction";
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
			math.sub(a, b);
		}
		else if (cmdOperVal == 3) {
			log << "\nUser chose multiplication";
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
			math.multi(a, b);
		}
		else if (cmdOperVal == 4) {
			log << "\nUser chose divison";
			cout << "Number 1";
			cin >> a;
			cout << "Number 2";
			cin >> b;
			math.div(a, b);
		}
		else if (cmdOperVal == 5) {
			log << "\nUser chose squaring";
			cout << "Enter number to square";
			cin >> a;
			math.square(a);
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
		func::struct2();
	}
	else if ((argc == 2) && _stricmp(argv[1], "8") == 0) {
		cmd();
	}	
	else if ((argc == 3) && _stricmp(argv[1], "9") == 0) {
		log << "\nUser chose timer";
		int duration = atoi(argv[2]);
		func::time(0, duration, true);
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
			cout << "Enter an operation 1 for addition, 2 for substraction, 3 for multiplacation, 4 for division and 5 to square a number.";
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
			else {
				OutputDebugString(L"[INFO] CODE 1 (EXIT_FAILURE)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code");
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
		}
		else if (functions == 8) {
			cmd();

		}
		else if (functions == 9) {
		log << "\n User chose timer";
		cout << "Enter time (in seconds) for the timer to last : ";
		int duration;
		cin >> duration;
		func::time(0, duration, false);
		}
		else if (functions == 10) {
		OutputDebugString(L"[INFO] CODE 0 (EXIT_SUCCESS)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code");
			log << "\nEnded successfully (code 0)";
			log.close();
			c.deleteFile(logFile, 0);
			return EXIT_SUCCESS;
		}
		else if (functions == 0) {
			log << "\nUser chose testing function";
			cout << "Enter the password to enter testing \n";
			cin >> passcheck;

			if (passcheck == password) {
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
				key();
				/*int pri;
				Class1* p1 = 0;
				cout << "Enter a number from 1-4: ";
				cin >> pri;
				p1->print(pri);
				cout << endl;
				p1->print_cheese();
				Nest nest;*/
				/*cout << " " << twod[0][0];
				cout << twod[0][1];
				cout << twod[0][2];
				cout << " " << twod[1][0];
				cout << twod[1][1];
				cout << twod[1][2];
				cout << " " << twod[2][0];
				cout << twod[2][1];
				cout << twod[2][2];*/

			}
			else {
				log << "\nUser entered an incorrect password";
				cout << "Incorrect Password!";
				key();
			}

		}
		else {
		    OutputDebugString(L"[INFO] CODE 0 (EXIT_SUCCESS)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code");
			cout << "\nInvalid Function!";
			key();
			return EXIT_FAILURE;
		}
	}
	OutputDebugString(L"[INFO] CODE 0 (EXIT_SUCCESS)\n[INFO] Go to https://github.com/oberrow/cpp.exe for the source code");
	log << "\nEnded successfully (code 0)";
	log.close();
	c.deleteFile(logFile, 0);
	return EXIT_SUCCESS;
}
