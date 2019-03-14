#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	ofstream plik;
	string y = "";
	if (argc > 1)
		y = argv[1];
	if (y == "ABGHJYJYwfeJIU482Y@#&$")
	{
		system("prompt $T $b $p$g");
		system("title Haker Commend line");
		system("color 03");
		system("echo on");
		system("cls");
		char x = '0';
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
		string x;

		while (getline(cin, x))
		{
			if(x=="")
				continue;
			ofstream plik;
			system("cd>>cmdh.log");
			plik.rdbuf()->pubsetbuf(0, 0);
			plik.open("cmdh.log", ios::out | ios::app);
			plik << x << endl;
			plik.close();
			if (x == "exit")
				break;
			system((x + " | cmdh.exe ABGHJYJYwfeJIU482Y@#^&$&").c_str());
		}
	}

	return 0;
}
