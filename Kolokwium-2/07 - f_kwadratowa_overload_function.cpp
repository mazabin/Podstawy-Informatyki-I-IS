#include <iostream>
#include <cmath> //funkcja sqrt


using namespace std;
int zero(); //gdy delta < 0
int zero(int d0[], int a); //delta=0
int zero(int d1[], int a, int d);
int main()
{
	int tab[3]={0}, a, b, c;
	cout << "Podaj wspó³czynniki a, b, c: " << endl;
	cin >> a >> b >> c;
	cout << "Twoja funkcja ma postaæ: " << a <<"x^2+" << b << "x+" << c << endl;
	tab[0]=a;
	tab[1]=b;
	tab[2]=c;
	int delta=tab[1]*tab[1]-(4*tab[0]*tab[2]);
	cout << "Delta = " << delta << endl;
	cout << "Miejsce zerowe Twojej funkcji ";
	if(delta<0)
		zero();
	if(delta==0)
		zero(tab, 3);
	if(delta>0)
		zero(tab, 3, delta);

	getchar();
	return 0;
}
int zero()
{
	cout << "nie istnieje, delta jest mniejsza od zera.";
	return 0;
}
int zero(int d0[], int a)
{
	double m_zero=(d0[1]*(-1))/(2*d0[0]);
	cout << "x0=" << m_zero;
}
int zero(int d1[], int a, int d)
{
	double m_zero1=((-1)*d1[1]-sqrt(d))/(2*d1[0]);
	double m_zero2=((-1)*d1[1]+sqrt(d))/(2*d1[0]);
	cout << "x1=" << m_zero1 << ", x2=" << m_zero2;
}
