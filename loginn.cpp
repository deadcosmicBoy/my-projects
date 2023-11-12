#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>


using namespace std;

string login, haslo;

int stan_konta = 100;
int wybor, choice;
int wplata, wyplata, przelew;
int nr_konta;


int main()
{
	while(true)
	{
		HANDLE hOut;
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);

		cout << "-------------------------------------------------" << endl;
		cout << "||               Panel logowania               ||" << endl;
		cout << "-------------------------------------------------" << endl;
		Sleep(500);
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
		cout << "Login: ";
		cin >> login;
		cout << "Haslo: ";
		cin >> haslo;
		system("cls");
		if ((login == "admin") && (haslo == "dev"))
		{
			Sleep(600);
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
			cout << "Przyznano dostep !";
			Sleep(1000);
			system("cls");
			HANDLE hOut;
			hOut = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
				cout << "--------------------------------------------------------------------" << endl;
				cout << "                    " << "   Stan konta : " << stan_konta << "                             " << endl;
				SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
				cout << "--------------------------------------------------------------------" << endl;
				SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << "(1) Wplac" << endl;
				SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << "(2) Wyplac" << endl;
				SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << "(3) Przelew" << endl;
				SetConsoleTextAttribute(hOut, FOREGROUND_RED);
				cout << "(4) Wyloguj" << endl;
				SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
				cout << "--------------------------------------------------------------------" << endl;
				cout << "\n\nWybieram: ";
				cin >> choice;
				Sleep(1000);

				switch (choice)
				{
				case 1:
				{
					system("cls");
					cout << "Wpisz ile chcesz wplacic: ";

					cin >> wplata;
					stan_konta += wplata;

					Sleep(60);

					system("cls");

					break;
				}
				case 2:
				{
					system("cls");
					cout << "Wpisz ile chcesz wyplacic: ";

					cin >> wplata;
					stan_konta -= wplata;

					Sleep(60);

					system("cls");

					break;
				}
				case 3:
				{
					system("cls");
					cout << "Wpisz nr konta: ";
					cin >> nr_konta;
					system("cls");
					cout << "Przelew na: " << nr_konta << endl;
					cout << "Wpisz kwote przelewu: ";
					cin >> przelew;
					system("cls");
					cout << "Realizacja przelewu"; Sleep(100); cout << "."; Sleep(100); cout << ".."; system("cls"); cout << "Realizacja przelewu"; Sleep(100); cout << "."; Sleep(100); cout << ".."; system("cls");

					stan_konta -= przelew;
					system("cls");
					break;
				}
				case 4:
				{
					system("cls");
					cout << "Wylogowywanie"; Sleep(100); cout << ".."; Sleep(100); cout << ".."; Sleep(100); cout << "..";
					system("cls");
					cout << "Wylogowywanie"; Sleep(100); cout << ".."; Sleep(100); cout << ".."; Sleep(100); cout << "..";
					system("cls");
					cout << "Wylogowywanie"; Sleep(100); cout << ".."; Sleep(100); cout << ".."; Sleep(100); cout << "..";
					system("cls");
					cout << "Wylogowywanie"; Sleep(100); cout << ".."; Sleep(100); cout << ".."; Sleep(100); cout << "..";
					Sleep(150);
					system("cls");
					break;
				}
				break;
				}



		}
		else 
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_RED);
			cout << "Dostep nie przyznany !" << endl;
			Sleep(1000);
			system("cls");

		}
	}


	

	return 0;
	
}