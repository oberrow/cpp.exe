#include <string>
#include <ostream>
#ifndef FUNC_H
#define FUNC_H
namespace func {
	typedef bool boolean;
	typedef bool BOOL;
	void main2();
	void textEdit();
	void key();
	void struct1();
	void struct2();
	class constructer {
	private :
		int add(int a, int b);
		int sub(int a, int b);
		int multi(int a, int b);
		int div(int a, int b);
		int c, d;
	public :
		int r;
		friend std::ostream& operator<<(std::ostream& os, const constructer& dt);
		constructer(int c, char mathOperator, int d) {
			constructer* e = this;
			e->c = c;
			e->d = d;

			if (mathOperator == '+') 
				e->r = e->add(c, d);
			else if (mathOperator == '-')
				e->r = e->sub(c, d);
			else if (mathOperator == '*')
				e->r = e->multi(c, d);
			else if (mathOperator == '/')
				e->r = e->div(c, d);
		}
};
	class math {
	public:
		void multi(double m, double u);
		void add(double a, double d);
		void sub(double s, double b);
		void div(double d, double i);
		void square(double a);
	};
	std::ostream& operator<<(std::ostream& os, const constructer& dt);
	bool find(char argv[], char text[], int argc);
	void cmd();
	void food();
	void delay(unsigned int milliseconds);
	bool findChar(const char* find[], const char* car[1], int num);
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
	};
}
#endif