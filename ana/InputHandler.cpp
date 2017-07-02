#include "InputHandler.h"

// aici se implementeaza metodele clasei InputHandler

string InputHandler::sorteazaSirulInOglinda(string s)
{
	// metoda reverse va procesa sirul de caractere dat si il va returna in oglinda
	reverse(s.begin(), s.end());
	
	return s;
}

string InputHandler::convertesteSirulCuCaractereMici(string s)
{
	// metoda transform o sa ia fiecare caracter in parte din string si o sa il converteasca. rezultatul fiind un sir de caractere doar cu litere mici
	transform(s.begin(), s.end(), s.begin(), tolower);

	return s;
}

string InputHandler::sorteazaSirulAlfabetic(string s)
{
	// metoda sort va sorta sirul de caractere dat, in ordine alfabetica
	sort(s.begin(), s.end());

	return s;
}

