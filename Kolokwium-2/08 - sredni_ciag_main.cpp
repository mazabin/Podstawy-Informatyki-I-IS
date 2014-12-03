//program uruchamiamy z linii polecen (cmd.exe). Wyswietla "nan" chociaz chyba nie powinien. Dunno, rly.
#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char *argv[])
{
	float suma=0;
	for(int i=1; i<argc; i++)
		suma=suma+atof(argv[i]);
	cout << suma/(argc-1);
	getchar();
	return 0;
}
