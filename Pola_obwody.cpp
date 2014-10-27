#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
//wykorzystujac switch i for obliczyc pola i obwody:
// kwadratu, prostokata(bok==bok?), trojkata (cheron) i okregu (sta³a pi)
int main()
{
	char menu;
	int a, b, c, pole, obwod;
	cout << "1. Pole i obwod prostokata\n2. Pole i obwod trojkata\n3. Pole i obwod kola\n>";
	cin >> menu;
	switch(menu)
	{
		case 49:
			cout << "Podaj boki prostokata:\n>";
			cin >> a >> b;
			pole=a*b, obwod=2*a+2*b;
			cout << "Pole prostokata o bokach: " << a << " i " << b << " wynosi " << pole << "." << endl;
			cout << "Obwod prostokata o bokach: " << a << " i " << b << " wynosi " << obwod << "." << endl;
			if(a==b)
				cout << "Podany prostokat jest kwadratem!" << endl;
			break;
		case 50:
			cout << "Podaj boki trojkata:\n>";
			double t1, t2, t3;
			cin >> t1 >> t2 >> t3;
			if (t1+t2>t3 && t1+t3>t2 && t2+t3>t1)
			{
				int p=(t1+t2+t3)/2;
				double pole=sqrt(p*(p-t1)*(p-t2)*(p-t3));
				int obwod=t1+t2+t3;
				cout << "Pole trojkata o bokach: " << t1 << ", " << t2 << " i " << t3 << " wynosi " << pole << "." << endl;
				cout << "Obwod trojkata o bokach: " << t1 << ", " << t2 << " i " << t3 << " wynosi " << obwod << "." << endl;
			}
			else
				cout << "Z podanych bokow nie mozna zbudowac trojkata!";
			break;
		case 51:
			double r;
			cout << "Podaj promien kola:\n>";
			cin >> r;
			double pole=r*r*M_PI;
			double obwod=2*r*M_PI;
			cout << "Pole kola o promieniu: " << r << " wynosi " << pole << "." << endl;
			cout << "Obwod kola o promieniu: " << r << " wynosi " << obwod << "." << endl;
			break;
		default:
			cout << "Nieprawidlowy wybor!";
		
	}



getch();
return 0;
}
