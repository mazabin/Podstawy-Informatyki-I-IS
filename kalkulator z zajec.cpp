#include <iostream>
#include <cmath>
#include <math.h> 
using namespace std;
int main ()
{
//Kalkulator
int a, b;
cout << "Wcisnij 1, aby rozpoczac dodawanie." << endl;
cout << "Wcisnij 2, aby rozpoczac odejmowanie." << endl;
cout << "Wcisnij 3, aby rozpoczac mnozenie." << endl;
cout << "Wcisnij 4, aby rozpoczac dzielenie." << endl;
cout << "Wcisnij 5, aby rozpoczac dzielenie z reszta" << endl;
cout << "Wcisnij 6, aby zamknac program \n>";
unsigned short int wybor;
cin >> wybor;
switch(wybor)
{
	case 1:
		cout << "Dodawanie: wprowadz dwie liczby, aby dodawac\n";
		cin >> a >> b ;
		cout << a << " + " << b << "=" << a+b;
		break;
	case 2:
		cout << "Odejmowanie: wprowadz dwie liczby, aby odejmowac \n";
		cin >> a >> b ;
		cout << a << " - " << b << "=" << a-b;
		break;
	case 3:
		cout << "Mnozenie: wprowadz dwie liczby, aby mnozyc \n";
		cin >> a >> b ;
		cout << a << " * " << b << "=" << a*b;
		break;
	case 4:
		cout << "Dzielenie: wprowadz dwie liczby, aby dzielic \n";
		cin >> a >> b ;
		cout << a << " / " << b << "=" << a/b;
		break;
	case 5:
		cout << "Dzielenie z reszta: wprowadz dwie liczby \n";
		cin >> a >> b ;
		cout << a << "%" << b << "=" << a%b ;
	case 6:
		break;
		
}
getchar();
return 0;
}
