#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main()
{
	int n;
	cout << "Podaj ile wyrazow wpiszesz\n";
	cin >> n;
	string slowo;
	string *tab = new string[n];
	cout << "Podaj wyrazy:\n";
	for (int i=0; i<n; i++)
	{
		cin >> slowo;
		tab[i]=slowo;
	}
	for(int i=0; i<n; i++)
	{
		if (tab[i].find_first_of("AaEeOoUuIiYy") == false)
			cout << tab[i] <<"\t true" << endl;
	}
	getchar();
	return 0;
}
