#include"Chuyen_nen_vao_Game.h"

 void Loading_funtion()
{
	if (sound_on) PlaySound(TEXT("Nhac-intro-15s-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
	SetColor(15, 0);
	char c;
	gotoXY(10, 14); printf("%c", 218);
	for (int i = 0; i < 100; i++)
		printf("%c", 196);
	printf("%c", 191);
	gotoXY(10, 15); printf("%c", 179);
	gotoXY(10, 16); printf("%c", 179);
	gotoXY(10, 17); printf("%c", 179);
	gotoXY(10, 18); printf("%c", 192);
	for (int i = 0; i < 100; i++)
		printf("%c", 196);
	printf("%c", 217);
	gotoXY(111, 15); printf("%c", 179);
	gotoXY(111, 16); printf("%c", 179);
	gotoXY(111, 17); printf("%c", 179);
	int speed = 50;
	SetColor(15, 0);
	gotoXY(57, 13); cout << "Loading";
	gotoXY(60, 19); cout << " %";
	for (int i = 0; i < 100; i++)
	{
		SetColor(8, 8);
		gotoXY(11 + i, 15); cout << "i";
		gotoXY(11 + i, 16); cout << "i";
		gotoXY(11 + i, 17); cout << "i";
		SetColor(15, 0);
		gotoXY(58, 19); cout << i + 1;
		Sleep(speed);
		if (i == 50) speed = 25;
		if (i == 80) speed = 10;
	}
	for (int i = 0; i <= 59; i++)
	{
		SetColor(12, 12); gotoXY(i, 0); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 0); cout << "x";
		SetColor(12, 12); gotoXY(i, 1); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 1); cout << "x";
		SetColor(12, 12); gotoXY(i, 2); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 2); cout << "x";
		SetColor(12, 12); gotoXY(i, 3); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 3); cout << "x";
		SetColor(12, 12); gotoXY(i, 4); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 4); cout << "x";
		SetColor(12, 12); gotoXY(i, 5); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 5); cout << "x";
		SetColor(12, 12); gotoXY(i, 6); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 6); cout << "x";
		SetColor(12, 12); gotoXY(i, 7); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 7); cout << "x";
		SetColor(12, 12); gotoXY(i, 8); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 8); cout << "x";
		SetColor(12, 12); gotoXY(i, 9); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 9); cout << "x";
		SetColor(12, 12); gotoXY(i, 10); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 10); cout << "x";
		SetColor(12, 12); gotoXY(i, 11); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 11); cout << "x";
		SetColor(12, 12); gotoXY(i, 12); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 12); cout << "x";
		SetColor(12, 12); gotoXY(i, 13); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 13); cout << "x";
		SetColor(12, 12); gotoXY(i, 14); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 14); cout << "x";
		SetColor(12, 12); gotoXY(i, 15); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 15); cout << "x";
		SetColor(12, 12); gotoXY(i, 16); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 16); cout << "x";
		SetColor(12, 12); gotoXY(i, 17); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 17); cout << "x";
		SetColor(12, 12); gotoXY(i, 18); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 18); cout << "x";
		SetColor(12, 12); gotoXY(i, 19); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 19); cout << "x";
		SetColor(12, 12); gotoXY(i, 20); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 20); cout << "x";
		SetColor(12, 12); gotoXY(i, 21); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 21); cout << "x";
		SetColor(12, 12); gotoXY(i, 22); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 22); cout << "x";
		SetColor(12, 12); gotoXY(i, 23); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 23); cout << "x";
		SetColor(12, 12); gotoXY(i, 24); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 24); cout << "x";
		SetColor(12, 12); gotoXY(i, 25); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 25); cout << "x";
		SetColor(12, 12); gotoXY(i, 26); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 26); cout << "x";
		SetColor(12, 12); gotoXY(i, 27); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 27); cout << "x";
		SetColor(12, 12); gotoXY(i, 28); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 28); cout << "x";
		SetColor(12, 12); gotoXY(i, 29); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 29); cout << "x";
		SetColor(12, 12); gotoXY(i, 30); cout << "x"; SetColor(9, 9); gotoXY(118 - i, 30); cout << "x";
	}
}

 void Chuyen_nen_vao_game()
{
	Loading_funtion();
	SetColor(15, 15);
	system("cls");
	SetColor(12, 12);
	for (int i = 0; i < 7; i++)
	{
		gotoXY(49 + i, 10 + i); cout << "xxx";
	}
	for (int i = 0; i < 7; i++)
	{
		gotoXY(64 - i, 10 + i); cout << "xxx";
	}
	SetColor(9, 9);
	gotoXY(74, 13); cout << "xx";
	gotoXY(74, 14); cout << "xx";
	for (int i = 0; i < 6; i++)
	{
		gotoXY(67 + i, 13); cout << "xxx";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoXY(67, 14 + i); cout << "xx";
	}
	for (int i = 0; i < 9; i++)
	{
		gotoXY(67 + i, 16); cout << "x";
	}
	for (int i = 0; i < 3; i++)
	{
		gotoXY(74, 17 + i); cout << "xx";
	}
	for (int i = 0; i < 9; i++)
	{
		gotoXY(67 + i, 19); cout << "x";
	}
	gotoXY(67, 18); cout << "xx";
	SetColor(12, 12);
	int j = 0;
	for (int i = 0; i < 20; i = i + 2)
	{
		gotoXY(85 - i, j); cout << "xx";
		j++;
	}
	SetColor(9, 9);
	j = 20;
	for (int i = 0; i < 20; i = i + 2)
	{
		gotoXY(65 - i, j); cout << "xx";
		j++;
	}

	int count = 0;
	int color = 0;
	for (int h = 0; h <= 98; h++)
	{
		if (h == 14 || h == 28 || h == 42 || h == 56 || h == 70 || h == 84 || h == 98) color = 0;
		SetColor(color, color);
		//Vẽ đường chéo chính
		j = 9;
		for (int i = 0; i <= 10; i++)
		{
			gotoXY(10 + i * 2, j);
			printf("x");
			j++;
		}
		j = 9;
		for (int i = 0; i <= 10; i++)
		{
			gotoXY(11 + i * 2, j);
			j++;
			printf("x");
		}
		j = 9;
		for (int i = 0; i <= 10; i++)
		{
			gotoXY(12 + i * 2, j);
			printf("x");
			j++;
		}

		//Vẽ đường chéo phụ
		j = 9;
		for (int i = 0; i <= 10; i++)
		{
			gotoXY(33 - i * 2, j);
			printf("x");

			j++;
		}
		j = 9;
		for (int i = 0; i <= 10; i++)
		{
			gotoXY(32 - i * 2, j);
			j++;
			printf("x");
		}
		j = 9;
		for (int i = 0; i <= 10; i++)
		{
			gotoXY(31 - i * 2, j);
			printf("x");
			j++;
		}
		gotoXY(18, 15); cout << "x"; gotoXY(25, 15); cout << "x";
		SetColor(15, 15);
		gotoXY(21, 15); cout << "xx";

		SetColor(color, color);
		//Vẽ O
		for (int i = 0; i <= 9; i++)
		{
			gotoXY(95 + i, 8);
			printf("o");
		}
		j = 8;
		for (int i = 0; i <= 6; i++)
		{
			gotoXY(94 - i, j);
			printf("o");
			gotoXY(93 - i, j);
			printf("o");
			j++;
		}
		j = 14;
		for (int i = 0; i <= 6; i++)
		{
			gotoXY(88 + i, j);
			printf("o");
			gotoXY(87 + i, j);
			printf("o");
			j++;
		}
		for (int i = 0; i <= 8; i++)
		{
			gotoXY(95 + i, 20);
			printf("o");
		}

		j = 15;
		for (int i = 0; i <= 5; i++)
		{
			gotoXY(110 - i, j);
			printf("o");
			gotoXY(109 - i, j);
			printf("o");
			j++;
		}
		j = 8;
		for (int i = 0; i <= 6; i++)
		{
			gotoXY(104 + i, j);
			printf("o");
			gotoXY(105 + i, j);
			printf("o");
			j++;
		}
		Sleep(20);
		color++;
	}

	if (sound_on) PlaySound(TEXT("Am-thanh-chuyen-canh-www_thuthuatvui_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
	for (int i = 0; i <= 118; i++)
	{
		SetColor(15, 15); gotoXY(i, 0); cout << "x";
		SetColor(15, 15); gotoXY(i, 1); cout << "x";
		SetColor(15, 15); gotoXY(i, 2); cout << "x";
		SetColor(15, 15); gotoXY(i, 3); cout << "x";
		SetColor(15, 15); gotoXY(i, 4); cout << "x";
		SetColor(15, 15); gotoXY(i, 5); cout << "x";
		SetColor(15, 15); gotoXY(i, 6); cout << "x";
		SetColor(15, 15); gotoXY(i, 7); cout << "x";
		SetColor(15, 15); gotoXY(i, 8); cout << "x";
		SetColor(15, 15); gotoXY(i, 9); cout << "x";
		SetColor(15, 15); gotoXY(i, 10); cout << "x";
		SetColor(15, 15); gotoXY(i, 11); cout << "x";
		SetColor(15, 15); gotoXY(i, 12); cout << "x";
		SetColor(15, 15); gotoXY(i, 13); cout << "x";
		SetColor(15, 15); gotoXY(i, 14); cout << "x";
		SetColor(15, 15); gotoXY(i, 15); cout << "x";
		SetColor(15, 15); gotoXY(i, 16); cout << "x";
		SetColor(15, 15); gotoXY(i, 17); cout << "x";
		SetColor(15, 15); gotoXY(i, 18); cout << "x";
		SetColor(15, 15); gotoXY(i, 19); cout << "x";
		SetColor(15, 15); gotoXY(i, 20); cout << "x";
		SetColor(15, 15); gotoXY(i, 21); cout << "x";
		SetColor(15, 15); gotoXY(i, 22); cout << "x";
		SetColor(15, 15); gotoXY(i, 23); cout << "x";
		SetColor(15, 15); gotoXY(i, 24); cout << "x";
		SetColor(15, 15); gotoXY(i, 25); cout << "x";
		SetColor(15, 15); gotoXY(i, 26); cout << "x";
		SetColor(15, 15); gotoXY(i, 27); cout << "x";
		SetColor(15, 15); gotoXY(i, 28); cout << "x";
		SetColor(15, 15); gotoXY(i, 29); cout << "x";
		SetColor(15, 15); gotoXY(i, 30); cout << "x";
	}
}

 void Enter_player_Name()
{
	 memcpy(X, "Computer", 8);
	 X[8] = '\0';
	char c;
	if (file_mode > 1)
	{
		PX();
		SetColor(15, 0);
		gotoXY(3, 15); printf("%c", 220);
		for (int i = 0; i < 15; i++)
		{
			printf("%c", 254);
		}
		cout << " How to play ";
		for (int i = 0; i < 15; i++)
		{
			printf("%c", 254);
		}
		printf("%c", 220);

		for (int i = 0; i < 13; i++)
		{
			gotoXY(47, 16 + i);
			printf("%c", 219);
		}
		gotoXY(47, 29);
		printf("%c", 223);
		for (int i = 0; i < 13; i++)
		{
			gotoXY(3, 16 + i);
			printf("%c", 219);
		}
		gotoXY(3, 29); printf("%c", 223);
		gotoXY(4, 29);
		for (int i = 0; i < 43; i++)
		{
			printf("%c", 254);
		}
		gotoXY(21, 16); cout << ".-------.";
		gotoXY(21, 17); cout << "|       |";
		gotoXY(21, 18); cout << "|   W   |";
		gotoXY(21, 19); cout << "|       |";
		gotoXY(21, 20); cout << "'-------'";

		gotoXY(12, 21); cout << ".-------.";
		gotoXY(12, 22); cout << "|       |";
		gotoXY(12, 23); cout << "|   A   |";
		gotoXY(12, 24); cout << "|       |";
		gotoXY(12, 25); cout << "'-------'";

		gotoXY(21, 21); cout << ".-------.";
		gotoXY(21, 22); cout << "|       |";
		gotoXY(21, 23); cout << "|   S   |";
		gotoXY(21, 24); cout << "|       |";
		gotoXY(21, 25); cout << "'-------'";

		gotoXY(30, 21); cout << ".-------.";
		gotoXY(30, 22); cout << "|       |";
		gotoXY(30, 23); cout << "|   D   |";
		gotoXY(30, 24); cout << "|       |";
		gotoXY(30, 25); cout << "'-------'";

		gotoXY(10, 26); cout << ".-----------------------------.";
		gotoXY(10, 27); cout << "|              J              |";
		gotoXY(10, 28); cout << "'-----------------------------'";
		gotoXY(60, 17 - 3); printf("%c", 220);
		for (int i = 0; i < 50; i++)
			printf("%c", 254);
		printf("%c", 220);
		gotoXY(60, 18 - 3); printf("%c", 219); gotoXY(111, 18 - 3); printf("%c", 219);
		gotoXY(60, 19 - 3); printf("%c", 219); gotoXY(111, 19 - 3); printf("%c", 219);
		gotoXY(60, 20 - 3); printf("%c", 219); gotoXY(111, 20 - 3); printf("%c", 219);
		gotoXY(60, 21 - 3); printf("%c", 223);
		for (int i = 0; i < 50; i++)
			printf("%c", 254);
		printf("%c", 223);
		SetColor(15, 0);
		gotoXY(65, 16);
		cout << "Enter Player X: ";cin.getline(X,30);
		if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("cls");
	}
	PY();
	SetColor(15, 0);
	gotoXY(3, 15); printf("%c", 220);
	for (int i = 0; i < 15; i++)
	{
		printf("%c", 254);
	}
	cout << " How to play ";
	for (int i = 0; i < 15; i++)
	{
		printf("%c", 254);
	}
	printf("%c", 220);

	for (int i = 0; i < 13; i++)
	{
		gotoXY(47, 16 + i);
		printf("%c", 219);
	}
	gotoXY(47, 29);
	printf("%c", 223);
	for (int i = 0; i < 13; i++)
	{
		gotoXY(3, 16 + i);
		printf("%c", 219);
	}
	gotoXY(3, 29); printf("%c", 223);
	gotoXY(4, 29);
	for (int i = 0; i < 43; i++)
	{
		printf("%c", 254);
	}
	gotoXY(21, 16); cout << ".-------.";
	gotoXY(21, 17); cout << "|       |";
	gotoXY(21, 18); cout << "|   "; printf("%c", 24); cout << "   |";
	gotoXY(21, 19); cout << "|       |";
	gotoXY(21, 20); cout << "'-------'";

	gotoXY(12, 21); cout << ".-------.";
	gotoXY(12, 22); cout << "|       |";
	gotoXY(12, 23); cout << "|   <-  |";
	gotoXY(12, 24); cout << "|       |";
	gotoXY(12, 25); cout << "'-------'";

	gotoXY(21, 21); cout << ".-------.";
	gotoXY(21, 22); cout << "|       |";
	gotoXY(21, 23); cout << "|   "; printf("%c", 25); cout << "   |";
	gotoXY(21, 24); cout << "|       |";
	gotoXY(21, 25); cout << "'-------'";

	gotoXY(30, 21); cout << ".-------.";
	gotoXY(30, 22); cout << "|       |";
	gotoXY(30, 23); cout << "|   ->  |";
	gotoXY(30, 24); cout << "|       |";
	gotoXY(30, 25); cout << "'-------'";

	gotoXY(10, 26); cout << ".-----------------------------.";
	gotoXY(10, 27); cout << "|            Enter            |";
	gotoXY(10, 28); cout << "'-----------------------------'";
	gotoXY(60, 17 - 3); printf("%c", 220);
	for (int i = 0; i < 50; i++)
		printf("%c", 254);
	printf("%c", 220);
	gotoXY(60, 18 - 3); printf("%c", 219); gotoXY(111, 18 - 3); printf("%c", 219);
	gotoXY(60, 19 - 3); printf("%c", 219); gotoXY(111, 19 - 3); printf("%c", 219);
	gotoXY(60, 20 - 3); printf("%c", 219); gotoXY(111, 20 - 3); printf("%c", 219);
	gotoXY(60, 21 - 3); printf("%c", 223);
	for (int i = 0; i < 50; i++)
		printf("%c", 254);
	printf("%c", 223);
	gotoXY(65, 16);
	cout << "Enter Player O: "; cin.getline(O, 30);
	if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

 void PX()
{
	int background = 7;
	for (int a = 0; a < 1; a++)
	{
		int i = 20, j = 5;
		int res = rand() % (6 - 0 + 1) + 0;
		SetColor(4, 4);
		gotoXY(i, j); cout << "PPPPP";
		gotoXY(i, j + 1); cout << "PP"; gotoXY(i + 5, j + 1); cout << "PP";
		gotoXY(i, j + 2); cout << "PP"; gotoXY(i + 6, j + 2); cout << "PP";
		gotoXY(i, j + 3); cout << "PP"; gotoXY(i + 6, j + 3); cout << "PP";
		gotoXY(i, j + 4); cout << "PP"; gotoXY(i + 2, j + 4); cout << "PPPPP";
		gotoXY(i, j + 5); cout << "PP";
		gotoXY(i, j + 6); cout << "PP";
		/*gotoXY(i, j + 7); cout << "PP";*/
		for (int b = 0; b < 1; b++)
		{

			SetColor(4, 4);
			int i = 30, j = 5;
			gotoXY(i, j); cout << "LL";
			gotoXY(i, j + 1); cout << "LL";
			gotoXY(i, j + 2); cout << "LL";
			gotoXY(i, j + 3); cout << "LL";
			gotoXY(i, j + 4); cout << "LL";
			gotoXY(i, j + 5); cout << "LL";
			/*gotoXY(i, j + 6); cout << "LL";*/
			gotoXY(i, j + 6); cout << "LLLLLL";
			for (int c = 0; c < 1; c++)
			{
				int i = 40, j = 5;
				int res = rand() % (6 - 0 + 1) + 0;
				SetColor(4, 4);
				gotoXY(i + 2, j); cout << "AAAAAA";
				gotoXY(i, j + 1); cout << "AAAAAAAAAA";
				gotoXY(i - 1, j + 2); cout << "AAA"; gotoXY(i + 8, j + 2); cout << "AAA";
				gotoXY(i - 1, j + 3); cout << "AAA"; gotoXY(i + 8, j + 3); cout << "AAA";
				gotoXY(i - 1, j + 4); cout << "AAA"; gotoXY(i + 8, j + 4); cout << "AAA"; gotoXY(i + 2, j + 4); cout << "AAAAAA";
				gotoXY(i - 1, j + 5); cout << "AAA"; gotoXY(i + 8, j + 5); cout << "AAA";
				gotoXY(i - 1, j + 6); cout << "AAA"; gotoXY(i + 8, j + 6); cout << "AAA";
				/*gotoXY(i - 1, j + 7); cout << "AAA"; gotoXY(i + 8, j + 7); cout << "AAA";*/

				for (int d = 0; d < 1; d++)
				{
					srand(time(NULL));
					int res = rand() % (6 - 0 + 1) + 0;
					int i = 55, j = 5;
					SetColor(4, 4);
					gotoXY(i, j); cout << "YY"; gotoXY(i + 8, j); cout << "YY";
					gotoXY(i, j + 1); cout << "YY"; gotoXY(i + 8, j + 1); cout << "YY";
					gotoXY(i + 1, j + 2); cout << "YY"; gotoXY(i + 7, j + 2); cout << "YY";
					gotoXY(i + 2, j + 3); cout << "YYY"; gotoXY(i + 5, j + 3); cout << "YYY";
					gotoXY(i + 4, j + 4); cout << "YY";
					gotoXY(i + 4, j + 5); cout << "YY";
					gotoXY(i + 4, j + 6); cout << "YY";
					/*gotoXY(i + 4, j + 7); cout << "YY";*/
					for (int e = 0; e < 1; e++)
					{
						int i = 70, j = 5;
						int res = rand() % (6 - 0 + 1) + 0;
						SetColor(4, 4);
						gotoXY(i, j); cout << "EEEEEEEEE";
						gotoXY(i, j + 1); cout << "EE";
						gotoXY(i, j + 2); cout << "EE";
						gotoXY(i, j + 3); cout << "EEEEEEEEE";
						gotoXY(i, j + 4); cout << "EE";
						gotoXY(i, j + 5); cout << "EE";
						gotoXY(i, j + 6); cout << "EEEEEEEEE";
						/*	gotoXY(i, j+7); cout << "EEEEEEEEE";*/
						for (int f = 0; f < 1; f++)
						{

							int i = 82, j = 5;
							int res = rand() % (6 - 0 + 1) + 0;
							SetColor(4, 4);
							gotoXY(i, j); cout << "RRRRRR";
							gotoXY(i, j + 1); cout << "RR"; gotoXY(i + 5, j + 1); cout << "RR";
							gotoXY(i, j + 2); cout << "RR"; gotoXY(i + 5, j + 2); cout << "RR";
							gotoXY(i, j + 3); cout << "RRRRRR";
							gotoXY(i, j + 4); cout << "RR"; gotoXY(i + 3, j + 4); cout << "RR";
							gotoXY(i, j + 5); cout << "RR"; gotoXY(i + 4, j + 5); cout << "RR";
							gotoXY(i, j + 6); cout << "RR"; gotoXY(i + 5, j + 6); cout << "RR";
							for (int g = 0; g < 1; g++)
							{
								int i = 95, j = 5;
								int res = rand() % (6 - 0 + 1) + 0;
								SetColor(4, 4);
								gotoXY(i, j); cout << "XXXX"; gotoXY(i + 12, j); cout << "XXXX";
								gotoXY(i + 2, j + 1); cout << "XXXX"; gotoXY(i + 10, j + 1); cout << "XXXX";
								gotoXY(i + 4, j + 2); cout << "XXXX"; gotoXY(i + 8, j + 2); cout << "XXXX";
								gotoXY(i + 6, j + 3); cout << "XXXX";
								gotoXY(i, j + 6); cout << "XXXX"; gotoXY(i + 12, j + 6); cout << "XXXX";
								gotoXY(i + 2, j + 5); cout << "XXXX"; gotoXY(i + 10, j + 5); cout << "XXXX";
								gotoXY(i + 4, j + 4); cout << "XXXX"; gotoXY(i + 8, j + 4); cout << "XXXX";
							}
						}
					}
				}
			}
		}
	}
	gotoXY(15, 15);
}

 void PY()
{
	int background = 10;
	for (int a = 0; a < 1; a++)
	{
		int i = 20, j = 5;
		int res = rand() % (6 - 0 + 1) + 0;
		SetColor(3, 3);
		gotoXY(i, j); cout << "PPPPP";
		gotoXY(i, j + 1); cout << "PP"; gotoXY(i + 5, j + 1); cout << "PP";
		gotoXY(i, j + 2); cout << "PP"; gotoXY(i + 6, j + 2); cout << "PP";
		gotoXY(i, j + 3); cout << "PP"; gotoXY(i + 6, j + 3); cout << "PP";
		gotoXY(i, j + 4); cout << "PP"; gotoXY(i + 2, j + 4); cout << "PPPPP";
		gotoXY(i, j + 5); cout << "PP";
		gotoXY(i, j + 6); cout << "PP";
		/*gotoXY(i, j + 7); cout << "PP";*/
		for (int b = 0; b < 1; b++)
		{

			SetColor(3, 3);
			int i = 30, j = 5;
			gotoXY(i, j); cout << "LL";
			gotoXY(i, j + 1); cout << "LL";
			gotoXY(i, j + 2); cout << "LL";
			gotoXY(i, j + 3); cout << "LL";
			gotoXY(i, j + 4); cout << "LL";
			gotoXY(i, j + 5); cout << "LL";
			/*gotoXY(i, j + 6); cout << "LL";*/
			gotoXY(i, j + 6); cout << "LLLLLL";
			for (int c = 0; c < 1; c++)
			{
				int i = 40, j = 5;
				int res = rand() % (6 - 0 + 1) + 0;
				SetColor(3, 3);
				gotoXY(i + 2, j); cout << "AAAAAA";
				gotoXY(i, j + 1); cout << "AAAAAAAAAA";
				gotoXY(i - 1, j + 2); cout << "AAA"; gotoXY(i + 8, j + 2); cout << "AAA";
				gotoXY(i - 1, j + 3); cout << "AAA"; gotoXY(i + 8, j + 3); cout << "AAA";
				gotoXY(i - 1, j + 4); cout << "AAA"; gotoXY(i + 8, j + 4); cout << "AAA"; gotoXY(i + 2, j + 4); cout << "AAAAAA";
				gotoXY(i - 1, j + 5); cout << "AAA"; gotoXY(i + 8, j + 5); cout << "AAA";
				gotoXY(i - 1, j + 6); cout << "AAA"; gotoXY(i + 8, j + 6); cout << "AAA";
				/*gotoXY(i - 1, j + 7); cout << "AAA"; gotoXY(i + 8, j + 7); cout << "AAA";*/

				for (int d = 0; d < 1; d++)
				{
					srand(time(NULL));
					int res = rand() % (6 - 0 + 1) + 0;
					int i = 55, j = 5;
					SetColor(3, 3);
					gotoXY(i, j); cout << "YY"; gotoXY(i + 8, j); cout << "YY";
					gotoXY(i, j + 1); cout << "YY"; gotoXY(i + 8, j + 1); cout << "YY";
					gotoXY(i + 1, j + 2); cout << "YY"; gotoXY(i + 7, j + 2); cout << "YY";
					gotoXY(i + 2, j + 3); cout << "YYY"; gotoXY(i + 5, j + 3); cout << "YYY";
					gotoXY(i + 4, j + 4); cout << "YY";
					gotoXY(i + 4, j + 5); cout << "YY";
					gotoXY(i + 4, j + 6); cout << "YY";
					/*gotoXY(i + 4, j + 7); cout << "YY";*/
					for (int e = 0; e < 1; e++)
					{
						int i = 70, j = 5;
						int res = rand() % (6 - 0 + 1) + 0;
						SetColor(3, 3);
						gotoXY(i, j); cout << "EEEEEEEEE";
						gotoXY(i, j + 1); cout << "EE";
						gotoXY(i, j + 2); cout << "EE";
						gotoXY(i, j + 3); cout << "EEEEEEEEE";
						gotoXY(i, j + 4); cout << "EE";
						gotoXY(i, j + 5); cout << "EE";
						gotoXY(i, j + 6); cout << "EEEEEEEEE";
						/*	gotoXY(i, j+7); cout << "EEEEEEEEE";*/
						for (int f = 0; f < 1; f++)
						{

							int i = 82, j = 5;
							int res = rand() % (6 - 0 + 1) + 0;
							SetColor(3, 3);
							gotoXY(i, j); cout << "RRRRRR";
							gotoXY(i, j + 1); cout << "RR"; gotoXY(i + 5, j + 1); cout << "RR";
							gotoXY(i, j + 2); cout << "RR"; gotoXY(i + 5, j + 2); cout << "RR";
							gotoXY(i, j + 3); cout << "RRRRRR";
							gotoXY(i, j + 4); cout << "RR"; gotoXY(i + 3, j + 4); cout << "RR";
							gotoXY(i, j + 5); cout << "RR"; gotoXY(i + 4, j + 5); cout << "RR";
							gotoXY(i, j + 6); cout << "RR"; gotoXY(i + 5, j + 6); cout << "RR";
							for (int g = 0; g < 1; g++)
							{
								int i = 100, j = 5;
								int res = rand() % (6 - 0 + 1) + 0;
								SetColor(3, 3);
								gotoXY(i, j); cout << "OOOO";
								gotoXY(i - 3, j + 1); cout << "OOOO"; gotoXY(i + 3, j + 1); cout << "OOOO";
								gotoXY(i - 5, j + 2); cout << "OOOO"; gotoXY(i + 5, j + 2); cout << "OOOO";
								gotoXY(i - 5, j + 3); cout << "OOOO"; gotoXY(i + 5, j + 3); cout << "OOOO";
								gotoXY(i, j + 6); cout << "OOOO";
								gotoXY(i - 3, j + 5); cout << "OOOO"; gotoXY(i + 3, j + 5); cout << "OOOO";
								gotoXY(i - 5, j + 4); cout << "OOOO"; gotoXY(i + 5, j + 4); cout << "OOOO";
							}
						}
					}
				}
			}
		}
	}
	gotoXY(15, 15);
}