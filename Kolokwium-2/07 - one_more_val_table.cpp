//Program tworzy tablicê o zadanym przez u¿ytkownika rozmiarze i wype³nia j¹ losowymi liczbami. 
//W nastêpnym etapie u¿ytownik wybiera liczbê, któr¹ chce dopisaæ do tablicy oraz miejsce w tablicy, gdzie wartosc ma byæ zapisana.
//Program tworzy tablicê o rozmiarze wiêkszym o jeden ni¿ pierwotna tablica i przepisuje do niej wartosci zgodnie z wybranymi przez uzytkownika parametrami.
//Ta wersja programu nie wykorzystuje wskaŸników. 
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void newArray(float Array[], int size, float value, int position);
int main()
{
	int i, pos; 
	float val;
	srand(time(NULL));
	cout << "Wielkosc tablicy: ";
	cin >> i;
	float tab[i];
	for(int j=0; j<i; j++)
		{
			tab[j]=rand()%10;
			cout << tab[j] << " ";
		}
	cout << endl << "Podaj wartosc, ktora chcesz dodac do tablicy: ";
		cin >> val;
	cout << endl << "Podaj pozycje do umieszczenia wartosci: ";
		cin >> pos;
	newArray(tab, i, val, pos);
	
	getchar();
	return 0;	
}
void newArray(float Array[], int size, float value, int position)
{
	int newSize=size+1;
	int newTab[newSize];
	for(int i=0; i<size; i++)
		newTab[i]=Array[i];
		position--;
	newTab[newSize]=value;
	cout << "Nowa tablica:" << endl << "index\twartosc" << endl;
	if(position==newSize)
		{
			for(int j=0; j<newSize; j++)
				cout << "[" << j << "]\t" << newTab[j] << endl;
		}
	else
		{
			for(int wsk=newSize; wsk>=0; wsk--)
				{
					if(wsk!=position)
						swap(newTab[wsk], newTab[wsk-1]);
					else
						{
							for(int j=0; j<newSize; j++)
								cout << "[" << j << "]\t" << newTab[j] << endl; 
							break;
						}
				}
		}
}
