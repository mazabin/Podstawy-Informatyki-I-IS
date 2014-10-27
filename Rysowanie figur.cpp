//program rysujacy kwadrat, o boku zadanym przez uzytkownika
#include <iostream>
//#include "figurypelne.h"
//#include "figurypuste.h"
using namespace std;
int main()
{
	cout << "Jaka figure chcesz narysowac? Wybierz odpowiednia liczbe: \n";
	cout << "1. Z wypelnionym srodkiem.\n2. Pusta w srodku. \n>";
	int x;
	int y=x;
	char menu1;
	char menu2;
	cin >> menu1;
	switch(menu1)
	{
		case 49:
			cout << "Wybierz figure:\n1. Kwadrat\n2. Trojkat\n3. Szesciokat\n4. Choinke\n>";
			cin >> menu2;
			switch(menu2)
			{
				case 49:
					cout << "Kwadrat \n";
					cout << "Wprowadz dlugosc boku: \n>" ;
						cin >> x;
						for ( int j=1; j<=x; j++)
						{
							for (int i=1; i<=x; i++)
							{
								cout << "*" ;
								if(i==x)
								cout << endl;
							}
							
						}
					break;
				case 50:
					cout << "Trojkat \n";
					cout << "Wprowadz wysokosc \n>" ;
						cin >> x;
						for (int i=1; i<=x; i++)
						{
							for (int j=1; j<=i; j++)
							cout << "* ";
							cout << endl;
						}
					break;
				case 51:
					cout << "Szesciokat \n";
					cout << "Rysowanie szesciokata zakoncznono niepowodzeniem";
					 /*cin >> x;
					 int przebieg;
					 for (przebieg=1; przebieg<=2*x-1; przebieg++)
					 	{
						 bool flaga = false;
						 for(int i=1; i<=y-1; i++)
					    	cout << ".";
							flaga=true;
							if(flaga)	
					     		{
					     		for(int j=1; j<=y; j++)
					        		{
					        		cout << "*";
					        		}
					        	}					  
					     y++;
					    }*/
					break;
				case 52:
					cout << "Choinka \n";
					cout << "Podaj wysokosc choinki \n>";
					cin >> x;
				        for(int i=1; i<=x; i++ )
				        {
				            for(int j=1; j<=x-i; j++)
				            {
				                cout << " ";
				            }
				            for(int j=1; j<=i*2-1; j++)
				            {
				                cout << "*";
				            }
				            cout << endl;
				        }
				break;
				default:
					cout << "Nieprawidlowy wybor! \n";
					break;
			}
			break;
	
		case 50:
			cout << "Wybierz figure: \n1. Kwadrat \n2. Trojkat \n3. Szesciokat \n4. Osmiokat\n>";
			cin >> menu2;
			switch(menu2)
			{
				case 49:
					cout << "Kwadrat\n";
					cout << "Wprowadz dlugosc boku: \n>" ;
					cin >> x;
					for (int j=1; j<=x; j++)
					{
						if (j==1 || j==x)
						{
							for(int i=1; i<=x+1; i++)
								cout << "*";
							cout << endl;
						}
						else
						{
							for (int i=1; i<=x; i++)
							{
								if(i==1)
									cout << "*" ;
								if(i>1 && i<=x)
									cout << " ";
								if(i==x)
								cout << "*" << endl;
							}
						}
					}
					break;
				case 50:
					cout << "Trojkat\n";
					cout << "Wprowadz wysokosc \n>" ;
						cin >> x;
						for(int i=0;i<x;i++)
						{
							for(int j=0; j<=i; j++)
							{
								if((j==0 || j==i) || i==x-1)
									cout << "*";
								else
									cout << " ";
							}
							cout << endl;
						}
					break;
				case 51:
					cout << "Szesciokat\n";
					cout << "Nie udalo sie narysowac szesciokata. \n";
					break;
				case 52:
					cout << "Osmiokat\n";
					cout << "Nie udalo sie narysowac osmiokata. \n";
					break;
				default:
					cout << "Nieprawidlowy wybor!";
					break;
			}
			break;
	}
getchar();
return 0;
}
