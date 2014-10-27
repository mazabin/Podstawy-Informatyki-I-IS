#include <iostream>
#include <conio.h>

using namespace std;
int potega(int m, int n=2)
{
	if(n==0)
		{
		cout << m << " do potegi 0 = 1";
		return 0;
		}
	else
		{
		int a=m;
		for(n; n>1; n--)
			a=a*m;	
		cout << a;		
		return 0;
		}
}
int main()
{
	int a, b;
	cout << "Podaj liczbe 'm' i potege 'n':\n";
	cin >> a >> b;
	potega(a, b);
	
	getch();
	return 0;
}
