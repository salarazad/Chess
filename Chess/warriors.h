#pragma once

void warriors() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	printstr(28, 12, "P1");
	printstr(37, 12, "P2");
	printstr(46, 12, "P3");
	printstr(55, 12, "P4");
	printstr(64, 12, "P5");
	printstr(73, 12, "P6");
	printstr(82, 12, "P7");
	printstr(91, 12, "P8");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	printstr(28, 7, "R1");
	printstr(37, 7, "N1");
	printstr(46, 7, "B1");
	printstr(55, 7, "K");
	printstr(64, 7, "Q");
	printstr(73, 7, "B2");
	printstr(82, 7, "N2");
	printstr(91, 7, "R2");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	printstr(28, 37, "P1");
	printstr(37, 37, "P2");
	printstr(46, 37, "P3");
	printstr(55, 37, "P4");
	printstr(64, 37, "P5");
	printstr(73, 37, "P6");
	printstr(82, 37, "P7");
	printstr(91, 37, "P8");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	printstr(28, 42, "R1");
	printstr(37, 42, "N1");
	printstr(46, 42, "B1");
	printstr(55, 42, "K");
	printstr(64, 42, "Q");
	printstr(73, 42, "B2");
	printstr(82, 42, "N2");
	printstr(91, 42, "R2");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}


void names() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	
	printstr(5, 11, "K: King");
	printstr(5, 12, "Q: Queen");
	printstr(5, 13, "R: Rook");
	printstr(5, 14, "B: Bishop");
	printstr(5, 15, "N: Knight");
	printstr(5, 16, "P: Pawn");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}



void pieceselection(char piece) {
	switch (piece)
	{
		case 'k': printstr(125, 2, "King selected"); printstr(120, 14, "moves:"); printstr(120, 15, "u: up"); printstr(120, 16, "d: down"); printstr(120, 17, "r: right"); printstr(120, 18, "l: left"); printstr(120, 19, "ur: up,right"); printstr(120, 20, "ul: up,left"); printstr(120, 21, "dr: down,right"); printstr(120, 22, "dl: down,left"); break;
		case 'q': printstr(125, 2, "Queen selected"); printstr(120, 14, "moves:"); printstr(120, 15, "u: up"); printstr(120, 16, "d: down"); printstr(120, 17, "r: right"); printstr(120, 18, "l: left"); printstr(120, 19, "ur: up,right"); printstr(120, 20, "ul: up,left"); printstr(120, 21, "dr: down,right"); printstr(120, 22, "dl: down,left"); break;
		case 'r': printstr(125, 2, "Rook selected"); printstr(120, 14, "moves:"); printstr(120, 15, "u: up"); printstr(120, 16, "d: down"); printstr(120, 17, "r: right"); printstr(120, 18, "l: left"); break;
		case 'b': printstr(125, 2, "Bishop selected"); printstr(120,14,"moves:"); printstr(120, 15, "ur: up,right"); printstr(120, 16, "ul: up,left"); printstr(120, 17, "dr: down,right"); printstr(120, 18, "dl: down,left"); break;
		case 'n': printstr(125, 2, "Knight selected"); printstr(120, 14, "moves:"); printstr(120, 15, "uur: up up right"); printstr(120, 16, "uul: up up left"); printstr(120, 17, "ddr: down down right"); printstr(120, 18, "ddl: down down left"); printstr(120, 19, "urr: up right right"); printstr(120, 20, "ull: up left left"); printstr(120, 21, "drr: down right right"); printstr(120, 22, "dll: down left left"); break;
		case 'p': printstr(125, 2, "Pawn selected"); printstr(120, 14, "moves:"); printstr(120, 15, "d: down"); break;
		default: break;
	}
}



