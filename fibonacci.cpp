#include <iostream>
using namespace std;

int fibonacci(int position)
	{ 
		if(position==0 || position==1) 
		return 1; 
		return fibonacci(position-2) + fibonacci(position-1); 
	}
 
int main()
{
	cout << "Funkcja wyswietlajaca ciag Fibonacciego" << endl;
	cout << "Wpisz ile liczb ciagu chcesz wyswietlic ciag \n>";
	int x;
	cin >> x;
	for (int i=0; i<=x; i++)
	cout << fibonacci(i) << " ";

getchar();
return 0;
}
