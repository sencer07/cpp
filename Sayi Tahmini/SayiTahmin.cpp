//Kodlar Alıntıdır.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int randomsayi, kullanicisayi;
	srand(time(NULL));
	randomsayi = rand() % 10;


	do {
		cout << "Sizce Sayi Kac ? ";
		cin >> kullanicisayi;
		if (kullanicisayi > randomsayi)
			cout << "Biraz daha inin" << endl;
		else if (kullanicisayi < randomsayi)
			cout << "Biraz daha cikin" << endl;
		else
			break;
	} while (randomsayi != kullanicisayi);

	cout << "-_- Tebrikler Bildiniz -_-" << endl;

	system("pause");
}
