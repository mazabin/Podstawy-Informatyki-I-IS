#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	int n;
	srand(time(NULL));
	cout << "Podaj rozmiar tablicy:\n>";
	cin >> n;
	int **tablica = new int*[n];
	int **tablica2=new int*[n];
	
	for(int i=0; i<n; i++)
		{
			tablica[i] = new int[n];
			tablica2[i]=new int[n];
		}
	cout << endl << "tablica przed transpozycja:" << endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			tablica[i][j]=rand()%10;
			cout << tablica[i][j] << " ";
			if(j==n-1)
				cout << endl;
		}
	}
	cout << endl << endl << "tablica po transpozycji:"<< endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			tablica2[i][j]=tablica[j][i];
			cout << tablica2[i][j] << " ";
			if(j==n-1)
				cout << endl;
		}
	}

	
	getchar();
	return 0;
}
