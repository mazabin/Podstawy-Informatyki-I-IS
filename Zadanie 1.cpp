#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	float v;
	float s;
	float a;
	float t;
	float Ek;
	float m=1;
	cout << "Kula lecaca z predkoscia 400 m/s uderza w nasyp i zaglebia sie w nim na 40 cm." << endl << "Ile wynosilo srednie opoznienie?"<< endl << "Ile wynosil czas zaglebiania sie?" << endl << endl;
	cout << "Podaj dane w jednostkach SI:" << endl;
		cout << "v= ";
			cin >> v;
		cout << "s= ";
			cin >> s;
	cout << endl;
	cout << "Szukane: " << endl << "a [m/s^2]" << endl << "t [s]" << endl << endl;
	
	cout << "OPOZNIENIE" << endl << endl << "Ek=W => (mv^2)/2=mas" << endl;
		int b;
		b=m*v*v;
		Ek = b/2;
	cout << "Ek= " << Ek << "." << endl;
	cout << "Poniewaz masa kuli sie nie zmienia pomijamy ja w obliczeniach."<< endl;
	cout << "=> (v^2)/2=a*s" << endl;
	cout << "Opoznienie kuli: a=(v^2)/2s" << endl;
		a=(v*v)/(2*s);
		cout << "Opoznienie wynosi: " << a << " m/s^2" << endl << endl;
	cout << "CZAS" << endl << endl;
	cout << "Czas zaglebiania sie kuli obliczymy przeksztalcajac wzor na opoznienie:\na=v/t => t=v/a" << endl;
		t=v/a;
		cout << "Czas zaglebiania sie kuli w nasypie wynosi " << t << " s." << endl << endl;
	cout << "Wcisnij X, aby zakonczyc program. Program zamknie sie automatycznie po 5 nieudanych probach." << endl;
	char X = 0;
	
	for (int i=0; i<=5; i++)
	{
	cout << "> " << endl;
	cin >> X;
	switch (X)
		{	case 120:
				return 0;
			case 88:
				return 0;
			default:
				cout << " To nie jest X!" << endl;
		}
	}
	
	getchar();
	
	return(0);
}
