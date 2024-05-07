#include"main_version.h"

bool flag_ai = false;
bool flag_hint = false;
bool tat = false;
bool sound_on = true;
bool start = false;
bool q = true;
bool X_check = true;
int dif_nor = 0;
bool _TURN = TRUE;
int _COMMAND = 0;
int _X = 0, _Y = 0; int _Z = 0;
int so_o_con_trong = 0;
int x_khoi_dau = 0, y_khoi_dau = 0;
int color_number = 0;
bool Turn_win = false;
int Count_X = 0, count_O = 0;
int win_number_X = 0, win_number_O = 0;
int number_to_check_number_of_win = 9;
int check = 0;
int check_win_over_tim = 9;
int check_time_or_not_time = 9;
int check_turn_for_time_version_1 = 9;
int check_turn_for_time_version_2 = 9;
int check_exit = 9;
int check_time_for_save_game = 9;
_POINT _A[BOARD_SIZE][BOARD_SIZE] = { 0,0 };
int p = 9;
int t = 9;
int flag_turn = 9;
extern _POINT tmp_hint = { 0,0 };
int file_mode = 9;
char X[11] = "Computer";
char O[11] = "O";
string name = "";

 void FixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

 void ShowScrollbar(BOOL Show)
{
	HWND hWnd = GetConsoleWindow();
	ShowScrollBar(hWnd, SB_BOTH, Show);
}

 void main_Menu()
{
	check_time_or_not_time = 1;
	int y = 26;
	_Z = 26;
	AnTroChuot();
	if (start == false)
	{
		nguoi_ngoai_hanh_tinh();
		SetColor(14, 15);
		c();
		_a();
		r();
		o();
		C();
		A();
		R();
		_O();
		vetinh();
		UFO();
		if (q == true)
		{
			q = false;
		}
	}
	int x = 76, a = 0;
	int dem = 12; int count = 0;
	while (dem != 27)
	{
		SetColor(14, 14);
		for (int i = x - 9 - count; i < x + 15 + count; i++)
		{
			gotoXY(i, a + dem); cout << " ";
		}
		dem++;
		count += 2;
	}
	ve_thang_menu();
	Menu();
	VeLoa();
	if (sound_on)
		Bat_Tat_Loa(1);
	else
		Bat_Tat_Loa(-1);
	start = false;
	SetColor(15, 6);
	bool validEnter = true;//ki?m tra nh?n phím enter
	while (1)
	{
		_COMMAND = _getch();
		if (_COMMAND == 27)
		{
			return;
		}
		else if (_COMMAND == 'x')
		{
			if (sound_on)
			{
				sound_on = false;
				Bat_Tat_Loa(-1);
			}
			else
			{
				sound_on = true;
				Bat_Tat_Loa(1);
			}
		}
		else
		{
			if (_COMMAND == -32)
				_COMMAND = _getch();
			if (_COMMAND == 72)
			{
				if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				y = dichuyen(y);
				Move_Up();
			}
			else if (_COMMAND == 80)
			{
				if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				y = dichuyen(y);
				Move_Down();

			}
			else if (_COMMAND == 13)
			{
				if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				kiemtra(y);
				break;
			}
		}
	}
	SetColor(15, 15);
	system("cls");
	if (tat == false)
		main_Menu();
	else
	{
		system("cls");
		thank_you();
		Sleep(5000);
		SetColor(15, 0);
		system("cls");
	}
}

 void start_menu()
{
	AnTroChuot();
	Sleep(3000);
	if (sound_on) PlaySound(TEXT("Video-to-be-continued-green-screen-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
	hello();
	SetColor(15, 14);
	nguoi_ngoai_hanh_tinh();
	c();
	_a();
	r();
	o();
	vetinh();
	UFO();
	start = true;
	thread anh_sang;
	anh_sang = thread(Chay_anh_sang);
	anh_sang.detach();
	chay();
}

 void Time()
{
	SetColor(15, 30);
	int i = 1;
	while (true)
	{
		if (check_turn_for_time_version_1 == 1)
		{
			Sleep(1000);
			check_turn_for_time_version_2 = 1;
		}
		if (check == 1)
		{
			i = 1; check = 0;
		}
		if (i == 12)
		{
			i = 1;
			if (_TURN == true)
			{
				AnTroChuot();
				check_win_over_tim = 1;
				if (sound_on) PlaySound(TEXT("Am-thanh-chien-thang-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
				number_to_check_number_of_win = 1;
				color_for_win_version_time(-1);
				Draw_Table_X_or_win(1);
				SetColor(15, 0);
				check_time_or_not_time = 1;
			}
			else
			{
				AnTroChuot();
				check_win_over_tim = 1;
				if (sound_on) PlaySound(TEXT("Am-thanh-chien-thang-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
				number_to_check_number_of_win = -1;
				color_for_win_version_time(1);
				Draw_Table_X_or_win(-1);
				SetColor(15, 0);
				check_time_or_not_time = 1;
			}
		}
		while (true)
			if (check_time_or_not_time == 0)
				break;
		if (check_time_for_save_game == 1)
		{
			Sleep(11000);
		}
		check_time_for_save_game = 0;
		count_time(i);
		gotoXY(_X, _Y);
		i++;
		if (check_turn_for_time_version_2 == 1)
		{
			/*Sleep(500);*/
			check_turn_for_time_version_2 = 0;
		}
		else
		{
			Sleep(1000);
		}
	}
}

