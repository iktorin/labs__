#include<iostream>
int main() {
	//����� ������ ���� int, float, unsigned short.
	int nA;
	float flB;
	unsigned short wC ;

	//���������� ������, �� ������� � �.1 ������
	//�������� (27652; 7.9e3; 74)
	nA = 27652;
	flB = 7.9e3;
	wC  = 74;

	//����� ������ ���� double, int, char.

	double dblD;
	int nE;
	char chF;

	//���������� ������

	//�� ��������� �������� ���������� ����

	dblD = nA;
	nE = flB;
	chF = wC;

	//�� ��������� ������ ����������

	dblD = (double)nA;
	nE = (int)flB;
	chF = (char)wC;

	//� ������� ������ ��������

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