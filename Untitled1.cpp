#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void drawline(int n , char symbol)
{
	for (int i = 0 ; i <=n ; i++)
	cout << symbol;	
}
int main()
{
	cout << endl;
	cout << endl;
	cout << endl;
	drawline(79,'=');
	cout << endl;
	cout << "\t\t\t" << "welcome to casino game" << "\t\t"<< endl;
	cout << endl;
	drawline(79,'=');
	Sleep(5000);
	system("cls");
	string name;
	int guess;
	int amount;
	int dice;
	char choice;
	int bettingamount;
	cout << "enter your name" << endl;
	getline(cin , name);
	cout << "welcome " << name << endl;
	cout << "how much amount want you put in the game?" << endl;
	cin >> amount;
	cout << "your amount is : " << amount << endl;
	drawline(79 , '=');
	cout << endl;
	cout << "\t\t\t" << "law :" << endl;
	cout << "\t\t" << "if you win , you get money" << endl;
	cout << "\t\t" << "if you loss , you loss money" << endl;
	cout << endl;
	drawline(79 , '=');
	do
	{
		do
		{
			cout << "how much amount want  put in bet?" << endl;
			cin >> bettingamount;
			if(bettingamount > amount)
			cout << "you cant , this is greater than all of amount" << endl;
		}while(bettingamount > amount);
		do
		{
		cout << "please a number between 0 _ 10" << endl;
		cin >> guess;
		if (guess == 0 || guess >=10)
		cout << "you cant , try again" << endl;	
		}while(guess ==0 || guess >=10);
		dice = rand()% 10 + 1;
		if (dice == guess)
		{
		cout << "good luck , you win" << endl;
		amount = amount + bettingamount * 10;
		cout << "your amount : " << amount << endl;
		}
		else
		{ 
		cout << "bad luck , you loss" << endl;
		amount = amount - bettingamount;
		cout << "your amount is : " << amount << endl;
		}
		if (amount ==0)
		{
		cout << "thanks for playing" << endl;
		break;
		}
		else
		{
		cout << "do want to continue(y/n)?" << endl;
		}
		cin >> choice;
		if (choice == 'n')
		{
			cout << "thanks for playing" << endl;
		}
	}while(choice == 'y');
	system("pause");
	return 0;
}
