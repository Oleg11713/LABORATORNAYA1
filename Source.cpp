#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int menu();

int main()
{
	setlocale(LC_ALL, "rus");
	int mn = menu();
	cout << "Enter temperature:" << endl;
	double data;
	cin >> data;
	if (mn == 0) {
		system("cls");
		cout << setw(10) << setfill('\\') << setprecision(4) << data << " F = " << (data - 32) / 1.8 << " C" << endl;
	}
	else 
		if (mn == 1) {
			system("cls");
			cout << setw(10) << setfill('\\') << setprecision(4) << data << " C = " << data * 1.8 + 32 << " F" << endl;
		}
	return 0;
}

int menu()
{
	int viborKnopki = 0, knopka = 0;
	while (true)
	{
		cout << "Select the scale to the desired temperature:" << endl;
		viborKnopki = (viborKnopki + 2) % 2;

		if (viborKnopki == 0) cout << " -> Fahrenheit scale" << endl;
		else cout << "Fahrenheit scale" << endl;

		if (viborKnopki == 1) cout << " -> Celsius scale" << endl;
		else cout << "Celsius scale" << endl;

		knopka = _getch();
		if (knopka == 224) {
			knopka = _getch();
			if (knopka == 72) viborKnopki--;
			if (knopka == 80) viborKnopki++;
		}
		if (knopka == 13) { system("cls"); return viborKnopki; }
		system("cls");
	}
}