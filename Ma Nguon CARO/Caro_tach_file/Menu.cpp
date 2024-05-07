#include"Menu.h"

string Pvp = "   PLAYER VS PLAYER   ";
string Pvc = "  PlAYER VS COMPUTER  ";
string Load = "      LOAD GAME       ";
string About = "         ABOUT        ";
string hlp = "         HELP         ";
string eit = "          EXIT        ";

 void Menu()
{
	SetColor(14, 3);
	gotoXY(68, 14); cout << Pvp;
	gotoXY(72, 16); cout << Pvc;
	gotoXY(76, 18); cout << Load;
	gotoXY(80, 20); cout << About;
	gotoXY(84, 22); cout << hlp;
	gotoXY(88, 24); cout << eit;
}

 void team()
{
	system("cls");
	SetColor(7, 5);
	gotoXY(25, 5); cout << "Thanh vien 1: ";
	SetColor(7, 8);
	gotoXY(30, 6); cout << "MSSV: 22120196 ";
	gotoXY(30, 7); cout << "Ho va Ten: Thong Luc ";
	gotoXY(30, 8); cout << "gmail: 22120196@student.hcmus.edu.vn ";
	SetColor(7, 5);
	gotoXY(25, 10); cout << "Thanh vien 2: ";
	SetColor(7, 8);
	gotoXY(30, 11); cout << "MSSV: ";
	gotoXY(30, 12); cout << "Ho va Ten: ";
	gotoXY(30, 13); cout << "gmail: ";
	SetColor(7, 5);
	gotoXY(25, 15); cout << "Thanh vien 3: ";
	SetColor(7, 8);
	gotoXY(30, 16); cout << "MSSV: ";
	gotoXY(30, 17); cout << "Ho va Ten: ";
	gotoXY(30, 18); cout << "gmail: ";
	SetColor(7, 5);
	gotoXY(25, 20); cout << "Thanh vien 4: ";
	SetColor(7, 8);
	gotoXY(30, 21); cout << "MSSV: ";
	gotoXY(30, 22); cout << "Ho va Ten: ";
	gotoXY(30, 23); cout << "gmail: ";
	SetColor(7, 5);
	gotoXY(25, 25); cout << "Thanh vien 5: ";
	SetColor(7, 8);
	gotoXY(30, 26); cout << "MSSV: ";
	gotoXY(30, 27); cout << "Ho va Ten: ";
	gotoXY(30, 28); cout << "gmail: ";
}

 void C()
{
	// ch? C
	int i = 20 - 23, j = -1;
	SetColor(1, 7);
	gotoXY(i + 4, j + 2); cout << "            ";
	gotoXY(i + 4, j + 3); cout << "            ";
	gotoXY(i + 4, j + 4); cout << "    ";
	gotoXY(i + 4, j + 5); cout << "    ";
	gotoXY(i + 4, j + 6); cout << "            ";
	gotoXY(i + 4, j + 7); cout << "            ";


}
 void A()
{
	// ch? A
	int i = 40 - 23, j = -1;
	int a = 5;
	SetColor(6, 7);
	gotoXY(i + 7 - a, j + 2); cout << "      ";
	gotoXY(i + 5 - a, j + 3); cout << "    "; gotoXY(i + 11 - a, j + 3); cout << "    ";
	gotoXY(i + 4 - a, j + 4); cout << "    "; gotoXY(i + 12 - a, j + 4); cout << "    ";
	gotoXY(i + 4 - a, j + 5); cout << "            ";
	gotoXY(i + 4 - a, j + 6); cout << "    "; gotoXY(i + 12 - a, j + 6); cout << "    ";
	gotoXY(i + 4 - a, j + 7); cout << "    "; gotoXY(i + 12 - a, j + 7); cout << "    ";
}
 void R()
{
	// Ch? R
	int i = 60 - 23, j = -1;
	int a = 5;
	SetColor(5, 7);
	gotoXY(i + 4 - a - 3 - 2, j + 2); cout << "            ";
	gotoXY(i + 4 - a - 3 - 2, j + 3); cout << "    "; gotoXY(i + 12 - a - 3 - 2, j + 3); cout << "    ";
	gotoXY(i + 4 - a - 3 - 2, j + 4); cout << "           ";
	gotoXY(i + 4 - a - 3 - 2, j + 5); cout << "          ";
	gotoXY(i + 4 - a - 3 - 2, j + 6); cout << "    "; gotoXY(i + 12 - a - 3 - 2, j + 6); cout << "    ";
	gotoXY(i + 4 - a - 3 - 2, j + 7); cout << "    "; gotoXY(i + 13 - a - 3 - 2, j + 7); cout << "    ";


}
 void _O()
{
	// Ch? O
	int i = 80 - 23, j = -1;
	int a = 5;
	SetColor(4, 7);
	gotoXY(i + 6 - a - 8, j + 2); cout << "        ";
	gotoXY(i + 4 - a - 8, j + 3); cout << "   "; gotoXY(i + 13 - a - 8, j + 3); cout << "   ";
	gotoXY(i + 3 - a - 8, j + 4); cout << "   "; gotoXY(i + 14 - a - 8, j + 4); cout << "   ";
	gotoXY(i + 3 - a - 8, j + 5); cout << "   "; gotoXY(i + 14 - a - 8, j + 5); cout << "   ";
	gotoXY(i + 4 - a - 8, j + 6); cout << "   "; gotoXY(i + 13 - a - 8, j + 6); cout << "   ";
	gotoXY(i + 6 - a - 8, j + 7); cout << "        ";

}

 void c()
{
	// ch? C
	int i = 20 - 22, j = -1;
	SetColor(8, 7);
	gotoXY(i + 4, j + 2); cout << "            ";
	gotoXY(i + 4, j + 3); cout << "            ";
	gotoXY(i + 4, j + 4); cout << "    ";
	gotoXY(i + 4, j + 5); cout << "    ";
	gotoXY(i + 4, j + 6); cout << "            ";
	gotoXY(i + 4, j + 7); cout << "            ";


}
 void _a()
{
	// ch? A
	int i = 40 - 22, j = -1;
	int a = 5;
	SetColor(8, 7);
	gotoXY(i + 7 - a, j + 2); cout << "      ";
	gotoXY(i + 5 - a, j + 3); cout << "    "; gotoXY(i + 11 - a, j + 3); cout << "    ";
	gotoXY(i + 4 - a, j + 4); cout << "    "; gotoXY(i + 12 - a, j + 4); cout << "    ";
	gotoXY(i + 4 - a, j + 5); cout << "            ";
	gotoXY(i + 4 - a, j + 6); cout << "    "; gotoXY(i + 12 - a, j + 6); cout << "    ";
	gotoXY(i + 4 - a, j + 7); cout << "    "; gotoXY(i + 12 - a, j + 7); cout << "    ";
}
 void r()
{
	// Ch? R
	int i = 60 - 22, j = -1;
	int a = 5;
	SetColor(8, 7);
	gotoXY(i + 4 - a - 3 - 2, j + 2); cout << "            ";
	gotoXY(i + 4 - a - 3 - 2, j + 3); cout << "    "; gotoXY(i + 12 - a - 3 - 2, j + 3); cout << "    ";
	gotoXY(i + 4 - a - 3 - 2, j + 4); cout << "           ";
	gotoXY(i + 4 - a - 3 - 2, j + 5); cout << "          ";
	gotoXY(i + 4 - a - 3 - 2, j + 6); cout << "    "; gotoXY(i + 12 - a - 3 - 2, j + 6); cout << "    ";
	gotoXY(i + 4 - a - 3 - 2, j + 7); cout << "    "; gotoXY(i + 13 - a - 3 - 2, j + 7); cout << "    ";


}
 void o()
{
	// Ch? O
	int i = 80 - 22, j = -1;
	int a = 5;
	SetColor(8, 7);
	gotoXY(i + 6 - a - 8, j + 2); cout << "        ";
	gotoXY(i + 4 - a - 8, j + 3); cout << "   "; gotoXY(i + 13 - a - 8, j + 3); cout << "   ";
	gotoXY(i + 3 - a - 8, j + 4); cout << "   "; gotoXY(i + 14 - a - 8, j + 4); cout << "   ";
	gotoXY(i + 3 - a - 8, j + 5); cout << "   "; gotoXY(i + 14 - a - 8, j + 5); cout << "   ";
	gotoXY(i + 4 - a - 8, j + 6); cout << "   "; gotoXY(i + 13 - a - 8, j + 6); cout << "   ";
	gotoXY(i + 6 - a - 8, j + 7); cout << "        ";

}

 void chay()
{
	int background = 7;
	int n = 6;
	int a = 5;
	Sleep(700);
	while (n >= 0)
	{
		SetColor(0, 7);
		for (int q = 0; q < 1; q++)
		{
			int i = 20 - 23, j = -1;
			int res = rand() % (6 - 0 + 1) + 0;
			SetColor(res, res);
			gotoXY(i + 4, j + 2); cout << "CCCCCCCCCCCC";
			gotoXY(i + 4, j + 3); cout << "CCCCCCCCCCCC";
			gotoXY(i + 4, j + 4); cout << "CCCC";
			gotoXY(i + 4, j + 5); cout << "CCCC";
			gotoXY(i + 4, j + 6); cout << "CCCCCCCCCCCC";
			gotoXY(i + 4, j + 7); cout << "CCCCCCCCCCCC";

			for (int b = 0; b < 1; b++)
			{
				int res = rand() % (6 - 0 + 1) + 0;
				SetColor(res, res);
				int i = 40 - 23, j = -1;
				gotoXY(i + 7 - a, j + 2); cout << "AAAAAA";
				gotoXY(i + 5 - a, j + 3); cout << "AAAA"; gotoXY(i + 11 - a, j + 3); cout << "AAAA";
				gotoXY(i + 4 - a, j + 4); cout << "AAAA"; gotoXY(i + 12 - a, j + 4); cout << "AAAA";
				gotoXY(i + 4 - a, j + 5); cout << "AAAAAAAAAAAA";
				gotoXY(i + 4 - a, j + 6); cout << "AAAA"; gotoXY(i + 12 - a, j + 6); cout << "AAAA";
				gotoXY(i + 4 - a, j + 7); cout << "AAAA"; gotoXY(i + 12 - a, j + 7); cout << "AAAA";
				for (int c = 0; c < 1; c++)
				{
					int res = rand() % (6 - 0 + 1) + 0;
					SetColor(res, res);
					int i = 60 - 23, j = -1;
					gotoXY(i + 4 - a - 3 - 2, j + 2); cout << "RRRRRRRRRRRR";
					gotoXY(i + 4 - a - 3 - 2, j + 3); cout << "RRRR"; gotoXY(i + 12 - a - 3 - 2, j + 3); cout << "RRRR";
					gotoXY(i + 4 - a - 3 - 2, j + 4); cout << "RRRRRRRRRRR";
					gotoXY(i + 4 - a - 3 - 2, j + 5); cout << "RRRRRRRRRR";
					gotoXY(i + 4 - a - 3 - 2, j + 6); cout << "RRRR"; gotoXY(i + 12 - a - 3 - 2, j + 6); cout << "RRRR";
					gotoXY(i + 4 - a - 3 - 2, j + 7); cout << "RRRR"; gotoXY(i + 13 - a - 3 - 2, j + 7); cout << "RRRR";
					for (int d = 0; d < 1; d++)
					{
						srand(time(NULL));
						int res = rand() % (6 - 0 + 1) + 0;
						int i = 80 - 23, j = -1;
						SetColor(res, res);
						gotoXY(i + 6 - a - 8, j + 2); cout << "OOOOOOOO";
						gotoXY(i + 4 - a - 8, j + 3); cout << "OOO"; gotoXY(i + 13 - a - 8, j + 3); cout << "OOO";
						gotoXY(i + 3 - a - 8, j + 4); cout << "OOO"; gotoXY(i + 14 - a - 8, j + 4); cout << "OOO";
						gotoXY(i + 3 - a - 8, j + 5); cout << "OOO"; gotoXY(i + 14 - a - 8, j + 5); cout << "OOO";
						gotoXY(i + 4 - a - 8, j + 6); cout << "OOO"; gotoXY(i + 13 - a - 8, j + 6); cout << "OOO";
						gotoXY(i + 6 - a - 8, j + 7); cout << "OOOOOOOO";
					}
				}
			}
		}
		Sleep(1300);
		n--;

		if (n == 1)
		{
			C();
			A();
			R();
			_O();
			return;
		}
	}
}

 void hello()
{
	bool flag = true; int count = 0;
	for (int j = 1; j < 50; j++)
	{
		SetColor(4, 4);
		for (int i = 0; i < 8; i++)
		{
			gotoXY(0 + j, 10 + i); cout << "xxxx";
		}
		gotoXY(0 + j, 13); cout << "xxxxxxxxx";
		gotoXY(0 + j, 14); cout << "xxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(9 + j, 10 + i); cout << "xxxx";
		}
		for (int i = 0; i < 8; i++)
		{
			gotoXY(16 + j, 10 + i); cout << "xxxx";
		}
		gotoXY(16 + j, 10); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j, 11); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j, 13); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j, 14); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j, 16); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j, 17); cout << "xxxxxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(31 + j, 10 + i); cout << "xxxx";
		}
		gotoXY(31 + j, 16); cout << "xxxxxxxxxx";
		gotoXY(31 + j, 17); cout << "xxxxxxxxxx";

		for (int i = 0; i < 8; i++)
		{
			gotoXY(44 + j, 10 + i); cout << "xxxx";
		}
		gotoXY(44 + j, 16); cout << "xxxxxxxxxx";
		gotoXY(44 + j, 17); cout << "xxxxxxxxxx";
		gotoXY(57 + j, 10); cout << "xxxxxxxxxxx";
		gotoXY(57 + j, 11); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(57 + j, 10 + i); cout << "xxx";
		}
		gotoXY(57 + j, 16); cout << "xxxxxxxxxxx";
		gotoXY(57 + j, 17); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(68 + j, 10 + i); cout << "xxx";
		}
		Sleep(1);

		SetColor(15, 15);
		for (int i = 0; i < 8; i++)
		{
			gotoXY(0 + j - 1, 10 + i); cout << "xxxx";
		}
		gotoXY(0 + j - 1, 13); cout << "xxxxxxxxx";
		gotoXY(0 + j - 1, 14); cout << "xxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(9 + j - 1, 10 + i); cout << "xxxx";
		}
		for (int i = 0; i < 8; i++)
		{
			gotoXY(16 + j - 1, 10 + i); cout << "xxxx";
		}
		gotoXY(16 + j - 1, 10); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j - 1, 11); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j - 1, 13); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j - 1, 14); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j - 1, 16); cout << "xxxxxxxxxxxx";
		gotoXY(16 + j - 1, 17); cout << "xxxxxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(31 + j - 1, 10 + i); cout << "xxxx";
		}
		gotoXY(31 + j - 1, 16); cout << "xxxxxxxxxx";
		gotoXY(31 + j - 1, 17); cout << "xxxxxxxxxx";

		for (int i = 0; i < 8; i++)
		{
			gotoXY(44 + j - 1, 10 + i); cout << "xxxx";
		}
		gotoXY(44 + j - 1, 16); cout << "xxxxxxxxxx";
		gotoXY(44 + j - 1, 17); cout << "xxxxxxxxxx";
		gotoXY(57 + j - 1, 10); cout << "xxxxxxxxxxx";
		gotoXY(57 + j - 1, 11); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(57 + j - 1, 10 + i); cout << "xxx";
		}
		gotoXY(57 + j - 1, 16); cout << "xxxxxxxxxxx";
		gotoXY(57 + j - 1, 17); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 8; i++)
		{
			gotoXY(68 + j, 10 + i); cout << "xxx";
		}
		if (j == 49)
		{
			system("cls");
			j = 1; count++;
		}
		if (count == 4) break;
	}
	SetColor(15, 15);
	system("cls");
}

 void help()
{
	AnTroChuot();
	char c;
	gotoXY(18, 7);
	SetColor(15, 4);
	for (int i = 0; i < 40; i++)
		printf("%c", 219);
	SetColor(15, 1);
	for (int i = 0; i < 40; i++)
		printf("%c", 219);
	SetColor(15, 4);
	for (int i = 0; i < 17; i++)
	{
		gotoXY(18, 8 + i);
		printf("%c", 219);
	}
	SetColor(15, 1);
	for (int i = 0; i < 17; i++)
	{
		gotoXY(97, 8 + i);
		printf("%c", 219);
	}
	SetColor(15, 4);
	gotoXY(18, 25);
	for (int i = 0; i < 40; i++)
		printf("%c", 219);
	SetColor(15, 1);
	for (int i = 0; i < 40; i++)
		printf("%c", 219);
	gotoXY(20, 9);
	SetColor(15, 4);
	for (int i = 0; i < 35; i++)
		printf("%c", 3);
	SetColor(15, 5);
	cout << " MENU ";
	SetColor(15, 1);
	for (int i = 0; i < 35; i++)
		printf("%c", 3);
	SetColor(15, 0);
	gotoXY(20, 11);
	cout << "  Su dung cac phim "; printf("%c", 24); cout << "/"; printf("%c", 25);  cout << " de di chuyen lua chon cac option trong Menu va nhan ";
	gotoXY(26, 12);	cout << "phim Enter de thuc thi option do, Nhan phim X de bat/tat am thanh";
	gotoXY(20, 14);
	SetColor(15, 4);
	for (int i = 0; i < 33; i++)
		printf("%c", 3);
	SetColor(15, 5);
	cout << " RULE GAME ";
	SetColor(15, 1);
	for (int i = 0; i < 32; i++)
		printf("%c", 3);
	SetColor(15, 0);
	gotoXY(20, 16);
	cout << "      Chi can ban co 5 nuoc di thang/cheo lien tuc thi ban chien thang";
	SetColor(15, 4);
	gotoXY(20, 18);
	for (int i = 0; i < 33; i++)
		printf("%c", 3);
	SetColor(15, 5);
	cout << " PLAY GAME ";
	SetColor(15, 1);
	for (int i = 0; i < 32; i++)
		printf("%c", 3);
	SetColor(15, 0);
	gotoXY(20, 20);
	cout << "  1. Player X: Su dung cac phim A/D/W/S de di chuyen trai/phai/len/xuong";
	gotoXY(43, 21); cout << "  va nhan phim J de danh co";
	gotoXY(20, 22);
	cout << "  2. Player O: Su dung cac phim <-/->/"; printf("%c", 24); cout << "/"; printf("%c", 25); cout << " de di chuyen trai/phai/len/xuong";
	gotoXY(43, 23); cout << "  va nhan phim Enter de danh co";
	gotoXY(52, 26); cout << ".---------.";
	gotoXY(52, 27); cout << "|   ESC   |    Quay lai";
	gotoXY(52, 28); cout << "._________.";
	int h;
	for (int j = 0; j < 7; j++)
	{
		h = rand() % 8;
		SetColor(h, h);
		for (int i = 0; i < 5; i++)
		{
			gotoXY(40 - 6, 1 + i);
			cout << "xxx";
		}
		gotoXY(43 - 6, 3); cout << "xxxxx";
		for (int i = 0; i < 5; i++)
		{
			gotoXY(47 - 6, 1 + i);
			cout << "xxx";
		}

		gotoXY(47, 1); cout << "xxxxxxxx";
		for (int i = 0; i < 5; i++)
		{
			gotoXY(47, 1 + i);
			cout << "xxx";
		}
		gotoXY(47, 3); cout << "xxxxxxxx";
		gotoXY(47, 5); cout << "xxxxxxxx";
		for (int i = 0; i < 5; i++)
		{
			gotoXY(58, 1 + i); cout << "xxx";
		}
		cout << "xxxxx";
		for (int i = 0; i < 5; i++)
		{
			gotoXY(69, 1 + i); cout << "xxx";
		}
		gotoXY(69, 1); cout << "xxxxxxxx";
		gotoXY(69, 3); cout << "xxxxxxxx";
		gotoXY(75, 2); cout << "xx";
		Sleep(200);
	}
	while (true)
	{
		_COMMAND = toupper(_getch());
		if (_COMMAND == 27)
		{
			if (sound_on)
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		}
	}
	HienTroChuot();
}

 void About_Menu()
{
	int x = 9, y = 0;
	for (int i = 0; i < 7; i++)
	{
		SetColor(15, i);
		gotoXY(x, y);		cout << "            nnnnnn     nnnnnn      nnnnnn        nnnnnn     nnnnnnnnnnnnnnnnnnn     nnnnnnnnn       nnnnnn";
		gotoXY(x, y + 1);	cout << "           nnnnnn    nnnnnn       nnnnnn        nnnnnn     nnnnnnnnnnnnnnnnnnn     nnnnnnnnnn      nnnnnn";
		gotoXY(x, y + 2);	cout << "          nnnnnn   nnnnnn        nnnnnn        nnnnnn     nnnnnnnnnnnnnnnnnnn     nnnnnnnnnnn     nnnnnn";
		gotoXY(x, y + 3);	cout << "         nnnnnn  nnnnnn         nnnnnn        nnnnnn           nnnnnnn           nnnnnn nnnnn    nnnnnn";
		gotoXY(x, y + 4);	cout << "        nnnnnn nnnnnn          nnnnnn        nnnnnn           nnnnnnn           nnnnnn  nnnnn   nnnnnn";
		Sleep(50);
		gotoXY(x, y + 5);	cout << "       nnnnnnnnnnnn           nnnnnnnnnnnnnnnnnnnn           nnnnnnn           nnnnnn   nnnnn  nnnnnn";
		gotoXY(x, y + 6);	cout << "      nnnnnnnnnnnn           nnnnnnnnnnnnnnnnnnnn           nnnnnnn           nnnnnn    nnnnn nnnnnn";
		gotoXY(x, y + 7);	cout << "     nnnnnnnnnnnnn          nnnnnnnnnnnnnnnnnnnn           nnnnnnn           nnnnnn     nnnnnnnnnnn";
		gotoXY(x, y + 8);	cout << "    nnnnnn  nnnnnn         nnnnnn        nnnnnn           nnnnnnn           nnnnnn      nnnnnnnnnn";
		Sleep(50);
		gotoXY(x, y + 9);	cout << "   nnnnnn   nnnnnn        nnnnnn        nnnnnn           nnnnnnn           nnnnnn       nnnnnnnnn";
		gotoXY(x, y + 10);	cout << "  nnnnnn    nnnnnn       nnnnnn        nnnnnn           nnnnnnn           nnnnnn        nnnnnnnn";
		gotoXY(x, y + 11);	cout << " nnnnnn     nnnnnn      nnnnnn        nnnnnn           nnnnnnn           nnnnnn         nnnnnnn";
		gotoXY(x, y + 12);	cout << "nnnnnn      nnnnnn     nnnnnn        nnnnnn           nnnnnnn           nnnnnn          nnnnnn";
	}
	SetColor(15, 0);
	for (int i = 15; i < 104; i++)
	{
		gotoXY(i, 13);	printf("%c", 220);
		gotoXY(i, 26);	printf("%c", 223);
	}
	for (int i = 14; i < 26; i++)
	{
		gotoXY(15, i);	printf("%c", 219);
		gotoXY(103, i);	printf("%c", 219);
	}
	SetColor(11, 11);
	for (int i = 16; i < 103; i++)
	{
		for (int j = 14; j < 26; j++)
		{
			gotoXY(i, j); cout << ".";
		}
	}
	char c = 16;
	SetColor(11, 0);
	gotoXY(26, 15); cout << c << "Thanh vien 1: Thong Luc                    MSSV: 22120196";
	gotoXY(26, 16);	cout << "Gmail: 22120196@student.hcmus.edu.vn";
	gotoXY(26, 17); cout << c << "Thanh vien 2: Nguyen Huu Nghia             MSSV: 22120227";
	gotoXY(26, 18);	cout << "Gmail: 22120227@student.hcmus.edu.vn";
	gotoXY(26, 19); cout << c << "Thanh vien 3: Le Vo Nhat Minh              MSSV: 22120210";
	gotoXY(26, 20);	cout << "Gmail: 22120210@student.hcmus.edu.vn";
	gotoXY(26, 21); cout << c << "Thanh vien 4: Nguyen Hoang Nguyen          MSSV: 22120236";
	gotoXY(26, 22);	cout << "Gmail: 22120236@student.hcmus.edu.vn";
	gotoXY(26, 23); cout << c << "Thanh vien 5: Nguyen Duc Manh              MSSV: 22120204";
	gotoXY(26, 24);	cout << "Gmail: 22120204@student.hcmus.edu.vn";
	SetColor(15, 0);
	gotoXY(52, 27); cout << ".---------.";
	gotoXY(52, 28); cout << "|   ESC   |    Quay lai";
	gotoXY(52, 29); cout << "._________.";
	while (true)
	{
		_COMMAND = toupper(_getch());
		if (_COMMAND == 27)
		{
			if (sound_on)
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
			break;
		}
	}
}

 int dichuyen(int y)
{
	if (_COMMAND == 72)
	{
		y = y - 2;
		if (y < 14) y = 24;
	}
	else if (_COMMAND == 80)
	{
		y = y + 2;
		if (y > 24) y = 14;
	}
	return y;
}

 void Move_Up()
{
	int b = -2; int a = 6;
	_Z -= 2;
	SetColor(14, 14);
	gotoXY(85, 24); printf("%c", 16);
	gotoXY(112, 24); printf("%c", 17);
	gotoXY(62 + a - 3, 14); printf("%c", 16);
	gotoXY(62 + a - 3 + 27, 14); printf("%c", 17);
	gotoXY(62 + 4 + a - 3, 16); printf("%c", 16);
	gotoXY(62 + 4 + a - 3 + 27, 16); printf("%c", 17);
	gotoXY(62 + 8 + a - 3, 18); printf("%c", 16);
	gotoXY(62 + 8 + a - 3 + 27, 18); printf("%c", 17);
	gotoXY(62 + 12 + a - 3, 20); printf("%c", 16);
	gotoXY(62 + 12 + a - 3 + 27, 20); printf("%c", 17);
	gotoXY(62 + 16 + a - 3, 22); printf("%c", 16);
	gotoXY(62 + 16 + a - 3 + 27, 22); printf("%c", 17);
	gotoXY(62 + 20 + a - 3, 24); printf("%c", 16);
	gotoXY(62 + 20 + a - 3 + 27, 24); printf("%c", 17);
	if (_Z < 16 + b)
	{
		_Z = 26 + b;
		SetColor(14, 3);
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 20 + a, _Z); cout << eit;
		SetColor(14, 5);
		gotoXY(85, 24); printf("%c", 16);
		gotoXY(112, 24); printf("%c", 17);
	}
	else if (_Z == 16 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + a, _Z); cout << Pvp;
		SetColor(14, 5);
		gotoXY(62 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 18 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 4 + a, _Z); cout << Pvc;
		SetColor(14, 5);
		gotoXY(62 + 4 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 4 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 20 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 8 + a, _Z); cout << Load;
		SetColor(14, 5);
		gotoXY(62 + 8 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 8 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 22 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 12 + a, _Z); cout << About;
		SetColor(14, 5);
		gotoXY(62 + 12 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 12 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 24 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		SetColor(5, 15);
		gotoXY(62 + 16 + a, _Z); cout << hlp;
		SetColor(14, 5);
		gotoXY(62 + 16 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 16 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 26 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 20 + a, _Z); cout << eit;
		SetColor(14, 5);
		gotoXY(62 + 20 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 20 + a - 3 + 27, _Z); printf("%c", 17);
	}
}

 void Move_Down()
{
	int b = -2; int a = 6;
	_Z += 2;
	SetColor(14, 14);
	gotoXY(85, 24); printf("%c", 16);
	gotoXY(112, 24); printf("%c", 17);
	gotoXY(62 + a - 3, 14); printf("%c", 16);
	gotoXY(62 + a - 3 + 27, 14); printf("%c", 17);
	gotoXY(62 + 4 + a - 3, 16); printf("%c", 16);
	gotoXY(62 + 4 + a - 3 + 27, 16); printf("%c", 17);
	gotoXY(62 + 8 + a - 3, 18); printf("%c", 16);
	gotoXY(62 + 8 + a - 3 + 27, 18); printf("%c", 17);
	gotoXY(62 + 12 + a - 3, 20); printf("%c", 16);
	gotoXY(62 + 12 + a - 3 + 27, 20); printf("%c", 17);
	gotoXY(62 + 16 + a - 3, 22); printf("%c", 16);
	gotoXY(62 + 16 + a - 3 + 27, 22); printf("%c", 17);
	gotoXY(62 + 20 + a - 3, 24); printf("%c", 16);
	gotoXY(62 + 20 + a - 3 + 27, 24); printf("%c", 17);
	if (_Z == 16 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + a, _Z); cout << Pvp;
		SetColor(14, 5);
		gotoXY(62 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 18 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 4 + a, _Z); cout << Pvc;
		SetColor(14, 5);
		gotoXY(62 + 4 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 4 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 20 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 8 + a, _Z); cout << Load;
		SetColor(14, 5);
		gotoXY(62 + 8 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 8 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 22 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 12 + a, _Z); cout << About;
		SetColor(14, 5);
		gotoXY(62 + 12 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 12 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z == 24 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		SetColor(5, 15);
		gotoXY(62 + 16 + a, _Z); cout << hlp;
		SetColor(14, 5);
		gotoXY(62 + 16 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 16 + a - 3 + 27, _Z); printf("%c", 17);

	}
	else if (_Z == 26 + b)
	{
		SetColor(14, 3);
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + a, 16 + b); cout << Pvp;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + 20 + a, _Z); cout << eit;
		SetColor(14, 5);
		gotoXY(85, 24); printf("%c", 16);
		gotoXY(112, 24); printf("%c", 17);
		SetColor(14, 5);
		gotoXY(62 + 20 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + 20 + a - 3 + 27, _Z); printf("%c", 17);
	}
	else if (_Z > 26 + b)
	{
		_Z = 16 + b;
		SetColor(14, 3);
		gotoXY(62 + 20 + a, 26 + b); cout << eit;
		gotoXY(62 + 4 + a, 18 + b); cout << Pvc;
		gotoXY(62 + 8 + a, 20 + b); cout << Load;
		gotoXY(62 + 12 + a, 22 + b); cout << About;
		gotoXY(62 + 16 + a, 24 + b); cout << hlp;
		SetColor(5, 15);
		gotoXY(62 + a, _Z); cout << Pvp;
		SetColor(14, 5);
		gotoXY(62 + a - 3, _Z); printf("%c", 16);
		gotoXY(62 + a - 3 + 27, _Z); printf("%c", 17);
	}
}

 void thank_you()
{
	//Y
	SetColor(4, 64);
	gotoXY(56, 16); cout << " "; gotoXY(60, 16); cout << " ";
	gotoXY(56, 17); cout << " "; gotoXY(60, 17); cout << " ";
	gotoXY(57, 18); cout << " "; gotoXY(59, 18); cout << " ";
	gotoXY(58, 19); cout << " ";
	gotoXY(58, 20); cout << " ";
	gotoXY(58, 21); cout << " ";
	gotoXY(58, 22); cout << " ";
	SetColor(4, 204);
	gotoXY(61, 16); cout << char(221);
	gotoXY(61, 17); cout << char(221);
	gotoXY(60, 18); cout << char(221);
	gotoXY(59, 19); cout << char(221);
	gotoXY(59, 20); cout << char(221);
	gotoXY(59, 21); cout << char(221);
	gotoXY(59, 22); cout << char(221);
	gotoXY(57, 16); cout << char(221);
	gotoXY(57, 17); cout << char(221);
	SetColor(4, 201);
	gotoXY(55, 16); cout << char(222);
	gotoXY(55, 17); cout << char(222);
	gotoXY(56, 18); cout << char(222);
	gotoXY(57, 19); cout << char(222);
	gotoXY(57, 20); cout << char(222);
	gotoXY(57, 21); cout << char(222);
	gotoXY(57, 22); cout << char(222);
	gotoXY(59, 16); cout << char(222);
	gotoXY(59, 17); cout << char(222);
	SetColor(4, 137);
	gotoXY(58, 18); cout << char(222);
	//O
	SetColor(4, 64);
	gotoXY(65, 17); cout << " "; gotoXY(71, 17); cout << " ";
	gotoXY(65, 18); cout << " "; gotoXY(71, 18); cout << " ";
	gotoXY(65, 19); cout << " "; gotoXY(71, 19); cout << " ";
	gotoXY(65, 20); cout << " "; gotoXY(71, 20); cout << " ";
	gotoXY(65, 21); cout << " "; gotoXY(71, 21); cout << " ";
	gotoXY(66, 16); cout << " "; gotoXY(67, 16); cout << " "; gotoXY(68, 16); cout << " "; gotoXY(69, 16); cout << " ";
	gotoXY(70, 16); cout << " ";
	gotoXY(66, 22); cout << " "; gotoXY(67, 22); cout << " "; gotoXY(68, 22); cout << " "; gotoXY(69, 22); cout << " ";
	gotoXY(70, 22); cout << " ";
	SetColor(4, 204);
	gotoXY(66, 17); cout << char(221); gotoXY(72, 17); cout << char(221);
	gotoXY(66, 18); cout << char(221); gotoXY(72, 18); cout << char(221);
	gotoXY(66, 19); cout << char(221); gotoXY(72, 19); cout << char(221);
	gotoXY(66, 20); cout << char(221); gotoXY(72, 20); cout << char(221);
	gotoXY(66, 21); cout << char(221); gotoXY(72, 21); cout << char(221);
	gotoXY(71, 16); cout << char(221);
	gotoXY(71, 22); cout << char(221);
	SetColor(4, 201);
	gotoXY(64, 17); cout << char(222);
	gotoXY(64, 18); cout << char(222);
	gotoXY(64, 19); cout << char(222);
	gotoXY(64, 20); cout << char(222);
	gotoXY(64, 21); cout << char(222);
	gotoXY(70, 17); cout << char(222);
	gotoXY(70, 18); cout << char(222);
	gotoXY(70, 19); cout << char(222);
	gotoXY(70, 20); cout << char(222);
	gotoXY(70, 21); cout << char(222);
	gotoXY(75, 16); cout << char(222);
	gotoXY(75, 22); cout << char(222);
	//U
	SetColor(4, 64);
	gotoXY(76, 17); cout << " "; gotoXY(82, 16); cout << " ";
	gotoXY(76, 18); cout << " "; gotoXY(82, 17); cout << " ";
	gotoXY(76, 19); cout << " "; gotoXY(82, 18); cout << " ";
	gotoXY(76, 20); cout << " "; gotoXY(82, 19); cout << " ";
	gotoXY(76, 21); cout << " "; gotoXY(82, 20); cout << " ";
	gotoXY(76, 16); cout << " "; gotoXY(82, 21); cout << " ";
	gotoXY(76, 22); cout << " "; gotoXY(82, 22); cout << " ";
	SetColor(4, 76);
	gotoXY(77, 22); cout << char(223); gotoXY(78, 22); cout << char(223); gotoXY(79, 22); cout << char(223); gotoXY(80, 22); cout << char(223);
	gotoXY(81, 22); cout << char(223);

	SetColor(4, 204);
	gotoXY(83, 16); cout << char(221);
	gotoXY(83, 17); cout << char(221);
	gotoXY(83, 18); cout << char(221);
	gotoXY(83, 19); cout << char(221);
	gotoXY(83, 20); cout << char(221);
	gotoXY(83, 22); cout << char(221);
	gotoXY(83, 21); cout << char(221);
	gotoXY(77, 16); cout << char(221);
	gotoXY(77, 17); cout << char(221);
	gotoXY(77, 18); cout << char(221);
	gotoXY(77, 19); cout << char(221);
	gotoXY(77, 20); cout << char(221);
	gotoXY(77, 21); cout << char(221);
	SetColor(4, 201);
	gotoXY(81, 16); cout << char(222);
	gotoXY(81, 17); cout << char(222);
	gotoXY(81, 18); cout << char(222);
	gotoXY(81, 19); cout << char(222);
	gotoXY(81, 20); cout << char(222);
	gotoXY(81, 21); cout << char(222);
	gotoXY(75, 16); cout << char(222);
	gotoXY(75, 17); cout << char(222);
	gotoXY(75, 18); cout << char(222);
	gotoXY(75, 19); cout << char(222);
	gotoXY(75, 20); cout << char(222);
	gotoXY(75, 21); cout << char(222);
	gotoXY(75, 22); cout << char(222);
	//T
	SetColor(4, 64);
	gotoXY(54, 5); cout << " ";
	gotoXY(54, 6); cout << " ";
	gotoXY(54, 7); cout << " ";
	gotoXY(54, 8); cout << " ";
	gotoXY(54, 9); cout << " ";
	gotoXY(54, 10); cout << " ";
	gotoXY(54, 11); cout << " ";
	SetColor(4, 7);
	gotoXY(51, 5); cout << char(223); gotoXY(52, 5); cout << char(223); gotoXY(53, 5); cout << char(223);
	SetColor(4, 87);
	gotoXY(55, 5); cout << char(223); gotoXY(56, 5); cout << char(223); gotoXY(57, 5); cout << char(223);
	SetColor(4, 204);

	gotoXY(53, 6); cout << char(222);
	gotoXY(53, 7); cout << char(222);
	gotoXY(53, 8); cout << char(222);
	gotoXY(53, 9); cout << char(222);
	gotoXY(53, 10); cout << char(222);
	gotoXY(53, 11); cout << char(222);
	gotoXY(50, 5); cout << char(222);
	SetColor(4, 201);
	gotoXY(55, 6); cout << char(221);
	gotoXY(55, 7); cout << char(221);
	gotoXY(55, 8); cout << char(221);
	gotoXY(55, 9); cout << char(221);
	gotoXY(55, 10); cout << char(221);
	gotoXY(55, 11); cout << char(221);
	gotoXY(58, 5); cout << char(221);
	//H
	SetColor(4, 64);
	gotoXY(61, 5); cout << " "; gotoXY(67, 5); cout << " ";
	gotoXY(61, 6); cout << " "; gotoXY(67, 6); cout << " ";
	gotoXY(61, 7); cout << " "; gotoXY(67, 7); cout << " ";
	gotoXY(61, 8); cout << " "; gotoXY(67, 8); cout << " ";
	gotoXY(61, 9); cout << " "; gotoXY(67, 9); cout << " ";
	gotoXY(61, 10); cout << " "; gotoXY(67, 10); cout << " ";
	gotoXY(61, 11); cout << " "; gotoXY(67, 11); cout << " ";
	gotoXY(62, 8); cout << " "; gotoXY(63, 8); cout << " "; gotoXY(64, 8); cout << " "; gotoXY(65, 8); cout << " ";
	gotoXY(66, 8); cout << " ";
	SetColor(4, 204);
	gotoXY(60, 5); cout << char(222);
	gotoXY(60, 6); cout << char(222);
	gotoXY(60, 7); cout << char(222);
	gotoXY(60, 8); cout << char(222);
	gotoXY(60, 9); cout << char(222);
	gotoXY(60, 10); cout << char(222);
	gotoXY(60, 11); cout << char(222);
	gotoXY(66, 5); cout << char(222);
	gotoXY(66, 6); cout << char(222);
	gotoXY(66, 7); cout << char(222);
	gotoXY(66, 9); cout << char(222);
	gotoXY(66, 10); cout << char(222);
	gotoXY(66, 11); cout << char(222);
	SetColor(4, 201);
	gotoXY(62, 5); cout << char(221);
	gotoXY(62, 6); cout << char(221);
	gotoXY(62, 7); cout << char(221);
	gotoXY(62, 9); cout << char(221);
	gotoXY(62, 10); cout << char(221);
	gotoXY(62, 11); cout << char(221);
	gotoXY(68, 5); cout << char(221);
	gotoXY(68, 6); cout << char(221);
	gotoXY(68, 7); cout << char(221);
	gotoXY(68, 9); cout << char(221);
	gotoXY(68, 10); cout << char(221);
	gotoXY(68, 11); cout << char(221);
	gotoXY(68, 8); cout << char(221);
	//A
	SetColor(4, 64);
	gotoXY(72, 7); cout << " "; gotoXY(78, 7); cout << " ";
	gotoXY(72, 8); cout << " "; gotoXY(78, 8); cout << " ";
	gotoXY(72, 9); cout << " "; gotoXY(78, 9); cout << " ";
	gotoXY(72, 10); cout << " "; gotoXY(78, 10); cout << " ";
	gotoXY(72, 11); cout << " "; gotoXY(78, 11); cout << " ";
	SetColor(4, 8);
	gotoXY(73, 6); cout << char(220);
	gotoXY(74, 5); cout << " ";
	SetColor(4, 87);
	gotoXY(77, 6); cout << char(220);
	gotoXY(76, 5); cout << " ";
	SetColor(4, 199);
	gotoXY(74, 6); cout << char(223);
	gotoXY(76, 6); cout << char(223);

	SetColor(4, 64);
	gotoXY(75, 5); cout << " ";
	gotoXY(73, 9); cout << " "; gotoXY(74, 9); cout << " "; gotoXY(75, 9); cout << " "; gotoXY(76, 9); cout << " ";
	gotoXY(77, 9); cout << " ";
	SetColor(4, 204);
	gotoXY(71, 7); cout << char(222);
	gotoXY(71, 8); cout << char(222);
	gotoXY(71, 9); cout << char(222);
	gotoXY(71, 10); cout << char(222);
	gotoXY(71, 11); cout << char(222);
	gotoXY(77, 7); cout << char(222);
	gotoXY(77, 8); cout << char(222);
	gotoXY(77, 10); cout << char(222);
	gotoXY(77, 11); cout << char(222);
	/*gotoXY(76, 6); cout << char(222);
	gotoXY(75, 6); cout << char(222);*/
	SetColor(4, 201);
	gotoXY(79, 7); cout << char(221);
	gotoXY(79, 8); cout << char(221);
	gotoXY(79, 9); cout << char(221);
	gotoXY(79, 10); cout << char(221);
	gotoXY(79, 11); cout << char(221);
	gotoXY(73, 7); cout << char(221);
	gotoXY(73, 8); cout << char(221);
	gotoXY(73, 10); cout << char(221);
	gotoXY(73, 11); cout << char(221);
	//N
	SetColor(4, 64);
	gotoXY(83, 5); cout << " "; gotoXY(89, 6); cout << " ";
	gotoXY(83, 6); cout << " "; gotoXY(89, 7); cout << " ";
	gotoXY(83, 7); cout << " "; gotoXY(89, 8); cout << " ";
	gotoXY(83, 8); cout << " "; gotoXY(89, 9); cout << " ";
	gotoXY(83, 9); cout << " "; gotoXY(89, 10); cout << " ";
	gotoXY(83, 10); cout << " "; gotoXY(89, 11); cout << " ";
	gotoXY(83, 11); cout << " "; gotoXY(89, 5); cout << " ";
	gotoXY(84, 6); cout << " ";
	gotoXY(85, 7); cout << " ";
	gotoXY(86, 8); cout << " ";
	gotoXY(87, 9); cout << " ";
	gotoXY(88, 9); cout << " ";
	SetColor(4, 204);
	gotoXY(82, 5); cout << char(222);
	gotoXY(82, 6); cout << char(222);
	gotoXY(82, 7); cout << char(222);
	gotoXY(82, 8); cout << char(222);
	gotoXY(82, 9); cout << char(222);
	gotoXY(82, 10); cout << char(222);
	gotoXY(82, 11); cout << char(222);
	gotoXY(88, 5); cout << char(222);
	gotoXY(88, 6); cout << char(222);
	gotoXY(88, 7); cout << char(222);
	gotoXY(88, 8); cout << char(222);
	gotoXY(88, 10); cout << char(222);
	gotoXY(88, 11); cout << char(222);
	SetColor(4, 201);
	gotoXY(90, 5); cout << char(221);
	gotoXY(90, 6); cout << char(221);
	gotoXY(90, 7); cout << char(221);
	gotoXY(90, 8); cout << char(221);
	gotoXY(90, 9); cout << char(221);
	gotoXY(90, 10); cout << char(221);
	gotoXY(90, 11); cout << char(221);
	gotoXY(84, 5); cout << char(221);
	gotoXY(84, 9); cout << char(221);
	gotoXY(84, 7); cout << char(221);
	gotoXY(84, 8); cout << char(221);
	gotoXY(84, 10); cout << char(221);
	gotoXY(84, 11); cout << char(221);
	//k
	SetColor(4, 64);
	gotoXY(94, 5); cout << " "; gotoXY(98, 5); cout << " ";
	gotoXY(94, 6); cout << " "; gotoXY(98, 6); cout << " ";
	gotoXY(94, 7); cout << " "; gotoXY(97, 7); cout << " ";
	gotoXY(94, 8); cout << " "; gotoXY(96, 8); cout << " "; gotoXY(95, 8); cout << " ";
	gotoXY(94, 9); cout << " "; gotoXY(97, 9); cout << " ";
	gotoXY(94, 10); cout << " "; gotoXY(98, 10); cout << " ";
	gotoXY(94, 11); cout << " "; gotoXY(98, 11); cout << " ";
	SetColor(4, 201);
	gotoXY(93, 5); cout << char(222);
	gotoXY(93, 6); cout << char(222);
	gotoXY(93, 7); cout << char(222);
	gotoXY(93, 8); cout << char(222);
	gotoXY(93, 9); cout << char(222);
	gotoXY(93, 10); cout << char(222);
	gotoXY(93, 11); cout << char(222);
	gotoXY(99, 10); cout << char(221);
	gotoXY(99, 11); cout << char(221);
	gotoXY(98, 9); cout << char(221);
	//
	//
	SetColor(4, 204);
	gotoXY(95, 5); cout << char(221);
	gotoXY(95, 6); cout << char(221);
	gotoXY(95, 7); cout << char(221);
	gotoXY(95, 9); cout << char(221);
	gotoXY(95, 10); cout << char(221);
	gotoXY(95, 11); cout << char(221);
	gotoXY(99, 5); cout << char(221);
	gotoXY(99, 6); cout << char(221);
	gotoXY(98, 7); cout << char(221);
}

 void kiemtra(int y)
{
	if (y == 24)
	{
		tat = true;
	}
	else if (y == 14)
	{
		SetColor(15, 15);
		system("cls");
		HienTroChuot();
		file_mode = 2;
		Enter_player_Name();
		StartGame();
		Player_vs_Player();
	}
	else if (y == 16)
	{
		SetColor(15, 15);
		system("cls");
		HienTroChuot();
		PvCLV();
		SetColor(15, 15);
		system("cls");
		Enter_player_Name();
		StartGame();
		Player_Vs_Com();
	}
	else if (y == 18)
	{
		SetColor(15, 15);
		system("cls");
		HienTroChuot();
		string data;
		List_and_search(data);
		SetColor(15, 4);
		gotoXY(45, 18);
		if (t)
			LoadGame(data);
		if (p)
		{
			if (file_mode == 2)
				Player_vs_Player();
			else
				Player_Vs_Com();
		}
		else
			p = true;
		t = true;
	}
	else if (y == 20)
	{
		SetColor(15, 15);
		system("cls");
		if (sound_on) PlaySound(TEXT("Am-thanh-phep-thuat-xuat-hien-ngan-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
		About_Menu();
	}
	else if (y == 22)
	{
		SetColor(15, 15);
		system("cls");
		if (sound_on) PlaySound(TEXT("Am-thanh-phep-thuat-xuat-hien-ngan-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
		help();
	}
}

 void ve_thang_menu()
{
	int a = 7; int b = -2;
	SetColor(14, 0);
	gotoXY(60 + a, 15 + b);
	printf("%c", 220);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	printf("%c", 220);
	gotoXY(60 + a, 16 + b); printf("%c", 219);
	gotoXY(60 + a, 17 + b); printf("%c", 223);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	gotoXY(91 - 8 + a, 16 + b); printf("%c", 219);
	gotoXY(91 - 8 + a, 17 + b); printf("%c", 223);
	gotoXY(60 + 4 + a, 17 + b);
	printf("%c", 220);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	printf("%c", 220);
	gotoXY(60 + 4 + a, 18 + b); printf("%c", 219);
	gotoXY(60 + 4 + a, 19 + b); printf("%c", 223);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	gotoXY(91 + 4 - 8 + a, 18 + b); printf("%c", 219);
	gotoXY(91 + 4 - 8 + a, 19 + b); printf("%c", 223);

	gotoXY(60 + 8 + a, 19 + b);
	printf("%c", 220);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	printf("%c", 220);
	gotoXY(60 + 8 + a, 20 + b); printf("%c", 219);
	gotoXY(60 + 8 + a, 21 + b); printf("%c", 223);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	gotoXY(91 + 8 - 8 + a, 20 + b); printf("%c", 219);
	gotoXY(91 + 8 - 8 + a, 21 + b); printf("%c", 223);

	gotoXY(60 + 12 + a, 21 + b);
	printf("%c", 220);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	printf("%c", 220);
	gotoXY(60 + 12 + a, 22 + b); printf("%c", 219);
	gotoXY(60 + 12 + a, 23 + b); printf("%c", 223);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	gotoXY(91 + 12 - 8 + a, 22 + b); printf("%c", 219);
	gotoXY(91 + 12 - 8 + a, 23 + b); printf("%c", 223);

	gotoXY(60 + 16 + a, 23 + b);
	printf("%c", 220);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	printf("%c", 220);
	gotoXY(60 + 16 + a, 24 + b); printf("%c", 219);
	gotoXY(60 + 16 + a, 25 + b); printf("%c", 223);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	gotoXY(91 + 16 - 8 + a, 24 + b); printf("%c", 219);
	gotoXY(91 + 16 - 8 + a, 25 + b); printf("%c", 223);

	gotoXY(60 + 20 + a, 25 + b);
	printf("%c", 220);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	printf("%c", 220);
	gotoXY(60 + 20 + a, 26 + b); printf("%c", 219);
	gotoXY(60 + 20 + a, 27 + b); printf("%c", 223);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	gotoXY(91 + 20 - 8 + a, 26 + b); printf("%c", 219);
	gotoXY(91 + 20 - 8 + a, 27 + b); printf("%c", 223);
}

 void nguoi_ngoai_hanh_tinh()
{
	SetColor(15, 6);
	for (int i = 0; i < 118; i = i + 7)
	{
		for (int j = 0; j < 30; j = j + 3) {
			gotoXY(i, j); printf("%c", 2);
		}
	}
}

 void UFO()
{
	int x = 78, y = 0;
	SetColor(113, 113);
	for (int i = x; i < x + 6; i++)
	{
		gotoXY(i, y);		printf("%c", 219);
	}
	for (int i = x - 4; i < x + 10; i++)
	{
		gotoXY(i, y + 1);	printf("%c", 219);
	}
	for (int i = x - 7; i < x + 13; i++)
	{
		gotoXY(i, y + 2);	printf("%c", 219);
	}
	for (int i = x - 9; i < x + 15; i++)
	{
		gotoXY(i, y + 3);	printf("%c", 219);
	}
	for (int i = x - 9; i < x + 15; i++)
	{
		gotoXY(i, y + 4);	printf("%c", 219);
	}
	SetColor(9, 9);
	for (int i = x + 3; i < x + 7; i++)
	{
		gotoXY(i, y + 1);	cout << " ";
	}
	for (int i = x + 5; i < x + 10; i++)
	{
		gotoXY(i, y + 2);	cout << " ";
	}
	for (int i = x + 8; i < x + 10; i++)
	{
		gotoXY(i, y + 3);	cout << " ";
	}
	SetColor(23, 15);
	for (int i = x - 13; i < x + 19; i++)
	{
		gotoXY(i, y + 5);	cout << " ";
	}
	SetColor(40, 15);
	for (int i = x - 15; i < x + 21; i++)
	{
		gotoXY(i, y + 6);	cout << " ";
	}
	SetColor(136, 15);
	for (int i = x - 17; i < x + 23; i++)
	{
		gotoXY(i, y + 7);	cout << " ";
	}
	SetColor(58, 15);//xanh la
	gotoXY(x - 15, y + 7);	cout << "  ";
	gotoXY(x - 11, y + 7);	cout << "  ";
	gotoXY(x - 6, y + 7);	cout << "  ";
	gotoXY(x - 2, y + 7);	cout << "  ";
	gotoXY(x + 6, y + 7);	cout << "  ";
	gotoXY(x + 10, y + 7);	cout << "  ";
	gotoXY(x + 15, y + 7);	cout << "  ";
	gotoXY(x + 19, y + 7);	cout << "  ";
	SetColor(0, 0);//den
	gotoXY(x - 15, y + 8);	printf("%c%c", 219, 219);
	gotoXY(x - 13, y + 9);	printf("%c%c", 219, 219);
	gotoXY(x + 19, y + 8);	printf("%c%c", 219, 219);
	gotoXY(x + 17, y + 9);	printf("%c%c", 219, 219);
	SetColor(25, 25);//xanh duong
	gotoXY(x - 13, y + 8);	printf("%c%c", 219, 219);
	gotoXY(x - 11, y + 9);	printf("%c%c", 219, 219);
	gotoXY(x - 9, y + 10);	printf("%c%c", 219, 219);
	gotoXY(x + 17, y + 8);	printf("%c%c", 219, 219);
	gotoXY(x + 15, y + 9);	printf("%c%c", 219, 219);
	gotoXY(x + 13, y + 10);	printf("%c%c", 219, 219);
	SetColor(56, 56);//xam
	gotoXY(x - 11, y + 8);	printf("%c%c", 219, 219);
	gotoXY(x - 9, y + 9);	printf("%c%c", 219, 219);
	gotoXY(x + 15, y + 8);	printf("%c%c", 219, 219);
	gotoXY(x + 13, y + 9);	printf("%c%c", 219, 219);
	for (int i = x - 7; i < x + 13; i++)
	{
		gotoXY(i, y + 10); printf("%c", 219);
	}
	SetColor(15, 70);//xam trang
	for (int i = x - 7; i < x + 13; i++)
	{
		gotoXY(i, y + 9); printf("%c", 219);
	}
	SetColor(23, 15);
	for (int i = x - 9; i < x + 15; i++)
	{
		gotoXY(i, y + 8); cout << " ";
	}

}

 void vetinh()
{
	int a = 9;
	SetColor(7, 31);
	gotoXY(12 + a, 10); cout << " ";
	gotoXY(13 + a, 10); cout << char(220); gotoXY(14 + a, 10); cout << char(220); gotoXY(15 + a, 10); cout << char(220);
	gotoXY(16 + a, 10); cout << " ";
	gotoXY(13 + a, 11); cout << " "; gotoXY(15 + a, 11); cout << " ";
	SetColor(7, 0);
	gotoXY(14 + a, 11); cout << " ";
	SetColor(8, 223);
	gotoXY(12 + a, 12); cout << " "; gotoXY(16 + a, 12); cout << " ";
	gotoXY(12 + a, 13); cout << " "; gotoXY(16 + a, 13); cout << " ";
	gotoXY(12 + a, 14); cout << " "; gotoXY(16 + a, 14); cout << " ";
	gotoXY(12 + a, 15); cout << " "; gotoXY(16 + a, 15); cout << " ";
	gotoXY(12 + a, 16); cout << " "; gotoXY(16 + a, 16); cout << " ";
	gotoXY(12 + a, 17); cout << " "; gotoXY(16 + a, 17); cout << " ";
	gotoXY(12 + a, 18); cout << " "; gotoXY(13 + a, 18); cout << " "; gotoXY(14 + a, 18); cout << " "; gotoXY(15 + a, 18); cout << " ";
	gotoXY(16 + a, 18); cout << " ";
	SetColor(8, 221);
	gotoXY(13 + a, 12); cout << char(220); gotoXY(15 + a, 12); cout << char(220);
	SetColor(8, 95);
	gotoXY(13 + a, 13); cout << " "; gotoXY(13 + a, 14); cout << " ";
	gotoXY(13 + a, 15); cout << " "; gotoXY(13 + a, 16); cout << " ";
	gotoXY(15 + a, 13); cout << " "; gotoXY(15 + a, 14); cout << " ";
	gotoXY(15 + a, 15); cout << " "; gotoXY(15 + a, 16); cout << " ";
	gotoXY(13 + a, 17); cout << " "; gotoXY(15 + a, 17); cout << " ";
	SetColor(8, 211);
	gotoXY(14 + a, 12); cout << char(220);
	SetColor(8, 191);
	gotoXY(14 + a, 13); cout << " ";
	gotoXY(14 + a, 14); cout << " ";
	gotoXY(14 + a, 15); cout << " ";
	gotoXY(14 + a, 16); cout << " ";
	gotoXY(14 + a, 17); cout << " ";
	//canh
	SetColor(3, 95);
	gotoXY(17 + a, 16); cout << " ";
	gotoXY(17 + a, 14); cout << " "; gotoXY(18 + a, 13); cout << char(223);
	gotoXY(17 + a, 15); cout << " "; gotoXY(18 + a, 17); cout << char(220); gotoXY(19 + a, 13); cout << char(223)
		; gotoXY(19 + a, 17); cout << char(220);
	gotoXY(20 + a, 13); cout << char(223);
	gotoXY(20 + a, 17); cout << char(220);
	gotoXY(21 + a, 13); cout << char(223); gotoXY(22 + a, 13); cout << char(223);
	gotoXY(21 + a, 17); cout << char(220); gotoXY(22 + a, 17); cout << char(220);
	gotoXY(23 + a, 13); cout << char(223); gotoXY(23 + a, 17); cout << char(220);
	gotoXY(24 + a, 13); cout << char(223); gotoXY(24 + a, 17); cout << char(220);
	gotoXY(25 + a, 13); cout << char(223); gotoXY(25 + a, 17); cout << char(220);
	gotoXY(26 + a, 13); cout << char(223); gotoXY(26 + a, 17); cout << char(220);
	gotoXY(27 + a, 13); cout << char(223); gotoXY(27 + a, 17); cout << char(220);
	gotoXY(28 + a, 14); cout << " ";
	gotoXY(28 + a, 15); cout << " ";
	gotoXY(28 + a, 16); cout << " ";
	SetColor(3, 71);
	gotoXY(19 + a, 14); cout << char(223); gotoXY(20 + a, 14); cout << char(223); gotoXY(21 + a, 14); cout << char(223);
	gotoXY(19 + a, 16); cout << char(220); gotoXY(20 + a, 16); cout << char(220); gotoXY(21 + a, 16); cout << char(220);
	gotoXY(24 + a, 14); cout << char(223); gotoXY(25 + a, 14);  cout << char(223); gotoXY(26 + a, 14); cout << char(223);
	gotoXY(24 + a, 16); cout << char(220); gotoXY(25 + a, 16); cout << char(220); gotoXY(26 + a, 16); cout << char(220);
	SetColor(3, 80);
	gotoXY(19 + a, 15); cout << " "; gotoXY(20 + a, 15); cout << " "; gotoXY(21 + a, 15); cout << " "; gotoXY(22 + a, 15); cout << " ";
	gotoXY(25 + a, 15); cout << " "; gotoXY(26 + a, 15); cout << " "; gotoXY(27 + a, 15); cout << " "; gotoXY(23 + a, 15); cout << " ";
	gotoXY(24 + a, 15); cout << " "; gotoXY(18 + a, 15); cout << " ";
	gotoXY(27 + a, 14); cout << " "; gotoXY(18 + a, 14); cout << " ";
	gotoXY(27 + a, 14); cout << " "; gotoXY(18 + a, 14); cout << " ";
	gotoXY(27 + a, 16); cout << " "; gotoXY(18 + a, 16); cout << " ";
	gotoXY(23 + a, 14); cout << " "; gotoXY(22 + a, 14); cout << " ";
	gotoXY(23 + a, 16); cout << " "; gotoXY(22 + a, 16); cout << " ";
	//canh trai
	SetColor(3, 95);
	gotoXY(0 + a, 16); cout << " ";
	gotoXY(0 + a, 14); cout << " "; gotoXY(1 + a, 13); cout << char(223);
	gotoXY(0 + a, 15); cout << " "; gotoXY(1 + a, 17); cout << char(220); gotoXY(2 + a, 13); cout << char(223)
		; gotoXY(2 + a, 17); cout << char(220);
	gotoXY(3 + a, 13); cout << char(223);
	gotoXY(3 + a, 17); cout << char(220);
	gotoXY(4 + a, 13); cout << char(223); gotoXY(5 + a, 13); cout << char(223);
	gotoXY(4 + a, 17); cout << char(220); gotoXY(5 + a, 17); cout << char(220);
	gotoXY(6 + a, 13); cout << char(223); gotoXY(6 + a, 17); cout << char(220);
	gotoXY(7 + a, 13); cout << char(223); gotoXY(7 + a, 17); cout << char(220);
	gotoXY(8 + a, 13); cout << char(223); gotoXY(8 + a, 17); cout << char(220);
	gotoXY(9 + a, 13); cout << char(223); gotoXY(9 + a, 17); cout << char(220);
	gotoXY(10 + a, 13); cout << char(223); gotoXY(10 + a, 17); cout << char(220);
	gotoXY(11 + a, 14); cout << " ";
	gotoXY(11 + a, 15); cout << " ";
	gotoXY(11 + a, 16); cout << " ";
	SetColor(3, 71);
	gotoXY(2 + a, 14); cout << char(223); gotoXY(3 + a, 14); cout << char(223); gotoXY(4 + a, 14); cout << char(223);
	gotoXY(2 + a, 16); cout << char(220); gotoXY(3 + a, 16); cout << char(220); gotoXY(4 + a, 16); cout << char(220);
	gotoXY(7 + a, 14); cout << char(223); gotoXY(8 + a, 14);  cout << char(223); gotoXY(9 + a, 14); cout << char(223);
	gotoXY(7 + a, 16); cout << char(220); gotoXY(8 + a, 16); cout << char(220); gotoXY(9 + a, 16); cout << char(220);
	SetColor(3, 80);

	gotoXY(2 + a, 15); cout << " "; gotoXY(3 + a, 15); cout << " "; gotoXY(4 + a, 15); cout << " "; gotoXY(5 + a, 15); cout << " ";
	gotoXY(8 + a, 15); cout << " "; gotoXY(9 + a, 15); cout << " "; gotoXY(10 + a, 15); cout << " "; gotoXY(6 + a, 15); cout << " ";
	gotoXY(7 + a, 15); cout << " "; gotoXY(1 + a, 15); cout << " ";
	gotoXY(10 + a, 14); cout << " "; gotoXY(1 + a, 14); cout << " ";
	gotoXY(10 + a, 14); cout << " "; gotoXY(1 + a, 14); cout << " ";
	gotoXY(10 + a, 16); cout << " "; gotoXY(1 + a, 16); cout << " ";
	gotoXY(6 + a, 14); cout << " "; gotoXY(5 + a, 14); cout << " ";
	gotoXY(6 + a, 16); cout << " "; gotoXY(5 + a, 16); cout << " ";
	SetColor(4, 79);
	gotoXY(14 + a, 19); cout << char(220);
	gotoXY(13 + a, 19); cout << char(223); gotoXY(15 + a, 19); cout << char(223);
	gotoXY(11 + a, 20); cout << char(220); gotoXY(12 + a, 20); cout << char(220); gotoXY(16 + a, 20); cout << char(220); gotoXY(17 + a, 20); cout << char(220);
	gotoXY(10 + a, 20); cout << char(223); gotoXY(18 + a, 20); cout << char(223);
	gotoXY(9 + a, 21);  cout << char(220); gotoXY(10 + a, 21);  cout << char(220); gotoXY(11 + a, 21);  cout << char(220); gotoXY(12 + a, 21);  cout << char(220);
	gotoXY(13 + a, 21);  cout << char(220); gotoXY(14 + a, 21);  cout << " "; gotoXY(15 + a, 21);  cout << char(220);
	gotoXY(18 + a, 21);  cout << char(220); gotoXY(17 + a, 21);  cout << char(220); gotoXY(16 + a, 21);  cout << char(220);
	gotoXY(19 + a, 21);  cout << char(220);
	SetColor(4, 48);
	gotoXY(14 + a, 20); cout << " "; gotoXY(15 + a, 20); cout << " "; gotoXY(13 + a, 20); cout << " ";
}

 void Chay_anh_sang()
{
	int x = 78, y = 0;
	int dem = 12;
	int count = 0;
	for (int h = 0; h < 5; h++)
	{
		SetColor(14, 15);
		dem = 12; count = 0;
		while (dem != 27)
		{
			for (int i = x - 9 - count; i < x + 15 + count; i++)
			{
				gotoXY(i, y + dem); cout << " ";
			}
			dem++;
			count += 2;
			Sleep(20);
		}
		SetColor(15, 15);
		dem = 12; count = 0;
		while (dem != 27)
		{
			for (int i = x - 9 - count; i < x + 15 + count; i++)
			{
				gotoXY(i, y + dem); cout << " ";
			}
			dem++;
			count += 2;
		}
		Sleep(700);
	}
}

 void VeLoa()
{
	SetColor(14, 0);
	int x = 57, y = 20, a = 5;//15,9
	gotoXY(44, 25);
	cout << "Press X to ";
	gotoXY(42, 26); cout << "Turn/Off Sound";
	gotoXY(x, y);
	for (int i = 0; i < a; i++)
	{
		gotoXY(x, y + i);
		printf("%c", 219);
		gotoXY(x - 1, y + i);
		printf("%c", 219);
	}
	for (int i = 0; i < a - 2; i++)
	{
		gotoXY(x - 2, y + 1 + i);
		printf("%c", 219);
	}
	gotoXY(x - 2, y); printf("%c", 220);
	gotoXY(x - 2, y + a - 1); printf("%c", 223);
	for (int i = 0; i < a - 2; i++)
	{
		gotoXY(x - 3, y + 1 + i);
		printf("%c", 219);
	}
	for (int i = 0; i < a - 4; i++)
	{
		gotoXY(x - 4, y + 2 + i);
		printf("%c", 219);
	}
	gotoXY(x - 4, y + 1); printf("%c", 220);
	gotoXY(x - 4, y + a - 2); printf("%c", 223);
	for (int i = 0; i < a - 4; i++)
	{
		gotoXY(x - 5, y + 2 + i);
		printf("%c", 219);
		gotoXY(x - 7, y + 2 + i);
		printf("%c", 219);
	}
}

 void Bat_Tat_Loa(int check)
{
	int x = 57, y = 20;
	int c = -2; int d = 0;
	if (check == 1)
	{
		SetColor(14, 14);
		gotoXY(x + 2, y + 2 - 2);
		printf("%c       %c", 254, 254);
		gotoXY(x + 4, y + 3 - 2);
		printf("%c   %c", 254, 254);
		gotoXY(x + 6, y + 4 - 2);
		printf("%c", 254);
		gotoXY(x + 4, y + 5 - 2);
		printf("%c   %c", 254, 254);
		gotoXY(x + 2, y + 6 - 2);
		printf("%c       %c", 254, 254);

		SetColor(14, 0);
		gotoXY(x + 2 + d, y + 2 + c);
		printf("%c", 254);
		gotoXY(x + 4 + d, y + 1 + c);
		printf("%c", 254);
		gotoXY(x + 6 + d, y + c);
		printf("%c", 254);
		gotoXY(x + 3 + d - 1, y + 4 + c);
		printf("%c %c %c", 254, 254, 254);
		gotoXY(x + 2 + d, y + 6 + c);
		printf("%c", 254);
		gotoXY(x + 4 + d, y + 7 + c);
		printf("%c", 254);
		gotoXY(x + 6 + d, y + 8 + c);
		printf("%c", 254);
	}
	//Tat loa
	else if (check == -1)
	{
		SetColor(14, 14);
		gotoXY(x + 2 + d, y + 2 + c);
		printf("%c", 254);
		gotoXY(x + 4 + d, y + 1 + c);
		printf("%c", 254);
		gotoXY(x + 6 + d, y + c);
		printf("%c", 254);
		gotoXY(x + 3 + d - 1, y + 4 + c);
		printf("%c %c %c", 254, 254, 254);
		gotoXY(x + 2 + d, y + 6 + c);
		printf("%c", 254);
		gotoXY(x + 4 + d, y + 7 + c);
		printf("%c", 254);
		gotoXY(x + 6 + d, y + 8 + c);
		printf("%c", 254);

		SetColor(14, 0);
		gotoXY(x + 2, y + 2 - 2);
		printf("%c       %c", 254, 254);
		gotoXY(x + 4, y + 3 - 2);
		printf("%c   %c", 254, 254);
		gotoXY(x + 6, y + 4 - 2);
		printf("%c", 254);
		gotoXY(x + 4, y + 5 - 2);
		printf("%c   %c", 254, 254);
		gotoXY(x + 2, y + 6 - 2);
		printf("%c       %c", 254, 254);
	}
}