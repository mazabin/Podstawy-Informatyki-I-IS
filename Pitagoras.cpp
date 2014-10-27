#include <iostream>
#include <conio.h>

using namespace std;
int pitagoras(int a, int b, int c)
{
	bool flaga;
	if (a*a+b*b==c*c)
		flaga=true;
	else
		flaga=false;
	cout << flaga;	
	return 1;	
}
int main()
{
	cout << "Podaj liczby a, b i c\n";
	int a, b, c;
	cin >> a >> b >> c;
	pitagoras(a,b,c);
	
	getch();
	return 0;
}
