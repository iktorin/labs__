#include<iostream>
int main() {
	//Опису змінних типів int, float, unsigned short.
	int nA;
	float flB;
	unsigned short wC ;

	//Ініціювання змінних, що описанні в п.1 даного
	//завдання (27652; 7.9e3; 74)
	nA = 27652;
	flB = 7.9e3;
	wC  = 74;

	//Опису змінних типів double, int, char.

	double dblD;
	int nE;
	char chF;

	//Ініціювання змінних

	//за допомогою неявного приведення типів

	dblD = nA;
	nE = flB;
	chF = wC;

	//за допомогою явного приведення

	dblD = (double)nA;
	nE = (int)flB;
	chF = (char)wC;

	//з обходом суворої типізації

	double* pdblD;
	void* pV;
	pV = &nA;
	pdblD = (double*)pV;
	dblD = *pdblD;

	int* pnE;
	pV = &flB;
	pnE = (int*)pV;
	nE = *pnE;

	char* pchF;
	pV = &wC;
	pchF = (char*)pV;
	chF = *pchF;
	return 0;
}