#include <windows.h>
#include <iostream>
#include <thread>
#include <conio.h>
#include<fstream>
using namespace std;
#include "Header.h"

int main()
{
	cout << " " << endl;
	cout << "\tFORMULA 1" << endl;
	cout << "=============================" << endl;
	Sleep(3000);
	system("cls");
	cout << " " << endl;
	cout << "\tM A I N   M E N U" << endl;
	cout << "\t1.START GAME" << endl;
	cout << "\t2.EXIT." << endl;
	int choise;
	cin >> choise;
	switch (choise)
	{
	case 1:
	{
		system("cls");
		startGame(); 
	}
	case 2:
	{
		return 0;
	}
	}
}




