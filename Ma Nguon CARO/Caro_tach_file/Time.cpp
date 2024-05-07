#include"Time.h"

 void Ve_clock()
{
	char c;
	SetColor(8, 8);
	gotoXY(75, 15); printf("%c", 219);
	gotoXY(75, 14); printf("%c", 219); printf("%c", 219); printf("%c", 219);
	gotoXY(76, 13); printf("%c", 219); printf("%c", 219);
	gotoXY(81, 13);
	for (int i = 0; i < 11; i++)
		printf("%c", 219);
	SetColor(5, 5);
	gotoXY(78, 25); printf("%c", 219); printf("%c", 219); printf("%c", 219); printf("%c", 219);
	gotoXY(91, 25); printf("%c", 219); printf("%c", 219); printf("%c", 219); printf("%c", 219);
	gotoXY(78, 14);
	for (int i = 0; i < 17; i++)
		printf("%c", 219);
	SetColor(8, 8); printf("%c", 219); printf("%c", 219); printf("%c", 219);
	gotoXY(95, 13); printf("%c", 219); printf("%c", 219);
	gotoXY(97, 15); printf("%c", 219);
	SetColor(5, 5);
	gotoXY(95, 15); printf("%c", 219); printf("%c", 219);
	gotoXY(76, 15); printf("%c", 219); printf("%c", 219);
	for (int i = 0; i < 8; i++)
	{
		gotoXY(75, 16 + i); printf("%c", 219); printf("%c", 219);
	}
	gotoXY(76, 24); printf("%c", 219); printf("%c", 219);
	for (int i = 0; i < 19; i++)
		printf("%c", 219);
	for (int i = 0; i < 8; i++)
	{
		gotoXY(96, 16 + i); printf("%c", 219); printf("%c", 219);
	}
	SetColor(0, 15);
	gotoXY(82, 25);
	cout << "  Time   ";
}

 void count_time(int h)
{
	SetColor(14, 14);
	gotoXY(78, 14 + 2 - 1); cout << "xxxxxxxxxxxxxxxxx";
	for (int i = 0; i < 8; i++)
	{
		gotoXY(77, 14 + 2 + i); cout << "xxxxxxxxxxxxxxxxxxx";
	}
	if (_TURN == true) SetColor(4, 4);
	else SetColor(1, 1);
	if (h == 11)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxxxx";
		gotoXY(80 + 1, 20 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(89 + 1, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 4; i++)
		{
			gotoXY(80 + 1, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(80 + 1, 18 + 2 + i); cout << "xx";
		}
	}
	if (h == 10)
	{
		for (int i = 0; i < 7; i++)
		{
			gotoXY(80 + 5, 14 + 2 + i); cout << "xxx";
		}
	}
	if (h == 9)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(89 + 1, 14 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 17 + 2); cout << "xxxxxxxxx";
		for (int i = 0; i < 3; i++)
		{
			gotoXY(80 + 1, 18 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 20 + 2); cout << "xxxxxxxxxxx";
	}
	if (h == 8)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(89 + 1, 14 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 17 + 2); cout << "xxxxxxxxx";
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 20 + 2); cout << "xxxxxxxxxxx";
	}
	if (h == 7)
	{
		for (int i = 0; i < 4; i++)
		{
			gotoXY(80 + 1, 14 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 17 + 2); cout << "xxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(89 + 1, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
	}
	if (h == 6)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(80 + 1, 14 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 17 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 20 + 2); cout << "xxxxxxxxxxx";
	}
	if (h == 5)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(80 + 1, 14 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 17 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
		gotoXY(80 + 1, 20 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 3; i++)
		{
			gotoXY(80 + 1, 18 + 2 + i); cout << "xx";
		}
	}
	if (h == 4)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(89 + 1, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
	}
	if (h == 3)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxxxx";
		gotoXY(80 + 1, 17 + 2); cout << "xxxxxxxxxxx";
		gotoXY(80 + 1, 20 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(89 + 1, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 4; i++)
		{
			gotoXY(80 + 1, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(80 + 1, 18 + 2 + i); cout << "xx";
		}
	}
	if (h == 2)
	{
		gotoXY(80 + 1, 14 + 2); cout << "xxxxxxxxxxx";
		gotoXY(80 + 1, 17 + 2); cout << "xxxxxxxxxxx";
		gotoXY(80 + 1, 20 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(89 + 1, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(89 + 1, 18 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 4; i++)
		{
			gotoXY(80 + 1, 14 + 2 + i); cout << "xx";
		}
	}
	if (h == 1)
	{
		for (int i = 0; i < 7; i++)
		{
			gotoXY(79, 14 + 2 + i); cout << "xxx";
		}
		gotoXY(83, 14 + 2); cout << "xxxxxxxxxxx";
		gotoXY(83, 20 + 2); cout << "xxxxxxxxxxx";
		for (int i = 0; i < 4; i++)
		{
			gotoXY(92, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(92, 18 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 4; i++)
		{
			gotoXY(83, 14 + 2 + i); cout << "xx";
		}
		for (int i = 0; i < 3; i++)
		{
			gotoXY(83, 18 + 2 + i); cout << "xx";
		}
	}
}

 void color_for_win_version_time(int number)
{
	int mau = 0;
	if (number == 1)
	{
		Ve_O(15, 15);
		for (int j = 0; j <= 20; j++)
		{
			mau = rand() % 14 + 1;
			ve_X(mau, mau);
			Sleep(120);
		}
		ve_X(0, 0);
		Ve_O(0, 0);
	}
	else if (number == -1)
	{
		ve_X(15, 15);
		for (int j = 0; j <= 20; j++)
		{
			mau = rand() % 14 + 1;
			Ve_O(mau, mau);
			Sleep(120);
		}
		ve_X(0, 0);
		Ve_O(0, 0);
	}
}