#include"Thu_vien_va_bien_toan_cuc.h"
#include"Player_vs_Player.h"
#include"Cai_dat_he_thong.h"
#include"Player_vs_Player.h"

 void PvP()
{
	SetColor(5, 15);
	gotoXY(2, 26); cout << "   ";
	gotoXY(2, 27); cout << " "; gotoXY(4, 27); cout << " ";
	gotoXY(2, 28); cout << "   ";
	gotoXY(2, 29); cout << " ";
	gotoXY(6, 26); cout << " ";
	gotoXY(6, 27); cout << " ";
	gotoXY(6, 28); cout << " ";
	gotoXY(6, 29); cout << "  ";
	gotoXY(10, 26); cout << "  ";
	gotoXY(9, 27); cout << " "; gotoXY(12, 27); cout << " ";
	gotoXY(9, 28); cout << " "; gotoXY(12, 28); cout << " "; gotoXY(10, 28); cout << "  ";
	gotoXY(9, 29); cout << " "; gotoXY(12, 29); cout << " ";
	gotoXY(14, 26); cout << " "; gotoXY(16, 26); cout << " ";
	gotoXY(14, 27); cout << " "; gotoXY(16, 27); cout << " ";
	gotoXY(15, 28); cout << " ";
	gotoXY(15, 29); cout << " ";

	gotoXY(18, 26); cout << " "; SetColor(15, 5); gotoXY(19, 26); cout << char(223); gotoXY(20, 26); cout << char(223);
	gotoXY(21, 26); cout << char(223);
	SetColor(5, 15);
	gotoXY(18, 27); cout << " ";
	gotoXY(18, 28); cout << " "; SetColor(15, 5); gotoXY(19, 27); cout << char(220); gotoXY(20, 27); cout << char(220);
	gotoXY(21, 27); cout << char(220);
	SetColor(5, 15);
	gotoXY(18, 29); cout << " "; SetColor(15, 5); gotoXY(19, 29); cout << char(220); gotoXY(20, 29); cout << char(220);
	gotoXY(21, 29); cout << char(220);
	SetColor(5, 15);
	gotoXY(23, 26); cout << " "; gotoXY(26, 26); cout << " ";
	gotoXY(23, 27); cout << " "; gotoXY(26, 27); cout << " ";
	gotoXY(23, 28); cout << " ";
	gotoXY(23, 29); cout << " ";
	SetColor(15, 5); gotoXY(24, 26); cout << char(223); gotoXY(25, 26); cout << char(223);
	gotoXY(24, 27); cout << char(220); gotoXY(25, 27); cout << char(220);
	gotoXY(24, 28); cout << char(223);
	gotoXY(25, 28); cout << char(220);
	//vs
	SetColor(5, 15);
	gotoXY(26, 29); cout << " ";
	gotoXY(30, 26); cout << " "; gotoXY(34, 26); cout << " ";
	gotoXY(30, 27); cout << " "; gotoXY(34, 27); cout << " ";
	gotoXY(31, 28); cout << " "; gotoXY(33, 28); cout << " ";
	gotoXY(32, 29); cout << " ";
	gotoXY(36, 26); cout << " ";
	gotoXY(36, 27); cout << " ";
	gotoXY(39, 28); cout << " ";
	gotoXY(39, 29); cout << " ";
	SetColor(15, 5);
	gotoXY(37, 27); cout << char(220); gotoXY(38, 27); cout << char(220); gotoXY(39, 27); cout << char(220);
	gotoXY(37, 26); cout << char(223); gotoXY(38, 26); cout << char(223); gotoXY(39, 26); cout << char(223);
	gotoXY(36, 29); cout << char(220); gotoXY(37, 29); cout << char(220); gotoXY(38, 29); cout << char(220);
	//pVp
	SetColor(5, 15);
	gotoXY(44, 26); cout << "   ";
	gotoXY(44, 27); cout << " "; gotoXY(46, 27); cout << " ";
	gotoXY(44, 28); cout << "   ";
	gotoXY(44, 29); cout << " ";
	gotoXY(48, 26); cout << " ";
	gotoXY(48, 27); cout << " ";
	gotoXY(48, 28); cout << " ";
	gotoXY(48, 29); cout << "  ";
	gotoXY(52, 26); cout << "  ";
	gotoXY(51, 27); cout << " "; gotoXY(54, 27); cout << " ";
	gotoXY(51, 28); cout << " "; gotoXY(54, 28); cout << " "; gotoXY(52, 28); cout << "  ";
	gotoXY(51, 29); cout << " "; gotoXY(54, 29); cout << " ";
	gotoXY(56, 26); cout << " "; gotoXY(58, 26); cout << " ";
	gotoXY(56, 27); cout << " "; gotoXY(58, 27); cout << " ";
	gotoXY(57, 28); cout << " ";
	gotoXY(57, 29); cout << " ";

	gotoXY(60, 26); cout << " "; SetColor(15, 5); gotoXY(62, 26); cout << char(223); gotoXY(61, 26); cout << char(223);
	gotoXY(63, 26); cout << char(223);
	SetColor(5, 15);
	gotoXY(60, 27); cout << " ";
	gotoXY(60, 28); cout << " "; SetColor(15, 5); gotoXY(61, 27); cout << char(220); gotoXY(62, 27); cout << char(220);
	gotoXY(63, 27); cout << char(220);
	SetColor(5, 15);
	gotoXY(60, 29); cout << " "; SetColor(15, 5); gotoXY(61, 29); cout << char(220); gotoXY(62, 29); cout << char(220);
	gotoXY(63, 29); cout << char(220);
	SetColor(5, 15);
	gotoXY(65, 26); cout << " "; gotoXY(68, 26); cout << " ";
	gotoXY(65, 27); cout << " "; gotoXY(68, 27); cout << " ";
	gotoXY(65, 28); cout << " ";
	gotoXY(65, 29); cout << " ";
	SetColor(15, 5); gotoXY(66, 26); cout << char(223); gotoXY(67, 26); cout << char(223);
	gotoXY(66, 27); cout << char(220); gotoXY(67, 27); cout << char(220);
	gotoXY(66, 28); cout << char(223);
	gotoXY(67, 28); cout << char(220);
	SetColor(5, 15);
	gotoXY(68, 29); cout << " ";
}

 void Player_vs_Player()
{
	check_time_or_not_time = 0;
	check = 1;
	check_exit = 0;
	bool validEnter = true;
	check_turn_for_time_version_1 = 0;
	while (1)
	{
		_COMMAND = toupper(_getch());
		if ((_COMMAND == 'A' && _TURN == true && check_win_over_tim == 0) || (_COMMAND == 75 && _TURN == false && check_win_over_tim == 0))
		{
			if (sound_on)
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			MoveLeft();
		}
		else if ((_COMMAND == 'W' && _TURN == true && check_win_over_tim == 0) || (_COMMAND == 72 && _TURN == false && check_win_over_tim == 0))
		{
			if (sound_on)
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			MoveUp();
		}
		else if ((_COMMAND == 'S' && _TURN == true && check_win_over_tim == 0) || (_COMMAND == 80 && _TURN == false && check_win_over_tim == 0))
		{
			if (sound_on)
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			MoveDown();
		}
		else if ((_COMMAND == 'D' && _TURN == true && check_win_over_tim == 0) || (_COMMAND == 77 && _TURN == false && check_win_over_tim == 0))
		{
			if (sound_on)
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			MoveRight();
		}
		else if (_COMMAND == 'L' && check_win_over_tim == 0)
		{
			check_time_or_not_time = 1;
			if (sound_on)
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SaveGame(-5);
			break;
		}
		else if (_COMMAND == 27 && check_win_over_tim == 0)
		{
			check_time_or_not_time = 1;
			Want_To_Save_Game();
			break;
		}
		else if (_COMMAND == 'E' && check_win_over_tim == 0)
		{
			check_time_or_not_time = 1;
			Want_to_resume();
		}
		else if (_COMMAND == 'G' && check_win_over_tim == 0)
		{
			flag_hint = true;
			Hint();
			continue;
		}
		else if ((_COMMAND == 'J' && _TURN == true && check_win_over_tim == 0) || (_COMMAND == 13 && _TURN == false && check_win_over_tim == 0))
		{// Người dùng đánh dấu trên màn hình bàn cờ
			switch (CheckBoard(_X, _Y)) {

			case -1:
				if (flag_hint)
				{
					gotoXY(4 * tmp_hint.y + LEFT + 2, 2 * tmp_hint.x + TOP + 1);
					SetColor(15, 15);
					printf("%c", 255);
					flag_hint = false;
				}
				check_turn_for_time_version_1 = 1;
				if (sound_on)
					PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				gotoXY(_X, _Y);
				SetColor(15, 4);
				printf("X");
				Ve_O(1, 1);
				ve_X(15, 15);
				Count_Step_X();
				check = 1;
				check_turn_for_time_version_1 = 0;
				break;

			case 1:
				if (flag_hint)
				{
					gotoXY(4 * tmp_hint.y + LEFT + 2, 2 * tmp_hint.x + TOP + 1);
					SetColor(15, 15);
					printf("%c", 255);
					flag_hint = false;
				}
				check_turn_for_time_version_1 = 1;
				if (sound_on)
					PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				gotoXY(_X, _Y);
				SetColor(15, 1);
				printf("O");
				ve_X(4, 4);
				Ve_O(15, 15);
				Count_Step_O();
				check = 1;
				check_turn_for_time_version_1 = 0;
				break;
			case 0: validEnter = false; // Khi đánh vào ô đã đánh rồi
			}
			/*Tiếp theo là kiểm tra và xử lý thắng/thua/hòa/tiếp tục*/
			if (validEnter == true)
			{
				switch (ProcessFinish(TestBoard()))
				{
				case -1: case 1: case 0:
					AnTroChuot();
					check_time_or_not_time = 1;
					color_for_win();
					if (X_check == true) Draw_Table_X_or_win(-1);
					else Draw_Table_X_or_win(1);
					if (Check_matrix_full == 0) Draw_Table_X_or_win(2);
					ve_X(0, 0);
					Ve_O(0, 0);
					SetColor(15, 3);
					HienTroChuot();
					while (true)
					{
						if (Want_to_continue() == 1)
						{
							if (number_to_check_number_of_win == -1) win_number_X++;
							else if (number_to_check_number_of_win == 1) win_number_O++;
							SetColor(15, 15);
							StartGame();
							HienTroChuot();
							break;
						}
						else
						{
							check_exit = 1;
							break;
						}
					}

				}

			}
			validEnter = true; // Mở khóa
		}
		if (check_win_over_tim == 1)
		{
			while (true)
			{
				if (Want_to_continue() == 1)
				{
					if (number_to_check_number_of_win == -1) win_number_X++;
					else if (number_to_check_number_of_win == 1) win_number_O++;
					SetColor(15, 15);
					StartGame();
					HienTroChuot();
					break;
				}
				else
				{
					check_exit = 1;
					break;
				}
			}
		}
		if (check_exit == 1) break;
	}

}