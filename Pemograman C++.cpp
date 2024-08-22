#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	int a = 45, b = 4, c = 2;
	float ipangkat, iakar, isin, icos, itan;

	iakar = sqrt(b);
	cout << "Akar dari " << b << " adalah " << iakar << endl;

	ipangkat = pow(b, c);
	cout << b << " pangkat " << c << " adalah " << ipangkat << endl;

	isin = sin(a);
	cout << "sin sudut " << a << " derajat adalah " << isin << endl;

	icos = cos(a);
	cout << "cos sudut " << a << " derajat adalah " << icos << endl;

	itan = tan(a);
	cout << "tan sudut " << a << " derajat adalah " << itan << endl;
	system("PAUSE");
	return 0;
}