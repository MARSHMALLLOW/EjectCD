#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main() {
	//Begin the program
	mciSendString("SET CDAudio door open", NULL, 0, NULL); //Eject the CD tray
	cout<<"Check your cd door now!"<<endl;
	getch();
	return 0;	//This program returns ZERO.
}
