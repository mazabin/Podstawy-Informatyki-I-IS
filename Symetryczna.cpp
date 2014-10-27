//Dzia³a dla liczb trzycyfrowych. Rozwa¿yæ cztero, piêcio, szescio, siedmio, osmio, dziewiêcio i dziesiêciocyfrowe.
//a=aba,abba, abcba, abccba, abcdcba, abcddcba, abcdedcba, abcdeedcba
//policzyc ilosc cyfr, zrobic warunki dla liczby wielocyfrowej
#include <iostream>
#include <conio.h>

using namespace std;
int symetryczna(int a)
{
	//jesli pierwsza cyfra == ostatnia cyfra a jest symetryczna
	int b, c, d=a; //pierwsza, ostatnia cyfra
		b=a/10;
		c=b*10;
		c=a-c;
	while(a)
	{
		b=a%10;
		a=a/10;
	}
	cout << "Ostatnia cyfra= " << b << endl;
	cout << "Pierwsza cyfra= "<< c << endl; 
	if(b==c)
		cout << "Liczba a " << d << " jest symetryczna.";
}
int main()
{
	int a;
	cout << "Podaj a";
	cin >> a;
	symetryczna(a);
	
	getch();
	return 0;
}
