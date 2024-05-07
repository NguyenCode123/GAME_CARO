#include"Chuc_nang_che_do.h"

 void Huong_dan_phim_tat()
{
	SetColor(15, 0);
	gotoXY(74, 1); printf("%c", 220);
	for (int i = 0; i < 6; i++)
		printf("%c", 254);
	cout << " Phim tat ";
	for (int i = 0; i < 6; i++)
		printf("%c", 254);
	printf("%c", 220);
	for (int i = 0; i < 9; i++)
	{
		gotoXY(74, 2 + i);
		printf("%c", 219);
	}
	gotoXY(74, 11);
	printf("%c", 223);
	for (int i = 0; i < 22; i++)
		printf("%c", 254);
	printf("%c", 223);
	for (int i = 0; i < 9; i++)
	{
		gotoXY(97, 2 + i);
		printf("%c", 219);
	}
	gotoXY(76, 2); cout << ".-----.";
	gotoXY(76, 3); cout << "|  L  |    Save Game";
	gotoXY(76, 4); cout << "'-----'";
	gotoXY(76, 5); cout << ".-----.";
	gotoXY(76, 6); cout << "|  E  |    Resume";
	gotoXY(76, 7); cout << "'-----'";
	gotoXY(76, 8); cout << ".-----.";
	gotoXY(76, 9); cout << "| ESC |    Out Game";
	gotoXY(76, 10); cout << "'-----'";
	gotoXY(55, 22); cout << ".-----.";
	gotoXY(55, 23); cout << "|  G  |    Hint";
	gotoXY(55, 24); cout << "'-----'";

}

 int Want_to_continue()
{
	AnTroChuot();
	SetColor(4, 4);
	gotoXY(73, 11); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(73, 12); cout << "x"; gotoXY(98, 12); cout << "x";
	gotoXY(73, 13); cout << "x"; gotoXY(98, 13); cout << "x";
	gotoXY(73, 14); cout << "x"; gotoXY(98, 14); cout << "x";
	gotoXY(73, 15); cout << "x"; gotoXY(98, 15); cout << "x";
	gotoXY(73, 16); cout << "x"; gotoXY(98, 16); cout << "x";
	gotoXY(73, 17); cout << "x"; gotoXY(98, 17); cout << "x";
	gotoXY(73, 18); cout << "x"; gotoXY(98, 18); cout << "x";
	gotoXY(73, 18); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(11, 11);
	gotoXY(74, 12); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 13); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 14); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 15); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 16); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 17); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(11, 0);
	gotoXY(77, 13); cout << "Want to continue ?";
	SetColor(11, 0);
	gotoXY(90, 16); cout << " NO ";
	SetColor(6, 4);
	gotoXY(78, 16); cout << " YES ";
	int _command_yes_no;
	int vi_tri = 78;
	bool possition = true;
	while (1)
	{
		_command_yes_no = _getch();
		if (_command_yes_no == -32)
			_command_yes_no = _getch();
		if (_command_yes_no == 75)
		{
			if (vi_tri == 90)
			{
				if (sound_on)
					if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				vi_tri -= 12;
				SetColor(11, 0);
				gotoXY(90, 16); cout << " NO ";
				SetColor(6, 4);
				gotoXY(78, 16); cout << " YES ";
				possition = true;
			}
		}
		else if (_command_yes_no == 77)
		{
			if (vi_tri == 78)
			{
				if (sound_on)
					if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				vi_tri += 12;
				SetColor(11, 0);
				gotoXY(78, 16); cout << " YES ";
				SetColor(6, 4);
				gotoXY(90, 16); cout << " NO ";
				possition = false;
			}
		}
		else if (possition == true && _command_yes_no == 13)
		{
			if (sound_on)
				if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return 1;
		}
		else if (possition == false && _command_yes_no == 13)
		{
			if (sound_on)
				if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
			return -1;
		}
	}
	HienTroChuot();
}

 void  Want_to_resume()
{
	AnTroChuot();
	SetColor(4, 4);
	gotoXY(73, 11); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(73, 12); cout << "x"; gotoXY(98, 12); cout << "x";
	gotoXY(73, 13); cout << "x"; gotoXY(98, 13); cout << "x";
	gotoXY(73, 14); cout << "x"; gotoXY(98, 14); cout << "x";
	gotoXY(73, 15); cout << "x"; gotoXY(98, 15); cout << "x";
	gotoXY(73, 16); cout << "x"; gotoXY(98, 16); cout << "x";
	gotoXY(73, 17); cout << "x"; gotoXY(98, 17); cout << "x";
	gotoXY(73, 18); cout << "x"; gotoXY(98, 18); cout << "x";
	gotoXY(73, 18); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(11, 11);
	gotoXY(74, 12); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 13); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 14); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 15); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 16); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 17); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(11, 0);
	gotoXY(77, 13); cout << "Continue to play ?";
	SetColor(11, 12);
	gotoXY(75, 15); cout << "Press P if you're ready";
	int _command_yes_no;
	while (true)
	{
		_command_yes_no = toupper(_getch());
		if (_command_yes_no == 'P')
		{
			SetColor(15, 15);
			gotoXY(73, 11); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
			gotoXY(73, 12); cout << "x"; gotoXY(98, 12); cout << "x";
			gotoXY(73, 13); cout << "x"; gotoXY(98, 13); cout << "x";
			gotoXY(73, 14); cout << "x"; gotoXY(98, 14); cout << "x";
			gotoXY(73, 15); cout << "x"; gotoXY(98, 15); cout << "x";
			gotoXY(73, 16); cout << "x"; gotoXY(98, 16); cout << "x";
			gotoXY(73, 17); cout << "x"; gotoXY(98, 17); cout << "x";
			gotoXY(73, 18); cout << "x"; gotoXY(98, 18); cout << "x";
			gotoXY(73, 18); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
			gotoXY(74, 12); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
			gotoXY(74, 13); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
			gotoXY(74, 14); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
			gotoXY(74, 15); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
			gotoXY(74, 16); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
			gotoXY(74, 17); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
			Huong_dan_phim_tat();
			Ve_clock();
			check_time_or_not_time = 0;
			break;
		}
	}
	HienTroChuot();
}

 void Want_To_Save_Game()
{
	AnTroChuot();
	SetColor(4, 4);
	gotoXY(73, 11); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(73, 12); cout << "x"; gotoXY(98, 12); cout << "x";
	gotoXY(73, 13); cout << "x"; gotoXY(98, 13); cout << "x";
	gotoXY(73, 14); cout << "x"; gotoXY(98, 14); cout << "x";
	gotoXY(73, 15); cout << "x"; gotoXY(98, 15); cout << "x";
	gotoXY(73, 16); cout << "x"; gotoXY(98, 16); cout << "x";
	gotoXY(73, 17); cout << "x"; gotoXY(98, 17); cout << "x";
	gotoXY(73, 18); cout << "x"; gotoXY(98, 18); cout << "x";
	gotoXY(73, 18); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(11, 11);
	gotoXY(74, 12); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 13); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 14); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 15); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 16); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 17); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(11, 0);
	gotoXY(77, 13); cout << "Want to save game ?";
	SetColor(11, 0);
	gotoXY(90, 16); cout << " NO ";
	SetColor(6, 4);
	gotoXY(78, 16); cout << " YES ";
	int _command_yes_no;
	int vi_tri = 78;
	bool possition = true;
	while (1)
	{
		_command_yes_no = _getch();
		if (_command_yes_no == -32)
			_command_yes_no = _getch();
		if (_command_yes_no == 75)
		{
			if (vi_tri == 90)
			{
				if (sound_on)
					PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				vi_tri -= 12;
				SetColor(11, 0);
				gotoXY(90, 16); cout << " NO ";
				SetColor(6, 4);
				gotoXY(78, 16); cout << " YES ";
				possition = true;
			}
		}
		else if (_command_yes_no == 77)
		{
			if (vi_tri == 78)
			{
				if (sound_on)
					PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				vi_tri += 12;
				SetColor(11, 0);
				gotoXY(78, 16); cout << " YES ";
				SetColor(6, 4);
				gotoXY(90, 16); cout << " NO ";
				possition = false;
			}
		}
		else if (possition == true && _command_yes_no == 13)
		{
			if (sound_on)
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SaveGame(-5);
			check_exit = 1;
			break;
		}
		else if (possition == false && _command_yes_no == 13)
		{
			if (sound_on)
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
			check_exit = 1;
			break;
		}
	}
	HienTroChuot();
}

