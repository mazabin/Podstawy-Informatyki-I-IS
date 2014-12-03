#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL)); 				//pseudolosowy generator liczb
	int tab[10], tab2[10];		//deklaracja dwoch, jednowymiarowych tablic
	cout << "tab" << endl;
	for(int i=0; i<10; i++)			//petla wypelniajaca tablice losowymi liczbami z zakresu 10
	{
		tab[i]=rand()%100+10;
		cout << tab[i] << " " ;
	}
	cout << endl << endl;
	for(int i=9; i>=0; i--)			//petla wypelniajaca druga tablice od konca wartosciami z pierwszej
	{
		tab2[9-i]=tab[i];
	}
	cout << "table \treversed table" << endl;	
	for(int i=0; i<10; i++)			//wyswietlenie obu tablic
	{
		cout << tab[i] << "\t" << tab2[i] << endl;
	}
		
	getchar();
	return 0;
}
