#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main()
{
	double d; 	//odleg�os�, na kt�ra poleci pocisk
	double v=8.0f; //predkosc pocisku
	double g=9.810f; //przyspieszenie ziemskie
	for (double kat=5.0f; kat<=85.0f; kat=kat+5.0f) //zwi�kszamy k�t o pi�� za ka�dym razem
	{
		double rad=(2*kat*M_PI)/180; //zamieniamy stopnie na radiany, podwajamy kat
		 	cout << kat << " stopni = " << rad << " radianow." << endl;
			
		double dsin = sin(rad); //definiujemy funkcj� sinus podwojonego k�ta (line 13)
			cout << "Sin(2x) " << kat << " wynosi " << dsin << "." << endl;
			
		d=(v*v*dsin)/g; //liczymy odleg�os� ze wzoru d=(v^2*sin(2x))/g
			cout << endl << "Pocisk przebedzie odleglosc " << d << " dla " << kat << " stopni" << endl << endl;
	}
getchar();
return 0;
}
