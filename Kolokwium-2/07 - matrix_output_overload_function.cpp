#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void wypisz(int tab[], int a);
void wypisz(int tab2[][5], int a);
int main()
{
	srand (time(NULL));
	int tab[5];
	int tab2[5][5];
	char opcja;
//	cout << "Tablica dwuwymiarowa: " << endl;
	for(int i=0; i<5; i++)
		{
			for(int j=0; j<5; j++)
				{
					tab[i]=rand()%10;
					tab2[i][j]=rand()%10;
					//cout << tab2[i][j] << " ";
				//if (j==4)
					//	cout << endl;
				}
		}
	//Odkomentowanie trzech ponizszych linii sprawi, ze tablice beda sie wyswietlac przed wykonaniem funkcji wybranej przez uzytkownika.
	//	cout << "Tablica jednowymiarowa: " << endl;
	//	for(int i=0; i<5; i++)
	//		cout << tab[i] << " ";
		while(opcja!=49 && opcja!=50) //menu wyboru powtarzane dopoki nie poda sie 1 lub 2.
		{
			
			cout << "1. Wypisz tablice jednowymiarowa\n2. Wypisz tablice dwuwymiarowa\n>";
			cin >> opcja;
			if(opcja==49)
				{
					wypisz(tab, 5);
					break;
				}
			if(opcja==50)
				{
					wypisz(tab2, 5);
					break;
				}
			else
				cout << "Wybor nieprawidlowy!";
		}
	getchar();
	return 0;
}
void wypisz(int tab[], int a)
{
	cout << "Wypisanie tablicy jednowymiarowej: " << endl;
		for(int i=0; i<5; i++)
			{
				cout << tab[i] << " ";
				if(i==4)
					cout << endl << endl;
			}
}
void wypisz(int tab2[][5], int a)
{
	cout << "Wypisanie tablicy dwuwymiarowej: " << endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
			{
				cout << tab2[i][j] << " ";
				if (j==4)
					cout << endl;
			}
	}
}
