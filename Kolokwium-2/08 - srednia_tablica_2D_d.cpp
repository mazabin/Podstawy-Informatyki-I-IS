#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void srednia(int **tab, int n);
int main()
{
	srand(time(NULL));
	int n;				//n musi byc intem, bo nie zrobimy tablicy o wymiarze 1/2. 
	cout << "Podaj wymiar tablicy:\n>";
	cin >> n;
	int **tab = new int*[n];
	cout << "Nasza tablica:\n";
	for(int i=0; i<n; i++)
		{
			tab[i] = new int[n];
			for(int j=0; j<n; j++)
			{
				tab[i][j]=rand()%10;
				cout << tab[i][j] << " ";
				if(j==n-1)
					cout << endl;
			}
		}
	srednia(tab, n);
	getchar();
	return 0;
}
void srednia(int **tab, int n)
{
	double suma=0;
	int *tab2 = new int[n];		//tablica dynamiczna, zeby nawet visual sie nie czepial
	double srednia;
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{	
			suma=suma+tab[j][i];
		}
		srednia=suma/n;			
		cout << "suma wiersza " << j << " wynosi: "<< suma << "\tjego srednia wynosi:\t" << srednia << endl;
		tab2[j]=srednia;	//poniewaz n musi byc intem, to tablice tez robimy jako inta i wychodza inty. 
		suma=0;
	}
cout << endl << endl << "Tablica usredniona:"<< endl;
for(int i=0; i<n; i++)
		cout << tab2[i] << " ";
}
