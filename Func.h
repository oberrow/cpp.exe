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
	class math {
	public:
		void multi(double m, double u);
		void add(double a, double d);
		void sub(double s, double b);
		void div(double d, double i);
		void square(double a);
	};
	void cmd();
	void food();
	void clear();
	void time(int start, int duration, bool key);
	void delay(unsigned int milliseconds);
	class Class1 {
	public:
		void print_cheese();
		int print(int print);
		void printCar(char* print);
		void deleteFile(char deleteFile[100], bool dis);
		bool argCheck(char* argv[], const char text[100], int argc);
		bool argCheck(char* argv[], char text[100], int argc);
	};
	
}
#endif