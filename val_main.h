#include <string>
#include <iostream>
#include "Func.h"
#ifndef FUNC_MAIN_H
#define FUNC_MAIN_H
int functions;
int age = 0;
int operVal;
double a;
double b;
func::db db2;
std::string password = db2.encryptDecrypt("OmarBerrow", 'O');
std::string passcheck;
std::string logfile = "cpp-log.log";
char logFile[12] = { "cpp-log.log" };
std::string Pholder;
char addition = '+';
char substaction = '-';
char multiplication = '*';
char division = '/';
#endif
