#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
	srand(time(0));
	int losowa = rand() % 100 + 1;
	int zgadywana = 0;
	int ruch = 0;
	string imie;
	int count = 0;

	cout << losowa;
	cout << "Wylosowalem liczbe od 1 do 100, postaraj sie ja odgadnac!" << endl;

	while (zgadywana != losowa)
	{
		cout << "Podaj liczbe: ";
		ruch++;
		cin >> zgadywana;

		if (zgadywana > losowa)
		{
			cout << "\nNiestety, sprobuj ponownie. Twoja liczba jest wieksza niz wylosowana." << endl;
		}

		else if (zgadywana < losowa)
		{
			cout << "\nNiestety, sprobuj ponownie. Twoja liczba jest mniejsza niz wylosowana." << endl;
		}
	}

	cout << "\nBrawo! Udalo Ci sie odgadnac liczbe!" << endl;
	cout << "\nIlosc podejsc: " << ruch;
	cout << "\nPodaj imie: ";
	cin >> imie;


	ofstream o;
	ifstream i;

	o.open("wyniki.txt", std::ios_base::app);
	o << imie << "     " << ruch << endl;
	o.close();	

	cout << "\nWyniki\n";
	cout << "____________________\n";
	cout << "Imie     Ilosc ruchow\n";
	i.open("wyniki.txt", ios::in);
	if (i.is_open()) {  
		string tp;
		while (getline(i, tp)) {
			count++;
			cout <<count<<"."<< tp << "\n";
		}
		i.close();
	}
}

