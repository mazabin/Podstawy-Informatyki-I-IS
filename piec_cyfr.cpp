#include <iostream>
#include <conio.h>

using namespace std;
int piec_cyfr(int a)
{
	for (int i=99999; i>=10000; i--)
		{
			int c=i, b=0, x;
			while(c)
			{
				x=c%10;
				b=x+b;
				c=c/10;
			}
		if(b==a)
			cout << i << " " ;
		}
}
int main()
{
	int a;
	cin >> a;
	piec_cyfr(a);
	
	getch();
	return 0;
}
