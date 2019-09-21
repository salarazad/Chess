
#include <iostream>
#include <Windows.h>
#include "myheader.h"
#include <stdio.h>
#include <conio.h>
#include "boardlayout.h"
#include "warriors.h"


int main()
{
	//printstr(55, 1, "Chess Game in C++");
	char title[] = "Chess Game in C++";
	printstr(55, 1, title);
	//std::cout << "Hello World!\n";

	boardlayout();
	warriors();
	names();




}