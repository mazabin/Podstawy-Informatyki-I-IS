//program rysujacy kwadrat, o boku zadanym przez uzytkownika
#include <iostream>

using namespace std;
int main()
{
	cout << "Jaka figure chcesz narysowac? Wybierz odpowiednia liczbe: \n>";
	cout << "1. Z wypelnionym srodkiem. \n2.Pusta w srodku. \n>";
	char menu1;
	char menu2;
	cin >> menu1;
	switch(menu1)
	{
		case 49:
			cout << "Wybierz figure: \n1. Kwadrat \n2.Trojkat \n3. Szesciokat \n4. Choinke";
			cin >> menu2;
			switch(menu2)
			{
				case 49:
					cout << "Kwadrat";
					cout << "Wprowadz dlugosc boku: \n>" ;
						int x;
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
					cout << "Trojkat";
					cout << "Wprowadz wysokosc trojkata: \n>" ;
						int x;
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
				case 51:
					cout << "Szesciokat";
					break;
				case 52:
					cout << "Choinka";
					break;
				default:
					cout << "Nieprawidlowy wybor!";
					break;
			}
			break;
		case 50:
			cout << "Wybierz figure: \n1. Kwadrat \n2. Trojkat \n3. Szesciokat \n4. Osmiokat";
			cin >> menu2;
			switch(menu2)
			{
				case 49:
					cout << "Kwadrat";
					break;
				case 50:
					cout << "Trojkat";
					break;
				case 51:
					cout << "Szesciokat";
					break;
				case 52:
					cout << "Osmiokat";
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
