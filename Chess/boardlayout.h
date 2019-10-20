
//void boardlayout() {
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
//	int o1;
//	int p1;
//	int xloop1 = 0;
//	int yloop1 = 0;
//	for (o1 = 25; o1 < 88; o1++) {
//		for (p1 = 5; p1 < 40; p1++) {
//		//for (p1 = 5; p1 < 40; p1=p1+5) {
//			printchar(o1, p1, '*');
//			yloop1++;
//			if (yloop1 == 5) {
//				p1 = p1 + 5;
//				yloop1 = 0;
//			}
//		}
//		xloop1++;
//		if (xloop1 == 9) {
//			o1 = o1 + 9;
//			xloop1 = 0;
//		}
//	}
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
//
//
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
//	int o2;
//	int p2;
//	int xloop2 = 0;
//	int yloop2 = 0;
//	for (o2 = 34; o2 < 97; o2++) {
//		for (p2 = 10; p2 < 45; p2++) {
//		//for (p2 = 10; p2 < 45; p2=p2+5) {
//			printchar(o2, p2, '*');
//			yloop2++;
//			if (yloop2 == 5) {
//				p2 = p2 + 5;
//				yloop2 = 0;
//			}
//		}
//		xloop2++;
//		if (xloop2 == 9) {
//			o2 = o2 + 9;
//			xloop2 = 0;
//		}
//	}
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
//
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
//	int o3;
//	int p3;
//	int xloop3 = 0;
//	int yloop3 = 0;
//	for (o3 = 34; o3 < 97; o3++) {
//		for (p3 = 5; p3 < 40; p3++) {
//		//for (p3 = 5; p3 < 40; p3=p3+5) {
//			printchar(o3, p3, '*');
//			yloop3++;
//			if (yloop3 == 5) {
//				p3 = p3 + 5;
//				yloop3 = 0;
//			}
//		}
//		xloop3++;
//		if (xloop3 == 9) {
//			o3 = o3 + 9;
//			xloop3 = 0;
//		}
//	}
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
//
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
//	int o4;
//	int p4;
//	int xloop4 = 0;
//	int yloop4 = 0;
//	for (o4 = 25; o4 < 88; o4++) {
//		for (p4 = 10; p4 < 45; p4++) {
//		//for (p4 = 10; p4 < 45; p4+5) {
//			printchar(o4, p4, '*');
//			yloop4++;
//			if (yloop4 == 5) {
//				p4 = p4 + 5;
//				yloop4 = 0;
//			}
//		}
//		xloop4++;
//		if (xloop4 == 9) {
//			o4 = o4 + 9;
//			xloop4 = 0;
//		}
//	}
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
//
//
//
//
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
//	int m1, n1;
//	for (m1 = 22; m1 < 100; m1++) {
//		for (n1 = 3; n1 < 46; n1++) {
//			if (m1 == 22 || m1 == 99) {
//				if (n1 > 3) {
//					printchar(m1, n1, '|');
//				}
//			}
//			if (n1 == 3 || n1 == 45) {
//				if (m1 > 22 && m1 < 99) {
//					printchar(m1, n1, '_');
//				}
//			}
//			
//		}
//	}
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
//	int m2, n2;
//	for (m2 = 20; m2 < 102; m2++) {
//		for (n2 = 2; n2 < 47; n2++) {
//			if (m2 == 20 || m2 == 101) {
//				if (n2 > 2) {
//					printchar(m2, n2, '|');
//				}
//			}
//			if (n2 == 2 || n2 == 46) {
//				if (m2 > 20 && m2 < 101) {
//					printchar(m2, n2, '_');
//				}
//			}
//
//		}
//	}
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
//
//}



























































void boardlayoutnew() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
	int o1;
	int p1;
	int xloop1 = 0;
	int yloop1 = 0;
	for (o1 = 25; o1 < 88; o1++) {
		for (p1 = 5; p1 < 40; p1++) {
		//for (p1 = 5; p1 < 40; p1=p1+10) {
			if (p1 == 5 || p1 == 9 || p1 == 15 || p1 == 19 || p1 == 25 || p1 == 29 || p1 == 35 || p1 == 39) {
				printchar(o1, p1, '*');
				//yloop1++;
				//if (yloop1 == 5) {
				//	p1 = p1 + 5;
				//	yloop1 = 0;
				//}
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
	int o5;
	int p5;
	int xloop5 = 0;
	int yloop5 = 0;
	for (o5 = 25; o5 < 88; o5++) {
		if (o5 == 25 || o5 == 33 || o5 == 43 || o5 == 51 || o5 == 61 || o5 == 69 || o5 == 79 || o5 == 87) {
		for (p5 = 5; p5 < 40; p5++) {
				printchar(o5, p5, '*');
				yloop5++;
				if (yloop5 == 5) {
					p5 = p5 + 5;
					yloop5 = 0;
				}
			}
		}
		xloop5++;
		if (xloop5 == 9) {
			o5 = o5 + 9;
			xloop5 = 0;
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
		//for (p2 = 10; p2 < 45; p2=p2+10) {
			if (p2 == 10 || p2 == 14 || p2 == 20 || p2 == 24 || p2 == 30 || p2 == 34 || p2 == 40 || p2 == 44) {
				printchar(o2, p2, '*');
				//yloop2++;
				//if (yloop2 == 5) {
				//	p2 = p2 + 5;
				//	yloop2 = 0;
				//}
			}
		}
		xloop2++;
		if (xloop2 == 9) {
			o2 = o2 + 9;
			xloop2 = 0;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
	int o6;
	int p6;
	int xloop6 = 0;
	int yloop6 = 0;
	for (o6 = 34; o6 < 97; o6++) {
		if (o6 == 34 || o6 == 42 || o6 == 52 || o6 == 60 || o6 == 70 || o6 == 78 || o6 == 88 || o6 == 96) {
			for (p6 = 10; p6 < 45; p6++) {
				printchar(o6, p6, '*');
				yloop6++;
				if (yloop6 == 5) {
					p6 = p6 + 5;
					yloop6 = 0;
				}
			}
		}
		xloop6++;
		if (xloop6 == 9) {
			o6 = o6 + 9;
			xloop6 = 0;
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
		//for (p3 = 5; p3 < 40; p3=p3+10) {
			if (p3 == 5 || p3 == 9 || p3 == 15 || p3 == 19 || p3 == 25 || p3 == 29 || p3 == 35 || p3 == 39) {
				printchar(o3, p3, '*');
				//yloop3++;
				//if (yloop3 == 5) {
				//	p3 = p3 + 5;
				//	yloop3 = 0;
				//}
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
	int o7;
	int p7;
	int xloop7 = 0;
	int yloop7 = 0;
	for (o7 = 34; o7 < 97; o7++) {
		if (o7 == 34 || o7 == 42 || o7 == 52 || o7 == 60 || o7 == 70 || o7 == 78 || o7 == 88 || o7 == 96) {
			for (p7 = 5; p7 < 40; p7++) {
				printchar(o7, p7, '*');
				yloop7++;
				if (yloop7 == 5) {
					p7 = p7 + 5;
					yloop7 = 0;
				}
			}
		}
		xloop6++;
		if (xloop6 == 9) {
			o6 = o6 + 9;
			xloop6 = 0;
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
		//for (p4 = 10; p4 < 45; p4=p4+10) {
			if (p4 == 10 || p4 == 14 || p4 == 20 || p4 == 24 || p4 == 30 || p4 == 34 || p4 == 40 || p4 == 44) {
				printchar(o4, p4, '*');
				//yloop4++;
				//if (yloop4 == 5) {
				//	p4 = p4 + 5;
				//	yloop4 = 0;
				//}
			}
		}
		xloop4++;
		if (xloop4 == 9) {
			o4 = o4 + 9;
			xloop4 = 0;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	int o8;
	int p8;
	int xloop8 = 0;
	int yloop8 = 0;
	for (o8 = 25; o8 < 88; o8++) {
		if (o8 == 25 || o8 == 33 || o8 == 43 || o8 == 51 || o8 == 61 || o8 == 69 || o8 == 79 || o8 == 87) {
			for (p8 = 10; p8 < 45; p8++) {
				printchar(o8, p8, '*');
				yloop8++;
				if (yloop8 == 5) {
					p8 = p8 + 5;
					yloop8 = 0;
				}
			}
		}
		xloop6++;
		if (xloop6 == 9) {
			o6 = o6 + 9;
			xloop6 = 0;
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








