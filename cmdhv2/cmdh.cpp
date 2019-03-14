#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	ofstream plik;
	string y="";
	if(argc>1)
		y = argv[1];
	if (y == "ABGHJYJYwfeJIU482Y@#&$")
	{
		system("prompt $T $b $p$g");
		system("title Haker Commend line");
		system("color 03");
		system("echo on");
		system("cls");
		char x = '0';
		for (int i = 0; i < 92; i++)
			cin >> x;
		getchar();
		getchar();
		plik.rdbuf()->pubsetbuf(0, 0);
		plik.open("cmdh.log", ios::out | ios::app);
		plik << endl;
		while (x = getchar())
		{
			if (x == 'ÿ')
				break;
			plik << x;
			cout << x;
		}
		plik << endl;
		plik.close();
	}
	else
	{
		/*@echo off
		prompt $T $b $p$g
		title Haker Commend line
		color 03
		cmd | cmdh.exe
		pause*/
		system("prompt $T $b $p$g");
		system("title Haker Commend line");
		system("color 03");
		system("cmd | cmdh.exe ABGHJYJYwfeJIU482Y@#^&$&");
	}

	return 0;
}
