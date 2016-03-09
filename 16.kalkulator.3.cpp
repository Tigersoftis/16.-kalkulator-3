# include <iostream>
# include <cstdlib>
# include <math.h>  // funkcje pow, M_PI, M_E, exp, log,
using namespace std;

enum { dodawanie, odejmowanie, mnozenie, dzielenie, kwadrat, szescian, potega, pierwiastek, pi, e, exponenta,  logarytm, silnia, tworca, wyjscie }; 
// enum - typ wyliczeniowy (przyporz¹dkowuje od 0 i kolejno 1, 2, 3 itd- nie musi miec nazwy

int main() 
{
double liczba1; 
double liczba2; 
int rodzaj_dzialania;// int - integer - liczba calkowita (bez przecinków)
	unsigned int n; //z tej liczby bêdziemy liczyæ silniê (unsigned - liczby tylko dodatnie)
	long long silnia = 1; //ta zmienna bêdzie przechowywaæ wynik silni

cout << "\nWitaj w kalkulatorze, ktory pozwoli Ci wykonac kilka dzialan: \n\n";

while (true)
{


	cout << "Jakie dzialanie wykonac?  : [0]  - DODAWANIE" << endl;
	cout << "                          : [1]  - ODEJMOWANIE" << endl;
	cout << "                          : [2]  - MNOZENIE" << endl;
	cout << "                          : [3]  - DZIELENIE" << endl;
	cout << "                          : [4]  - KWADRAT LICZBY" << endl;  
	cout << "                          : [5]  - SZESCIAN LICZBY" << endl; 
	cout << "                          : [6]  - POTEGOWANIE" << endl;
	cout << "                          : [7]  - PIERWIASTEK KWADRATOWY" << endl;
	cout << "                          : [8]  - LICZBA POMNOZONA PRZEZ LICZBE Pi" << endl;
	cout << "                          : [9]  - LICZBA POMNOZONA PRZEZ LICZBE e (EULERA)" << endl;
	cout << "                          : [10] - EXPONENTA [exp(x) = e^x]" << endl;
	cout << "                          : [11] - LOGARYTM NATURALNY" << endl;
	cout << "                          : [12] - SILNIA (n!)" << endl;
	cout << "_________________________________________________" << endl; 
	cout << "                          : [13] - Autor programu" << endl; 
	cout << "                          : [14] - Wyjscie" << endl;
	cout << endl << endl;

cin >> rodzaj_dzialania;
cout << endl << endl;
	
if (rodzaj_dzialania == wyjscie) 
	{
		break;
	} 
	

	
	
switch (rodzaj_dzialania) 
{
	case dodawanie: 	
					cout << "Podaj 1 liczbe: ";
					cin >> liczba1;
					cout << endl; 

					cout << "Podaj 2 liczbe: ";
					cin >> liczba2;
					cout << endl << endl;

					cout << "Suma liczb wynosi: " << liczba1 + liczba2 << endl; break;

	case odejmowanie: 	
						cout << "Podaj 1 liczbe: ";
						cin >> liczba1;
						cout << endl; 

						cout << "Podaj 2 liczbe: ";
						cin >> liczba2;
						cout << endl << endl;
						
						cout << "Roznica liczb wynosi: " << liczba1 - liczba2 << endl; break;
	
	case mnozenie: 		
					cout << "Podaj 1 liczbe: ";
					cin >> liczba1;
					cout << endl; 

					cout << "Podaj 2 liczbe: ";
					cin >> liczba2;
					cout << endl << endl;
		
					cout << "Iloczyn liczb wynosi: " << liczba1 * liczba2 << endl; break;
					
	case dzielenie: 	
						
						
							cout << "Podaj 1 liczbe: ";
							cin >> liczba1;
							cout << endl; 

							cout << "Podaj 2 liczbe: ";
							cin >> liczba2;
							cout << endl << endl;
							
						if (liczba2 == 0) // dzieki temu warunkowi (je¿eli liczba2 = 0) przy dzieleniu przez zero nie wyskoczy b³¹d tylko...
						{
							cout << " Nie mozna dzielic przez zero!" << endl; break; //...tylko tekst, który tu wpisa³em
						}
						else // w przeciwnym razie (ni¿ liczba 2 = 0) uzyskam poni¿sze
						{
							cout << "Iloraz liczb wynosi: " << liczba1 / liczba2 << endl; break;
						}
	
	case kwadrat: 		
						cout << "Podaj liczbe: ";
						cin >> liczba1;
						cout << endl; 
					
						cout << liczba1 << " do kwadratu wynosi: " << liczba1 * liczba1<< endl; break;
				  		 
				  		
	case szescian: 		cout << "Podaj liczbe: ";
						cin >> liczba1;
						cout << endl; 
					
						cout << liczba1 << " do potegi trzeciej: " << liczba1 * liczba1 * liczba1<< endl; break;
	
	case potega:	cout << "Podaj podstawe potegi: ";
					cin >> liczba1;
					cout << endl; 

					cout << "Podaj wykladnik potegi: ";
					cin >> liczba2;
					cout << endl << endl;
		
					cout << liczba1 << " do potegi " << liczba2 << " wynosi: " << pow (liczba1, liczba2) << endl; break;
				
				
	case pierwiastek: 		cout << "Podaj liczbe podpierwiastkowa: ";
							cin >> liczba1;
							cout << endl << endl;
	
							cout << "Pierwiastek kwadratowy z liczby " << liczba1 << " wynosi: " << sqrt (liczba1) << endl; break;
						
						
	case pi: 	cout << "Podaj liczbe: ";
				cin >> liczba1;
				cout << endl << endl;
	
				cout << liczba1 << " razy Pi (" << M_PI << ") wynosi: " << liczba1 * M_PI << endl; break;

	case e: 	cout << "Podaj liczbe: ";
				cin >> liczba1;
				cout << endl << endl;
	
				cout << liczba1 << " razy e (" << M_E << ") wynosi: " << liczba1 * M_E << endl; break;
	
	case exponenta: cout << "Podaj liczbe (x): ";
					cin >> liczba1;
					cout << endl << endl;	
	
					cout << "x = " << liczba1 << endl;
					cout << "exp (x) wynosi: " << exp (liczba1) << endl; break;
					
					
	case logarytm: 		cout << "podaj liczbe: ";
						cin >> liczba1;
						cout << endl << endl;
	
						cout << "Logarytm naturalny liczby " << liczba1 << " wynosi: " << log (liczba1) << endl; break;
						
	case silnia:    

					cout << "Podaj n: ";
					cin << n;
					for(int i=n;i>1;i--) // w nawiasie: nadawanie pocz¹tkowych wartoœci zmiennym; warunek koñcz¹cy pêtlê for; zmniejszanie licznika petli
    				silnia = silnia * i //lub silnia*=i
 
  					cout << n << "! = " << silnia << endl; break;
	
	case tworca: 
			cout << "       _______ __ _______ _______ _______"<< endl;
			cout << "      /__  __// // _____// _____// ___  /"<< endl;
			cout << "        / /  / // /____ / /____ / /__/ /"<< endl;
			cout << "       / /  / // //_  // _____//   ___/"<< endl;
			cout << "      / /  / // /__/ // /____ / /\\ \\"<< endl;
			cout << "     /_/  /_//______//______//_/  \\_\\SOFT"<< endl;
			
	default: cout << "Zly wybor" << endl; break; // pokaze komunikat "Zly wybor" jesli zostanie wybrana inna liczba niz na liscie	  
}	
cout << endl << endl;	
	
	system ("pause");
	system ("cls"); // czyszczenie ekranu
}
	return 0;
}
