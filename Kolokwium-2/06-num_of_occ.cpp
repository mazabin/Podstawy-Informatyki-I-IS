//program zlicza wystapienia cyfr w tablicy
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	srand(time(NULL));
	int tab[100],tab2[10];		//deklaracja tablic
	for(int j=0; j<10; j++)		//wyzerowanie drugiej tablicy
	{
		tab2[j]=0;
	}
	for(int i=0; i<100; i++)
	{
		tab[i]=rand()%10;		//losowanie do tablicy liczb z przedzialu 0-9
		cout << tab[i] << " ";
		if(i==9 || i==19 || i==29 || i==39 || i==49 || i==59 || i==69 || i==79 || i==89)
			cout << endl;
		for(int c=0; c<10; c++)
			if(tab[i]==c)
					tab2[c]++;	
	}		
	cout << endl << endl << tab2[0] << " " << tab2[1] << " " << tab2[2] << " " << tab2[3] << " " << tab2[4]<< " " << tab2[5] << " " << tab2[6]<< " " << tab2[7] << " " << tab2[8]<< " " << tab2[9];
	
	
getchar();
return 0;	
}
