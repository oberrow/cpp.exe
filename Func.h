#include <string>
#include <iostream>
#include <stack>
#include <conio.h>
#include <fstream>
#include <windows.h>
#ifndef FUNC_H
#define FUNC_H
#define ZEROS { 0 ,0, 0, 0, 0, 0 , 0 , 0 }
namespace func {
	typedef bool boolean;
	typedef bool BOOL;
	void key();
	void main2();
	void textEdit();
	void struct1();
	class math2 {
	private :
		double add(double a, double b);
		double sub(double a, double b);
		double multi(double a, double b);
		double div(double a, double b);
		double c{}, d{};
		double r{};
		char mathOper{};
	public :
		friend std::ostream& operator<<(std::ostream& os, const math2& dt);
		math2(double c, char mathOperator, double d) {
			math2* e = this;
			e->c = c;
			e->d = d;
			e->mathOper = mathOperator;

			if (mathOperator == '+') 
				e->r = e->add(c, d);
			else if (mathOperator == '-')
				e->r = e->sub(c, d);
			else if (mathOperator == '*')
				e->r = e->multi(c, d);
			else if (mathOperator == '/')
				e->r = e->div(c, d);
		}
		math2() {

		}
};
	class math {
	public:
		void multi(double m, double u);
		void add(double a, double d);
		void sub(double s, double b);
		void div(double d, double i);
		void square(double a);
		void cube(double a);
	};
	class byte {
	private:
		int val{};
		int returnInt(int one, int two, int three, int four, int five, int six, int seven, int eight) const;
	public:
		int bit1{}, bit2{}, bit3{}, bit4{}, bit5{}, bit6{}, bit7{}, bit8{};
		byte(int bits[7]) {
			if (bits[0] > 1 || bits[1] > 1 || bits[2] > 1 || bits[3] > 1
				|| bits[4] > 1 || bits[5] > 1 || bits[6] > 1 || bits[7] > 1
				) {
				bits[0] = 0; bits[1] = 0; bits[2] = 0; bits[3] = 0; bits[4] = 0; bits[5] = 0; bits[6] = 0;
				bits[7] = 0;
			}
			else {

				byte* e = this;
				e->bit1 = bits[0];
				e->bit2 = bits[1];
				e->bit3 = bits[2];
				e->bit4 = bits[3];
				e->bit5 = bits[4];
				e->bit6 = bits[5];
				e->bit7 = bits[6];
				e->bit8 = bits[7];
				e->val = e->returnInt(e->bit1, e->bit2, e->bit3, e->bit4, e->bit5, e->bit6, e->bit7, e->bit8);
			}
		}	
		byte() {
			byte* e = this;
			e->val = 00000000;
		}
		friend std::ostream& operator<<(std::ostream& os, const byte& dt);
		friend std::istream& operator>>(std::istream& is, byte& dt);
	};
	/*class Entity {
	public:
		Entity() {
			std::cout << "Created Entity";
		}
		~Entity() {
			std::cout << "Destroyed Entity";
		}
	};
	class ScopedPtr {
	private:
		Entity* m_ptr;
	public:
		ScopedPtr(Entity* ptr)
			: m_ptr(ptr) 
		{

		}
		~ScopedPtr() 
		{
			delete m_ptr;
		}
	};*/
	std::ostream& operator<<(std::ostream& os, const math2& dt);
	std::ostream& operator<<(std::ostream& os, const byte& dt);
	std::istream& operator>>(std::istream& is, byte& dt);
	bool find(char argv[], char text[], int argc);
	void cmd();
	void food();
	void delay(unsigned int milliseconds);
	bool findChar(const char* find[], const char* car[1], int num);
	HWND GetConsoleHwnd(void);
	int splitInt(int input);
	class Class1 {
	public:
		void time(int start, int duration, bool key);
		void print_cheese();
		int print(int print);
		void printCar(char* print);
		void deleteFile(char deleteFile[100], bool dis);
		void deleteFile(char const deleteFile[100], bool dis);
		bool argCheck(char* argv[], const char text[100], int argc);
		bool argCheck(char* argv[], char text[100], int argc);
		bool argCheck(char* argv[], std::string text, int argc);
	};;
	class db {
	private:
	public:
		std::string encryptDecrypt(std::string toEncrypt, int cryptKey);
		std::string encryptDecrypt(std::string toEncrypt, char cryptKey);
		std::string createFile(std::string file, std::string text, int cryptKey);
		std::string createFile(std::string file, std::string text, char cryptKey);
		std::string readFile(std::string file);
		db() {
		
		}
	};
}
#endif