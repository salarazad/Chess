
void boardlayout() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
	int o1;
	int p1;
	int xloop1 = 0;
	int yloop1 = 0;
	for (o1 = 25; o1 < 88; o1++) {
		for (p1 = 5; p1 < 40; p1++) {
			printchar(o1, p1, '*');
			yloop1++;
			if (yloop1 == 5) {
				p1 = p1 + 5;
				yloop1 = 0;
			}
		}
		xloop1++;
		if (xloop1 == 9) {
			o1 = o1 + 9;
			xloop1 = 0;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);



	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
	int o2;
	int p2;
	int xloop2 = 0;
	int yloop2 = 0;
	for (o2 = 34; o2 < 97; o2++) {
		for (p2 = 10; p2 < 45; p2++) {
			printchar(o2, p2, '*');
			yloop2++;
			if (yloop2 == 5) {
				p2 = p2 + 5;
				yloop2 = 0;
			}
		}
		xloop2++;
		if (xloop2 == 9) {
			o2 = o2 + 9;
			xloop2 = 0;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	int o3;
	int p3;
	int xloop3 = 0;
	int yloop3 = 0;
	for (o3 = 34; o3 < 97; o3++) {
		for (p3 = 5; p3 < 40; p3++) {
			printchar(o3, p3, '*');
			yloop3++;
			if (yloop3 == 5) {
				p3 = p3 + 5;
				yloop3 = 0;
			}
		}
		xloop3++;
		if (xloop3 == 9) {
			o3 = o3 + 9;
			xloop3 = 0;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	int o4;
	int p4;
	int xloop4 = 0;
	int yloop4 = 0;
	for (o4 = 25; o4 < 88; o4++) {
		for (p4 = 10; p4 < 45; p4++) {
			printchar(o4, p4, '*');
			yloop4++;
			if (yloop4 == 5) {
				p4 = p4 + 5;
				yloop4 = 0;
			}
		}
		xloop4++;
		if (xloop4 == 9) {
			o4 = o4 + 9;
			xloop4 = 0;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);





	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	int m1, n1;
	for (m1 = 22; m1 < 100; m1++) {
		for (n1 = 3; n1 < 46; n1++) {
			if (m1 == 22 || m1 == 99) {
				if (n1 > 3) {
					printchar(m1, n1, '|');
				}
			}
			if (n1 == 3 || n1 == 45) {
				if (m1 > 22 && m1 < 99) {
					printchar(m1, n1, '_');
				}
			}
			
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	int m2, n2;
	for (m2 = 20; m2 < 102; m2++) {
		for (n2 = 2; n2 < 47; n2++) {
			if (m2 == 20 || m2 == 101) {
				if (n2 > 2) {
					printchar(m2, n2, '|');
				}
			}
			if (n2 == 2 || n2 == 46) {
				if (m2 > 20 && m2 < 101) {
					printchar(m2, n2, '_');
				}
			}

		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);

}