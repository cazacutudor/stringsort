#include <iostream>
#include <string> // libraria string o folosim ca type pentru sirul de caractere citit de la tastatura
#include <algorithm>  // de aici luam functia sort

using namespace std;

// clasa InputHandler raspunde de procesarea sirului de caractere dat
// aici se definesc metodele (functile) clasei InputHandler

#pragma once
class InputHandler
{
public:
	string sorteazaSirulAlfabetic(string s);
	string sorteazaSirulInOglinda(string s);
	string convertesteSirulCuCaractereMici(string s);
};

