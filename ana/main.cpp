#include <iostream>
#include "InputHandler.h"

using namespace std;

/*
Zetu Ana

22.Să se scrie un proiect, care folosind clase, citeşte de la tastatură un şir de caractere,
afişează şirul de caractere doar cu litere mici, oglindeşte şirul citit şi îl ordonează
alfabetic.
*/


void main() {

	// aici se initializeaza clasa InputHandler
	InputHandler inputHandler = InputHandler();

	// aici se definesc variabilele de tip sir de caractere din aplicatie
	string 
		input,
		inputSortedAlphabetically, 
		inputReversed, 
		inputLowerCase;

	// cout - va afisa in consola textul dat ("Introdu sirul de caractere:")
	// endl - reprezinta sfarsitul liniei, iar urmatorul cout va si afisat pe o linie mai jos
	cout << "Introdu sirul de caractere:" << endl;

	// cin - citeste de la tastatura sirul de caractere si il salveaza in variabila input
	cin >> input;

	// se seateaza rezultatul functiei convertesteSirulCuCaractereMici pe variabila inputLowerCase
	inputLowerCase = inputHandler.convertesteSirulCuCaractereMici(input);

	// cout - va afisa in consola sirul de caractere citit de la tastatura doar cu litere mici
	cout << "Litere mici: " << inputLowerCase << endl;

	// se seateaza rezultatul functiei sorteazaSirulAlfabetic pe variabila inputSortedAlphabetically
	inputSortedAlphabetically = inputHandler.sorteazaSirulAlfabetic(input);

	// cout - va afisa in consola sirul de caractere citit de la tastatura sortat alfabetic
	cout << "Sortat Alfabetic: " << inputSortedAlphabetically << endl;

	// se seateaza rezultatul functiei sorteazaSirulInOglinda pe variabila inputReversed
	inputReversed = inputHandler.sorteazaSirulInOglinda(input);
	
	// cout - va afisa in consola sirul de caractere citit de la tastatura in oglinda
	cout << "In Oglinda: " << inputReversed << endl;

	// functia main este recursiva deci o va lua de la capat de fiecare data
	main();
}