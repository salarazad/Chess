
#include <iostream>
#include <Windows.h>
#include "myheader.h"
#include <stdio.h>
#include <conio.h>
#include "boardlayout.h"
#include "warriors.h"
#include "movements.h"
#include "string.h"


int main()
{
	//printstr(55, 1, "Chess Game in C++");
	char title[] = "Chess Game in C++";
	printstr(55, 1, title);

	//warriors locations on the map
	int xaxisP1Red = 28; int yaxisP1Red = 12; int xaxisP2Red = 37; int yaxisP2Red = 12; int xaxisP3Red = 46; int yaxisP3Red = 12; int xaxisP4Red = 55; int yaxisP4Red = 12; int xaxisP5Red = 64; int yaxisP5Red = 12; int xaxisP6Red = 73; int yaxisP6Red = 12; int xaxisP7Red = 82; int yaxisP7Red = 12; int xaxisP8Red = 91; int yaxisP8Red = 12;
	int xaxisR1Red = 28; int yaxisR1Red = 7; int xaxisN1Red = 37; int yaxisN1Red = 7; int xaxisB1Red = 46; int yaxisB1Red = 7; int xaxisKRed = 55; int yaxisKRed = 7; int xaxisQRed = 64; int yaxisQRed = 7; int xaxisB2Red = 73; int yaxisB2Red = 7; int xaxisN2Red = 82; int yaxisN2Red = 7; int xaxisR2Red = 91; int yaxisR2Red = 7;
	int xaxisP1Green = 28; int yaxisP1Green = 37; int xaxisP2Green = 37; int yaxisP2Green = 37; int xaxisP3Green = 46; int yaxisP3Green = 37; int xaxisP4Green = 55; int yaxisP4Green = 37; int xaxisP5Green = 64; int yaxisP5Green = 37; int xaxisP6Green = 73; int yaxisP6Green = 37; int xaxisP7Green = 82; int yaxisP7Green = 37; int xaxisP8Green = 91; int yaxisP8Green = 37;
	int xaxisR1Green = 28; int yaxisR1Green = 42; int xaxisN1Green = 37; int yaxisN1Green = 42; int xaxisB1Green = 46; int yaxisB1Green = 42; int xaxisKGreen = 55; int yaxisKGreen = 42; int xaxisQGreen = 64; int yaxisQGreen = 42; int xaxisB2Green = 73; int yaxisB2Green = 42; int xaxisN2Green = 82; int yaxisN2Green = 42; int xaxisR2Green = 91; int yaxisR2Green = 42;


	//boardlayout();
	boardlayoutnew();
	warriors();
	names();


	char piece;
	char move;
	int pawnnumber;
	std::string playagain;
	//char playagain;
	
	do {
		
		//user input - which piece to move
		printstr(120, 5, "which piece to move:");
		cursor(141, 5);
		std::cin >> piece;
		//piece = getchar();
		//getchar();

		//function for selecting the piece
		pieceselection(piece);

	
		if (piece == 'p') {
			pawnmove(&xaxisP1Red, &yaxisP1Red, &xaxisP2Red, &yaxisP2Red, &xaxisP3Red, &yaxisP3Red, &xaxisP4Red, &yaxisP4Red, &xaxisP5Red, &yaxisP5Red, &xaxisP6Red, &yaxisP6Red, &xaxisP7Red, &yaxisP7Red, &xaxisP8Red, &yaxisP8Red);
		}
		if (piece == 'k') {
			kingmove(&xaxisKRed, &yaxisKRed);
		}
		if (piece == 'q') {
			queenmove(&xaxisQRed, &yaxisQRed);
		}
		if (piece == 'b') {
			bishopmove(&xaxisB1Red, &yaxisB1Red, &xaxisB2Red, &yaxisB2Red);
		}
		if (piece == 'r') {
			rookmove(&xaxisR1Red, &yaxisR1Red, &xaxisR2Red, &yaxisR2Red);
		}
		if (piece == 'n') {
			knightmove(&xaxisN1Red, &yaxisN1Red, &xaxisN2Red, &yaxisN2Red);
		}


		//clear the space on the right before starting over
		//with high number (e.g. 70), the screen on the right ends, and will start printing from the left side
		clear(120, 2, 40); clear(120, 6, 40); clear(120, 7, 40); clear(120, 8, 40); clear(120, 9, 40); clear(120, 10, 40);
		clear(120, 14, 40); clear(120, 15, 40); clear(120, 16, 40); clear(120, 17, 40); clear(120, 18, 40); clear(120, 19, 40); clear(120, 20, 40); clear(120, 21, 40); clear(120, 22, 40);


		printstr(120, 15, "Another move: ");
		cursor(134, 15);
		std::cin >> playagain;
		//playagain = getchar();
		//getchar();
	//} while (playagain == 'y');
	} while (playagain.compare("y") == 0 || playagain.compare("yes") == 0 || playagain.compare("yup") == 0 || playagain.compare("yep") == 0 || playagain.compare("ya") == 0);


	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}