
#include <iostream>
using namespace std;

int main (void)
{
      srand (time (0));
      int losowa = rand () % 100 + 1;
      int zgadywana = 0;

      cout << "Wylosowalem liczbe od 1 do 100, postaraj sie ja odgadnac!" <<
	endl;

      while (zgadywana != losowa)
	{
	  cout << "Podaj liczbe: ";
	  cin >> zgadywana;

	  if (zgadywana > losowa)
	    {
	      cout <<"\nNiestety, sprobuj ponownie. Twoja liczba jest wieksza niz wylosowana."<<endl;
	    }

	  else if (zgadywana < losowa)
	    {
	      cout <<"\nNiestety, sprobuj ponownie. Twoja liczba jest mniejsza niz wylosowana."<<endl;
	    }
	}
      cout << "\nBrawo! Udalo Ci sie odgadnac liczbe!";

}

