#pragma once

//QUEEN piece data - Begin
std::string queenmovedirection;
//char queenmovedirection;
int queenjumpnumbers;
void queenmove(int* xaxisQRed, int* yaxisQRed) {
	printstr(120, 6, "which direction:");
	cursor(137, 6);
	std::cin >> queenmovedirection;
	printstr(120, 7, "How many jumps:");
	cursor(136, 7);
	std::cin >> queenjumpnumbers;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	for (int i = 0; i < queenjumpnumbers; i++) {
		if (queenmovedirection.compare("u") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *yaxisQRed = *yaxisQRed - 5; printstr(*xaxisQRed, *yaxisQRed, "Q "); break;
		}
		if (queenmovedirection.compare("d") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *yaxisQRed = *yaxisQRed + 5; printstr(*xaxisQRed, *yaxisQRed, "Q "); break;
		}
		if (queenmovedirection.compare("r") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *xaxisQRed = *xaxisQRed + 9; printstr(*xaxisQRed, *yaxisQRed, "Q "); break;
		}
		if (queenmovedirection.compare("l") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *xaxisQRed = *xaxisQRed - 9; printstr(*xaxisQRed, *yaxisQRed, "Q "); break;
		}
		if (queenmovedirection.compare("ur") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *yaxisQRed = *yaxisQRed - 5; *xaxisQRed = *xaxisQRed + 9; printstr(*xaxisQRed, *yaxisQRed, "Q ");
		}
		else if (queenmovedirection.compare("ul") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *yaxisQRed = *yaxisQRed - 5; *xaxisQRed = *xaxisQRed - 9; printstr(*xaxisQRed, *yaxisQRed, "Q ");
		}
		else if (queenmovedirection.compare("dr") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *yaxisQRed = *yaxisQRed + 5; *xaxisQRed = *xaxisQRed + 9; printstr(*xaxisQRed, *yaxisQRed, "Q ");
		}
		else if (queenmovedirection.compare("dl") == 0)
		{
			printstr(*xaxisQRed, *yaxisQRed, "  "); *yaxisQRed = *yaxisQRed + 5; *xaxisQRed = *xaxisQRed - 9; printstr(*xaxisQRed, *yaxisQRed, "Q ");
		}
		Sleep(1000);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	getchar();
}
//QUEEN piece data - End







//KING piece data - Begin
//char kingmovedirection;
std::string kingmovedirection;
void kingmove(int *xaxisKRed, int *yaxisKRed) {
	printstr(120, 6, "which direction:");
	cursor(137, 6);
	std::cin >> kingmovedirection;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	if (kingmovedirection.compare("u") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *yaxisKRed = *yaxisKRed - 5; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	if (kingmovedirection.compare("d") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *yaxisKRed = *yaxisKRed + 5; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	if (kingmovedirection.compare("r") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *xaxisKRed = *xaxisKRed + 9; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	if (kingmovedirection.compare("l") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *xaxisKRed = *xaxisKRed - 9; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	if (kingmovedirection.compare("ur") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *yaxisKRed = *yaxisKRed - 5; *xaxisKRed = *xaxisKRed + 9; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	if (kingmovedirection.compare("ul") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *yaxisKRed = *yaxisKRed - 5; *xaxisKRed = *xaxisKRed - 9; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	if (kingmovedirection.compare("dr") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *yaxisKRed = *yaxisKRed + 5; *xaxisKRed = *xaxisKRed + 9; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	if (kingmovedirection.compare("dl") == 0)
	{
		printstr(*xaxisKRed, *yaxisKRed, "  "); *yaxisKRed = *yaxisKRed + 5; *xaxisKRed = *xaxisKRed - 9; printstr(*xaxisKRed, *yaxisKRed, "K ");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}
//KING piece data - End







//Pawn piece data - Begin
int pawnnumber;
void pawnmove(int *xaxisP1Red, int *yaxisP1Red, int *xaxisP2Red, int *yaxisP2Red, int *xaxisP3Red, int *yaxisP3Red, int *xaxisP4Red, int *yaxisP4Red, int *xaxisP5Red, int *yaxisP5Red, int *xaxisP6Red, int *yaxisP6Red, int *xaxisP7Red, int *yaxisP7Red, int *xaxisP8Red, int *yaxisP8Red) {
	printstr(120, 6, "which pawn:");
	cursor(132, 6);
	//scanf_s("%d", &pawnnumber, 2);
	std::cin >> pawnnumber;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	switch (pawnnumber)
	{
		case 1: printstr(*xaxisP1Red, *yaxisP1Red, "  "); *yaxisP1Red = *yaxisP1Red + 5; printstr(*xaxisP1Red, *yaxisP1Red, "P1"); break;
		case 2: printstr(*xaxisP2Red, *yaxisP2Red, "  "); *yaxisP2Red = *yaxisP2Red + 5; printstr(*xaxisP2Red, *yaxisP2Red, "P2"); break;
		case 3: printstr(*xaxisP3Red, *yaxisP3Red, "  "); *yaxisP3Red = *yaxisP3Red + 5; printstr(*xaxisP3Red, *yaxisP3Red, "P3"); break;
		case 4: printstr(*xaxisP4Red, *yaxisP4Red, "  "); *yaxisP4Red = *yaxisP4Red + 5; printstr(*xaxisP4Red, *yaxisP4Red, "P4"); break;
		case 5: printstr(*xaxisP5Red, *yaxisP5Red, "  "); *yaxisP5Red = *yaxisP5Red + 5; printstr(*xaxisP5Red, *yaxisP5Red, "P5"); break;
		case 6: printstr(*xaxisP6Red, *yaxisP6Red, "  "); *yaxisP6Red = *yaxisP6Red + 5; printstr(*xaxisP6Red, *yaxisP6Red, "P6"); break;
		case 7: printstr(*xaxisP7Red, *yaxisP7Red, "  "); *yaxisP7Red = *yaxisP7Red + 5; printstr(*xaxisP7Red, *yaxisP7Red, "P7"); break;
		case 8: printstr(*xaxisP8Red, *yaxisP8Red, "  "); *yaxisP8Red = *yaxisP8Red + 5; printstr(*xaxisP8Red, *yaxisP8Red, "P8"); break;
		default: break;
	}
	getchar();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}
//Pawn piece data - End






//Bishop piece data - Begin
//char bishopmovedirection[2];                   //ur(up,right), ul(up,left), dr(down,right), dl(down,left)
std::string bishopmovedirection;                   //ur(up,right), ul(up,left), dr(down,right), dl(down,left)
int bishopnumber;
int bishopjumpnumbers;
//char bishopselected[2];
std::string bishopselected;
int xaxisBRed, yaxisBRed;
void bishopmove(int *xaxisB1Red, int *yaxisB1Red, int* xaxisB2Red, int* yaxisB2Red) {
	printstr(120, 6, "bishop number:");
	cursor(135, 6);
	std::cin >> bishopnumber;                 //the user input of an integer does not need the third parameter
	
	if (bishopnumber == 1)
	{
		xaxisBRed = *xaxisB1Red; yaxisBRed = *yaxisB1Red; bishopselected.clear(); bishopselected.insert(0,"B1");//strcpy(bishopselected, "B1");
	}
	else if (bishopnumber == 2)
	{
		xaxisBRed = *xaxisB2Red; yaxisBRed = *yaxisB2Red; bishopselected.clear(); bishopselected.insert(0, "B2");
	}

	printstr(120, 7, "which direction:");
	cursor(137, 7);
	std::cin >> bishopmovedirection;                    //a use input of a string needs the third parameter of how many characters

	printstr(120, 8, "How many jumps:");
	cursor(136, 8);
	std::cin >> bishopjumpnumbers;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);

	for (int i = 0; i < bishopjumpnumbers; i++) {
		//if (strcpy_s(bishopmovedirection, 2, "ur") == 0)
		if (bishopmovedirection.compare("ur") == 0)
		{
			printstr(xaxisBRed, yaxisBRed, "  "); yaxisBRed = yaxisBRed - 5; xaxisBRed = xaxisBRed + 9; printcppstr(xaxisBRed, yaxisBRed, bishopselected);
		}
		else if (bishopmovedirection.compare("ul") == 0)
		{
			printstr(xaxisBRed, yaxisBRed, "  "); yaxisBRed = yaxisBRed - 5; xaxisBRed = xaxisBRed - 9; printcppstr(xaxisBRed, yaxisBRed, bishopselected);
		}
		else if (bishopmovedirection.compare("dr") == 0)
		{
			printstr(xaxisBRed, yaxisBRed, "  "); yaxisBRed = yaxisBRed + 5; xaxisBRed = xaxisBRed + 9; printcppstr(xaxisBRed, yaxisBRed, bishopselected);
		}
		else if (bishopmovedirection.compare("dl") == 0)
		{
			printstr(xaxisBRed, yaxisBRed, "  "); yaxisBRed = yaxisBRed + 5; xaxisBRed = xaxisBRed - 9; printcppstr(xaxisBRed, yaxisBRed, bishopselected);
		}
		else
		{

		}
		Sleep(1000);
	}
	
	
	if (bishopnumber == 1)
	{
		*xaxisB1Red = xaxisBRed; *yaxisB1Red = yaxisBRed;
	}
	else if (bishopnumber == 2)
	{
		*xaxisB2Red = xaxisBRed; *yaxisB2Red = yaxisBRed;
	}


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	getchar();
}
//Bishop piece data - End






//ROOK piece data - Begin
char rookmovedirection;
int rookjumpnumbers;
int rooknumber;
int xaxisRRed; int yaxisRRed;
std::string rookselected;
void rookmove(int* xaxisR1Red, int* yaxisR1Red, int* xaxisR2Red, int* yaxisR2Red) {
	printstr(120, 6, "rook number:");
	cursor(135, 6);
	std::cin >> rooknumber;                 //the user input of an integer does not need the third parameter

	switch (rooknumber)
	{
		case 1: xaxisRRed = *xaxisR1Red; yaxisRRed = *yaxisR1Red; rookselected.clear(); rookselected.insert(0, "R1"); break;
		case 2: xaxisRRed = *xaxisR2Red; yaxisRRed = *yaxisR2Red; rookselected.clear(); rookselected.insert(0, "R2"); break;
		default: break;
	}


	printstr(120, 7, "which direction:");
	cursor(137, 7);
	std::cin >> rookmovedirection;
	printstr(120, 8, "How many jumps:");
	cursor(136, 8);
	std::cin >> rookjumpnumbers;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	for (int i = 0; i < rookjumpnumbers; i++) {
		switch (rookmovedirection)
		{
		case 'u': printstr(xaxisRRed, yaxisRRed, "  "); yaxisRRed = yaxisRRed - 5; printcppstr(xaxisRRed, yaxisRRed, rookselected); break;
		case 'd': printstr(xaxisRRed, yaxisRRed, "  "); yaxisRRed = yaxisRRed + 5; printcppstr(xaxisRRed, yaxisRRed, rookselected); break;
		case 'r': printstr(xaxisRRed, yaxisRRed, "  "); xaxisRRed = xaxisRRed + 9; printcppstr(xaxisRRed, yaxisRRed, rookselected); break;
		case 'l': printstr(xaxisRRed, yaxisRRed, "  "); xaxisRRed = xaxisRRed - 9; printcppstr(xaxisRRed, yaxisRRed, rookselected); break;
		default: break;
		}
		Sleep(1000);
	}

	switch (rooknumber)
	{
	case 1: *xaxisR1Red = xaxisRRed; *yaxisR1Red = yaxisRRed; break;
	case 2: *xaxisR2Red = xaxisRRed; *yaxisR2Red = yaxisRRed; break;
	default: break;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	getchar();
}
//ROOK piece data - End

















//KNIGHT piece data - Begin
std::string knightmovedirection;                   //ur(up,right), ul(up,left), dr(down,right), dl(down,left)
int knightnumber;
int knightjumpnumbers;
std::string knightselected;
int xaxisNRed, yaxisNRed;
void knightmove(int* xaxisN1Red, int* yaxisN1Red, int* xaxisN2Red, int* yaxisN2Red) {
	printstr(120, 6, "knight number:");
	cursor(135, 6);
	std::cin >> knightnumber;                 //the user input of an integer does not need the third parameter

	switch (knightnumber)
	{
	case 1: xaxisNRed = *xaxisN1Red; yaxisNRed = *yaxisN1Red; knightselected.clear(); knightselected.insert(0, "N1"); break;
	case 2: xaxisNRed = *xaxisN2Red; yaxisNRed = *yaxisN2Red; knightselected.clear(); knightselected.insert(0, "N2"); break;
	default: break;
	}


	printstr(120, 7, "which direction:");
	cursor(137, 7);
	std::cin >> knightmovedirection;                    //a use input of a string needs the third parameter of how many characters

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);

	if (knightmovedirection.compare("uur") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed - 10; xaxisNRed = xaxisNRed + 9; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else if (knightmovedirection.compare("uul") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed - 10; xaxisNRed = xaxisNRed - 9; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else if (knightmovedirection.compare("ddr") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed + 10; xaxisNRed = xaxisNRed + 9; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else if (knightmovedirection.compare("ddl") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed + 10; xaxisNRed = xaxisNRed - 9; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else if (knightmovedirection.compare("urr") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed - 5; xaxisNRed = xaxisNRed + 18; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else if (knightmovedirection.compare("ull") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed - 5; xaxisNRed = xaxisNRed - 18; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else if (knightmovedirection.compare("drr") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed + 5; xaxisNRed = xaxisNRed + 18; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else if (knightmovedirection.compare("dll") == 0)
	{
		printstr(xaxisNRed, yaxisNRed, "  "); yaxisNRed = yaxisNRed + 5; xaxisNRed = xaxisNRed - 18; printcppstr(xaxisNRed, yaxisNRed, knightselected);
	}
	else
	{
	}

	switch (knightnumber)
	{
	case 1: *xaxisN1Red = xaxisNRed; *yaxisN1Red = yaxisNRed; break;
	case 2: *xaxisN2Red = xaxisNRed; *yaxisN2Red = yaxisNRed; break;
	default: break;
	}


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	getchar();
}
//KNIGHT piece data - End