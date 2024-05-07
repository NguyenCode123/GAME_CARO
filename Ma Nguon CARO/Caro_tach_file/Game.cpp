#include"Game.h"

 void ResetData()
{
	so_o_con_trong = 0;
	for (int i = 0; i < BOARD_SIZE; i++) {

		for (int j = 0; j < BOARD_SIZE; j++) {

			_A[i][j].x = 4 * j + LEFT + 2; // Trùng với hoành độ màn hình bàn cờ

			_A[i][j].y = 2 * i + TOP + 1; // Trùng với tung độ màn hình bàn cờ
			so_o_con_trong++;
			_A[i][j].Turn = 0;
		}
	}
	_TURN = true; _COMMAND = -1; // Gán lượt và phím mặc định
	_X = _A[0][0].x; _Y = _A[0][0].y; // Thiết lập lại tọa độ hiện hành ban đầu
}

 void DrawBoard(int pSize)
{
	SetColor(15, 6);
	gotoXY(3, 1);
	printf("%c", 218); int bien = 3;
	for (int i = 0; i < 47; i++)
	{
		if (i == bien)
		{
			printf("%c", 194);
			bien = bien + 4;
		}
		else
			printf("%c", 196);

	}
	printf("%c", 191);
	int cot = 2;
	for (int i = 0; i < 23; i++)
	{
		gotoXY(3, cot++);
		if (i % 2 == 0) printf("%c", 179);
		else printf("%c", 195);
	}
	gotoXY(3, cot);
	printf("%c", 192);
	bien = 3;
	for (int i = 0; i < 47; i++)
	{
		if (i == bien)
		{
			printf("%c", 193);
			bien = bien + 4;
		}
		else
			printf("%c", 196);
	}
	cot = 24;
	printf("%c", 217);
	for (int i = 0; i < 23; i++)
	{
		gotoXY(51, cot--);
		if (i % 2 == 0) printf("%c", 179);
		else printf("%c", 180);
	}
	int x = 4, y = 3; int dem = 1;
	gotoXY(x, y);
	bien = 3;
	for (int i = 0; i < 517; i++)
	{
		if (i == 47 * dem)
		{
			y = y + 2;
			gotoXY(x, y);
			dem++;
			bien = bien + 3;
		}
		if (i == bien)
		{
			printf("%c", 197);
			bien = bien + 4;
		}
		else
			printf("%c", 196);
	}
	x = 7; y = 2; bien = 1;
	int bien_x = x, bien_y = y;
	for (int j = 0; j < 11; j++)
	{
		gotoXY(bien_x, bien_y);
		for (int i = 0; i < 12; i++)
		{
			gotoXY(x, y);
			y = y + 2;
			printf("%c", 179);
		}
		bien_x = bien_x + 4;
		x = bien_x; y = bien_y;
	}
}

 void StartGame()
{
	system("cls");
	AnTroChuot();
	Chuyen_nen_vao_game();
	HienTroChuot();
	ResetData(); // Khởi tạo dữ liệu gốc
	DrawBoard(BOARD_SIZE); // Vẽ màn hình game
	Ve_clock();
	if (file_mode == 0) Nor();
	else if (file_mode == 1) dif();
	if (file_mode == 2)
		PvP();
	else
		PvC();
	SetColor(15, 15);
	ve_X(4, 4);
	Ve_O(15, 15);
	Draw_Win_and_Step_for_X();
	Draw_Win_and_Step_for_O();
	Huong_dan_phim_tat();
	Count_X = -1;
	count_O = -1;
	Count_Step_X();
	Count_Step_O();
	check_win_over_tim = 0;
	check_time_or_not_time = 0;
	gotoXY(5, 2);
}

 int ProcessFinish(int pWhoWin) {

	gotoXY(0, _A[BOARD_SIZE - 1][BOARD_SIZE - 1].y + 2); // Nhảy tới vị trí
	// thích hợp để in chuỗi thắng/thua/hòa
	switch (pWhoWin) {

	case -1:
		if (sound_on) PlaySound(TEXT("Am-thanh-chien-thang-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
		X_check = true;
		number_to_check_number_of_win = -1;
		break;

	case 1:
		if (sound_on) PlaySound(TEXT("Am-thanh-chien-thang-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
		X_check = false;
		number_to_check_number_of_win = 1;
		break;
	case 0:
		if (sound_on) PlaySound(TEXT("Am-thanh-chien-thang-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Draw_Table_X_or_win(2);
		break;
	case 2:
		_TURN = !_TURN; // Đổi lượt nếu không có gì xảy ra

	}
	gotoXY(_X, _Y); // Trả về vị trí hiện hành của con trỏ màn hình bàn cờ
	return pWhoWin;
}

 bool Check_matrix_full()
{
	bool check = false;
	if (so_o_con_trong == 0)
		check = true;
	return check;
}

 bool kiem_tra_tren_mang_5x5_hai_duong_cheo(int x, int y)
{
	int bien_x = x, bien_y = y;
	x_khoi_dau = 4 * y + LEFT + 2; y_khoi_dau = 2 * x + TOP + 1;
	int dem_X = 0, dem_O = 0;
	if (y < 8)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{

				if (i == j && _A[bien_x][bien_y].Turn == -1)
				{
					dem_X++;
					bien_x++; bien_y++;
				}
				else if (i == j && _A[bien_x][bien_y].Turn == 1)
				{
					dem_O++;
					bien_x++; bien_y++;
				}

			}
			if (dem_X == 5)
			{
				color_number = 2;
				Turn_win = true;
				return true;
			}
			if (dem_O == 5)
			{
				color_number = 2;
				Turn_win = false;
				return false;
			}
		}
	}
	dem_X = 0; dem_O = 0;
	bien_x = x, bien_y = y + 4;
	if (y < 8)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i == 4 - j && _A[bien_x][bien_y].Turn == -1)
				{
					dem_X++;
					bien_x++; bien_y--;
				}
				else if (i == 4 - j && _A[bien_x][bien_y].Turn == 1)
				{
					dem_O++;
					bien_x++; bien_y--;
				}

			}
			if (dem_X == 5)
			{
				color_number = 1;
				Turn_win = true;
				return true;
			}
			if (dem_O == 5)
			{
				color_number = 1;
				Turn_win = false;
				return false;
			}
		}
	}
}

 bool kiem_tra_tren_mang_5x5_cac_duong_thang_hang(int x, int y)
{
	int dem_X = 0, dem_O = 0;
	int bien_x = x, bien_y = y;
	int thay_x = x, thay_y = y;
	int bien_x_thay_doi = x, bien_y_thay_doi = y;
	for (int i = 0; i <= 3; i++)
	{
		x_khoi_dau = 4 * bien_y + LEFT + 2; y_khoi_dau = 2 * bien_x + TOP + 1;
		for (int j = 0; j <= 3; j++)
		{
			bien_y_thay_doi++;
			if (_A[bien_x][bien_y].Turn == _A[bien_x][bien_y_thay_doi].Turn && _A[bien_x][bien_y].Turn == -1) dem_X++;
			if (_A[bien_x][bien_y].Turn == _A[bien_x][bien_y_thay_doi].Turn && _A[bien_x][bien_y].Turn == 1) dem_O++;
			bien_y++;
		}
		if (dem_X == 4)
		{
			color_number = -1;
			Turn_win = true;
			return true;
		}
		else if (dem_O == 4)
		{
			color_number = -1;
			Turn_win = false;
			return false;
		}
		else
		{
			dem_X = 0;
			dem_O = 0;
			thay_x++;
			bien_x = thay_x; bien_y = y;
			bien_y_thay_doi = y;
		}
	}
	if (x < 8)
	{
		bien_x = x; bien_y = y;
		for (int j = 0; j <= 3; j++)
		{
			x_khoi_dau = 4 * bien_y + LEFT + 2; y_khoi_dau = 2 * bien_x + TOP + 1;
			for (int i = 0; i <= 3; i++)
			{
				bien_x_thay_doi++;
				if (_A[bien_x][bien_y].Turn == _A[bien_x_thay_doi][bien_y].Turn && _A[bien_x][bien_y].Turn == -1) dem_X++;
				if (_A[bien_x][bien_y].Turn == _A[bien_x_thay_doi][bien_y].Turn && _A[bien_x][bien_y].Turn == 1) dem_O++;
				bien_x++;
			}
			if (dem_X == 4)
			{
				color_number = -2;
				Turn_win = true;
				return true;
			}
			else if (dem_O == 4)
			{
				color_number = -2;
				Turn_win = false;
				return false;
			}
			else
			{
				dem_X = 0;
				dem_O = 0;
				thay_y++;
				bien_x = x; bien_y = thay_y;
				bien_x_thay_doi = x;
			}
		}
	}
}

 bool check_X_or_O_win()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (kiem_tra_tren_mang_5x5_hai_duong_cheo(i, j) == true)
			{
				return true;
			}
			else if (kiem_tra_tren_mang_5x5_hai_duong_cheo(i, j) == false)
			{
				return false;
			}
			else if (kiem_tra_tren_mang_5x5_cac_duong_thang_hang(i, j) == true)
			{
				return true;
			}
			else if (kiem_tra_tren_mang_5x5_cac_duong_thang_hang(i, j) == false)
			{
				return false;
			}
		}
	}
}

 void color_for_win()
{
	if (color_number == 2)
	{
		ve_X(0, 0);
		Ve_O(0, 0);
		bool x_win; int mau;
		int start_x = x_khoi_dau, start_y = y_khoi_dau;
		for (int j = 0; j <= 20; j++)
		{
			SetColor(15, rand() % 14 + 1);
			x_khoi_dau = start_x; y_khoi_dau = start_y;
			for (int i = 0; i <= 4; i++)
			{
				gotoXY(x_khoi_dau, y_khoi_dau);
				if (Turn_win == true)
				{
					printf("X"); x_win = true;
				}
				else
				{
					printf("O"); x_win = false;
				}
				x_khoi_dau = 4 + x_khoi_dau;
				y_khoi_dau = 2 + y_khoi_dau;
			}
			if (x_win == true)
			{
				mau = rand() % 14 + 1;
				ve_X(mau, mau);
			}
			else
			{
				mau = rand() % 14 + 1;
				Ve_O(mau, mau);
			}
			Sleep(120);
		}
		for (int i = 0; i <= 4; i++)
		{
			gotoXY(start_x, start_y);
			SetColor(0, 7);
			if (Turn_win == true) printf("X");
			else printf("O");
			start_x = 4 + start_x;
			start_y = 2 + start_y;
		}
	}
	else if (color_number == 1)
	{
		ve_X(0, 0);
		Ve_O(0, 0);
		bool x_win; int mau;
		x_khoi_dau = x_khoi_dau + 16;
		y_khoi_dau = y_khoi_dau;
		int start_x = x_khoi_dau, start_y = y_khoi_dau;
		for (int j = 0; j <= 20; j++)
		{
			SetColor(15, rand() % 14 + 1);
			x_khoi_dau = start_x; y_khoi_dau = start_y;
			for (int i = 0; i <= 4; i++)
			{
				gotoXY(x_khoi_dau, y_khoi_dau);
				if (Turn_win == true)
				{
					printf("X");
					x_win = true;
				}
				else
				{
					printf("O");
					x_win = false;
				}
				x_khoi_dau = x_khoi_dau - 4;
				y_khoi_dau = y_khoi_dau + 2;
			}
			if (x_win == true)
			{
				mau = rand() % 14 + 1;
				ve_X(mau, mau);
			}
			else
			{
				mau = rand() % 14 + 1;
				Ve_O(mau, mau);
			}
			Sleep(120);
		}
		for (int i = 0; i <= 4; i++)
		{
			gotoXY(start_x, start_y);
			SetColor(0, 7);
			if (Turn_win == true) printf("X");
			else printf("O");
			start_x = start_x - 4;
			start_y = start_y + 2;
		}
	}
	else if (color_number == -1)
	{
		ve_X(0, 0);
		Ve_O(0, 0);
		bool x_win; int mau;
		int start_x = x_khoi_dau, start_y = y_khoi_dau;
		for (int j = 0; j <= 20; j++)
		{
			SetColor(15, rand() % 14 + 1);
			x_khoi_dau = start_x; y_khoi_dau = start_y;
			for (int i = 0; i <= 4; i++)
			{
				gotoXY(x_khoi_dau, y_khoi_dau);
				if (Turn_win == true)
				{
					printf("X");
					x_win = true;
				}
				else
				{
					printf("O");
					x_win = false;
				}
				x_khoi_dau = x_khoi_dau + 4;
			}
			if (x_win == true)
			{
				mau = rand() % 14 + 1;
				ve_X(mau, mau);
			}
			else
			{
				mau = rand() % 14 + 1;
				Ve_O(mau, mau);
			}
			Sleep(120);
		}
		for (int i = 0; i <= 4; i++)
		{
			gotoXY(start_x, start_y);
			SetColor(0, 7);
			if (Turn_win == true) printf("X");
			else printf("O");
			start_x = start_x + 4;
		}
	}
	else if (color_number == -2)
	{
		ve_X(0, 0);
		Ve_O(0, 0);
		if (x_khoi_dau == 53 || x_khoi_dau == 57 || x_khoi_dau == 61)
		{
			x_khoi_dau = x_khoi_dau - 48; y_khoi_dau = y_khoi_dau + 2;
		}
		bool x_win; int mau;
		int start_x = x_khoi_dau, start_y = y_khoi_dau;
		for (int j = 0; j <= 20; j++)
		{
			SetColor(15, rand() % 14 + 1);
			x_khoi_dau = start_x; y_khoi_dau = start_y;
			for (int i = 0; i <= 4; i++)
			{
				gotoXY(x_khoi_dau, y_khoi_dau);
				if (Turn_win == true)
				{
					printf("X");
					x_win = true;
				}
				else
				{
					printf("O");
					x_win = false;
				}
				y_khoi_dau = y_khoi_dau + 2;
			}
			if (x_win == true)
			{
				mau = rand() % 14 + 1;
				ve_X(mau, mau);
			}
			else
			{
				mau = rand() % 14 + 1;
				Ve_O(mau, mau);
			}
			Sleep(120);
		}
		for (int i = 0; i <= 4; i++)
		{
			gotoXY(start_x, start_y);
			SetColor(0, 7);
			if (Turn_win == true) printf("X");
			else printf("O");
			start_y = start_y + 2;
		}
	}

}

 int TestBoard()
{

	if (Check_matrix_full() == true) return 0; // Hòa
	else
	{

		if (check_X_or_O_win() == true)
			return -1; // -1 nghĩa là lượt ‘true’ thắng
		else if (check_X_or_O_win() == false)
			return 1;
		else
			return 2; // 2 nghĩa là chưa ai thắng

	}
}

 int CheckBoard(int pX, int pY) {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (_A[i][j].x == pX && _A[i][j].y == pY && _A[i][j].Turn == 0) {
				if (_TURN == true)
				{
					_A[i][j].Turn = -1;
					so_o_con_trong--;
				} // Nếu lượt hiện hành là true thì c = -1
				else
				{
					_A[i][j].Turn = 1;
					so_o_con_trong--;
				}// Nếu lượt hiện hành là false thì c = 1
				return _A[i][j].Turn;
			}

		}

	}
	return 0;
}

 void MoveRight() {

	if (_X < _A[BOARD_SIZE - 1][BOARD_SIZE - 1].x)

	{
		_X += 4;
		gotoXY(_X, _Y);
	}

}

 void MoveLeft() {
	if (_X > _A[0][0].x) {
		_X -= 4;
		gotoXY(_X, _Y);

	}

}

 void MoveDown()
{
	if (_Y < _A[BOARD_SIZE - 1][BOARD_SIZE - 1].y)
	{
		_Y += 2;
		gotoXY(_X, _Y);
	}
}

 void MoveUp() {
	if (_Y > _A[0][0].y) {
		_Y -= 2;
		gotoXY(_X, _Y);
	}
}

 void ve_X(int a, int b)
{
	SetColor(a, b);
	//Vẽ đường chéo chính
	int j = 2;
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(54 + i * 2, j);
		printf("x");
		j++;
	}
	j = 2;
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(55 + i * 2, j);
		j++;
		printf("x");
	}
	j = 2;
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(56 + i * 2, j);
		printf("x");
		j++;
	}

	//Vẽ đường chéo phụ
	j = 2;
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(70 - i * 2, j);
		printf("x");
		j++;
	}
	j = 2;
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(69 - i * 2, j);
		j++;
		printf("x");
	}
	j = 2;
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(68 - i * 2, j);
		printf("x");
		j++;
	}

	//Vẽ đường viền
	for (int i = 0; i < 21; i++)
	{
		gotoXY(52 + i, 0);
		printf("x");
	}
	for (int i = 0; i < 21; i++)
	{
		gotoXY(52 + i, 11);
		printf("x");
	}
	j = 1;
	for (int i = 0; i < 11; i++)
	{
		gotoXY(52, j);
		printf("x");
		j++;
	}
	j = 1;
	for (int i = 0; i < 11; i++)
	{
		gotoXY(72, j);
		printf("x");
		j++;
	}
}

 void Ve_O(int a, int b)
{
	SetColor(a, b);
	int j;
	//Vẽ đường viền
	for (int i = 0; i < 21; i++)
	{
		gotoXY(99 + i, 0);
		printf("o");
	}
	for (int i = 0; i < 21; i++)
	{
		gotoXY(99 + i, 11);
		printf("o");
	}
	j = 1;
	for (int i = 0; i < 11; i++)
	{
		gotoXY(99, j);
		printf("o");
		j++;
	}
	j = 1;
	for (int i = 0; i < 11; i++)
	{
		gotoXY(119, j);
		printf("o");
		j++;
	}

	for (int i = 0; i <= 4; i++)
	{
		gotoXY(107 + i, 2);
		printf("o");
	}
	j = 2;
	for (int i = 0; i <= 3; i++)
	{
		gotoXY(106 - i, j);
		printf("o");
		gotoXY(105 - i, j);
		printf("o");
		j++;
	}
	j = 6;
	for (int i = 0; i <= 3; i++)
	{
		gotoXY(103 + i, j);
		printf("o");
		gotoXY(102 + i, j);
		printf("o");
		j++;
	}
	for (int i = 0; i <= 4; i++)
	{
		gotoXY(107 + i, 9);
		printf("o");
	}
	j = 6;
	for (int i = 0; i <= 3; i++)
	{
		gotoXY(115 - i, j);
		printf("o");
		gotoXY(116 - i, j);
		printf("o");
		j++;
	}
	j = 2;
	for (int i = 0; i <= 3; i++)
	{
		gotoXY(112 + i, j);
		printf("o");
		gotoXY(113 + i, j);
		printf("o");
		j++;
	}
}

 void Draw_Win_and_Step_for_X()
{
	SetColor(15, 12);
	gotoXY(52, 12);
	printf("%c", 218);
	for (int i = 0; i < 19; i++)
	{
		printf("%c", 196);
	}
	printf("%c", 191);
	int cot = 13;
	for (int i = 0; i <= 8; i++)
	{
		gotoXY(52, cot);
		if (i == 2 || i == 5)printf("%c", 195);
		else if (i == 8) printf("%c", 192);
		else printf("%c", 179);
		cot++;
	}
	cot = 13;
	for (int i = 0; i < 19; i++)
	{
		if (i == 11) printf("%c", 193);
		else printf("%c", 196);
	}
	printf("%c", 217);
	for (int i = 0; i <= 8; i++)
	{
		gotoXY(72, cot);
		if (i == 2 || i == 5)printf("%c", 180);
		else if (i == 8) printf("%c", 217);
		else printf("%c", 179);
		cot++;
	}
	int hang = 53;
	for (int i = 0; i < 19; i++)
	{
		gotoXY(hang, 15);
		if (i == 11) printf("%c", 194);
		printf("%c", 196);
		hang++;
	}
	hang = 53;
	for (int i = 0; i < 19; i++)
	{
		gotoXY(hang, 18);
		if (i == 11) printf("%c", 197);
		printf("%c", 196);
		hang++;
	}
	gotoXY(64, 16); printf("%c", 179);
	gotoXY(64, 17); printf("%c", 179);
	gotoXY(64, 19); printf("%c", 179);
	gotoXY(64, 20); printf("%c", 179);
	SetColor(15, 4); gotoXY(58, 13); cout << X;
	SetColor(15, 5); gotoXY(57, 16); cout << "WIN";
	SetColor(15, 0);
	gotoXY(68, 16); cout << win_number_X;
	SetColor(15, 5); gotoXY(57, 19); cout << "STEP";
}

 void Draw_Win_and_Step_for_O()
{
	SetColor(15, 9);
	gotoXY(99, 12);
	printf("%c", 218);
	for (int i = 0; i < 19; i++)
	{
		printf("%c", 196);
	}
	printf("%c", 191);
	int cot = 13;
	for (int i = 0; i <= 8; i++)
	{
		gotoXY(99, cot);
		if (i == 2 || i == 5)printf("%c", 195);
		else if (i == 8) printf("%c", 192);
		else printf("%c", 179);
		cot++;
	}
	cot = 13;
	for (int i = 0; i < 19; i++)
	{
		if (i == 11) printf("%c", 193);
		else printf("%c", 196);
	}
	printf("%c", 217);
	for (int i = 0; i <= 8; i++)
	{
		gotoXY(119, cot);
		if (i == 2 || i == 5)printf("%c", 180);
		else if (i == 8) printf("%c", 217);
		else printf("%c", 179);
		cot++;
	}
	int hang = 100;
	for (int i = 0; i < 19; i++)
	{
		gotoXY(hang, 15);
		if (i == 11) printf("%c", 194);
		printf("%c", 196);
		hang++;
	}
	hang = 100;
	for (int i = 0; i < 19; i++)
	{
		gotoXY(hang, 18);
		if (i == 11) printf("%c", 197);
		printf("%c", 196);
		hang++;
	}
	gotoXY(111, 16); printf("%c", 179);
	gotoXY(111, 17); printf("%c", 179);
	gotoXY(111, 19); printf("%c", 179);
	gotoXY(111, 20); printf("%c", 179);
	SetColor(15, 1); gotoXY(105, 13); cout << O;
	SetColor(15, 5); gotoXY(104, 16); cout << "WIN";
	SetColor(15, 0);
	gotoXY(115, 16); cout << win_number_O;
	SetColor(15, 5); gotoXY(104, 19); cout << "STEP";
}

 void Count_Step_X()
{
	SetColor(15, 0);
	gotoXY(68, 19);
	Count_X++;
	cout << Count_X;
}

 void Count_Step_O()
{
	SetColor(15, 0);
	gotoXY(115, 19);
	count_O++;
	cout << count_O;
}

 void Draw_X_OR_O_For_Win(int win_number)
{
	if (win_number == -1)
	{
		SetColor(4, 4);
		gotoXY(55 + 1, 22 - 1); cout << "xxx"; gotoXY(67 + 1, 22 - 1);                          cout << "xxx";
		gotoXY(57 + 1, 23 - 1);  cout << "xxx"; gotoXY(65 + 1, 23 - 1);                      cout << "xxx";
		gotoXY(59 + 1, 24 - 1);    cout << "xxx"; gotoXY(63 + 1, 24 - 1);                  cout << "xxx";
		gotoXY(61 + 1, 25 - 1);      cout << "xxx"; gotoXY(61 + 1, 25 - 1);             cout << "xxx";
		gotoXY(63 + 1, 26 - 1);        cout << "xxx"; gotoXY(59 + 1, 26 - 1);         cout << "xxx";
		gotoXY(65 + 1, 27 - 1);          cout << "xxx"; gotoXY(57 + 1, 27 - 1);     cout << "xxx";
		gotoXY(67 + 1, 28 - 1);            cout << "xxx"; gotoXY(55 + 1, 28 - 1); cout << "xxx";
	}

	if (win_number == 1)
	{
		SetColor(1, 1);
		gotoXY(57 + 2, 22 - 1); cout << "ooooooo";
		gotoXY(56 + 2, 23 - 1); cout << "oo"; gotoXY(63 + 2, 23 - 1); cout << "oo";
		gotoXY(55 + 2, 24 - 1); cout << "oo"; gotoXY(64 + 2, 24 - 1); cout << "oo";
		gotoXY(54 + 2, 25 - 1); cout << "oo"; gotoXY(65 + 2, 25 - 1); cout << "oo";
		gotoXY(55 + 2, 26 - 1); cout << "oo"; gotoXY(64 + 2, 26 - 1); cout << "oo";
		gotoXY(56 + 2, 27 - 1); cout << "oo"; gotoXY(63 + 2, 27 - 1); cout << "oo";
		gotoXY(57 + 2, 28 - 1); cout << "ooooooo";
	}

	if (win_number == 1 || win_number == -1)
	{
		//Draw W
		gotoXY(74 + 2 + 1, 22 - 1); cout << "xxx";
		gotoXY(75 + 2 + 1, 23 - 1);  cout << "xxx";
		gotoXY(76 + 2 + 1, 24 - 1);   cout << "xxx";
		gotoXY(77 + 2 + 1, 25 - 1);    cout << "xxx";
		gotoXY(78 + 2 + 1, 26 - 1);     cout << "xxx";
		gotoXY(79 + 2 + 1, 27 - 1);      cout << "xxxxx";
		gotoXY(85 + 2 + 1, 27 - 1);      cout << "xxxxx";
		gotoXY(80 + 2 + 1, 28 - 1);       cout << "xxx";
		gotoXY(82 + 2 + 1, 26 - 1);       cout << "xxxxx";
		gotoXY(83 + 2 + 1, 25 - 1);       cout << "xxx";
		gotoXY(86 + 2 + 1, 28 - 1);       cout << "xxx";
		gotoXY(84 + 2 + 1, 24 - 1); cout << "x";
		gotoXY(85 + 2 + 1, 27 - 1); cout << "xxx";
		gotoXY(88 + 2 + 1, 26 - 1);  cout << "xxx";
		gotoXY(89 + 2 + 1, 25 - 1);   cout << "xxx";
		gotoXY(90 + 2 + 1, 24 - 1);    cout << "xxx";
		gotoXY(91 + 2 + 1, 23 - 1);     cout << "xxx";
		gotoXY(92 + 2 + 1, 22 - 1);      cout << "xxx";

		//Draw I
		gotoXY(96 + 1 + 2 + 1, 22 - 1); cout << "xx";
		gotoXY(96 + 1 + 2 + 1, 23 - 1); cout << "xx";
		gotoXY(96 + 1 + 2 + 1, 24 - 1); cout << "xx";
		gotoXY(96 + 1 + 2 + 1, 25 - 1); cout << "xx";
		gotoXY(96 + 1 + 2 + 1, 26 - 1); cout << "xx";
		gotoXY(96 + 1 + 2 + 1, 27 - 1); cout << "xx";
		gotoXY(96 + 1 + 2 + 1, 28 - 1); cout << "xx";

		//Draw N
		gotoXY(100 + 3 + 1 + 1, 22 - 1); cout << "xxxxxxxxxx";
		gotoXY(99 + 3 + 1 + 1, 23 - 1); cout << "xxxxxxxxxxxx";
		gotoXY(99 + 3 + 1 + 1, 24 - 1); cout << "xx";
		gotoXY(99 + 3 + 1 + 1, 25 - 1); cout << "xx";
		gotoXY(99 + 3 + 1 + 1, 26 - 1); cout << "xx";
		gotoXY(99 + 3 + 1 + 1, 27 - 1); cout << "xx";
		gotoXY(99 + 3 + 1 + 1, 28 - 1); cout << "xx";
		/*	gotoXY(114, 23 - 1); cout << "xx";*/
		gotoXY(114, 24 - 1); cout << "xx";
		gotoXY(114, 25 - 1); cout << "xx";
		gotoXY(114, 26 - 1); cout << "xx";
		gotoXY(114, 27 - 1); cout << "xx";
		gotoXY(114, 28 - 1); cout << "xx";
	}

	//draw
	if (win_number == 2)
	{
		gotoXY(60, 21); cout << "dd";
		gotoXY(60, 22); cout << "dd  dd";
		gotoXY(60, 23); cout << "dd    dd";
		gotoXY(60, 24); cout << "dd      dd";
		gotoXY(60, 25); cout << "dd    dd";
		gotoXY(60, 26); cout << "dd  dd";
		gotoXY(60, 27); cout << "dd";
	}

	if (win_number == 2)
	{
		SetColor(4, 4);
		gotoXY(55, 21); cout << "dddddddd";
		gotoXY(55, 22); cout << "dd"; gotoXY(56 + 5 - 1 + 2, 22); cout << "ddd";
		gotoXY(55, 23); cout << "dd"; gotoXY(56 + 6 - 1 + 2, 23); cout << "ddd";
		gotoXY(55, 24); cout << "dd"; gotoXY(56 + 7 - 1 + 2, 24); cout << "ddd";
		gotoXY(55, 25); cout << "dd"; gotoXY(56 + 6 - 1 + 2, 25); cout << "ddd";
		gotoXY(55, 26); cout << "dd"; gotoXY(56 + 5 - 1 + 2, 26); cout << "ddd";
		gotoXY(55, 27); cout << "dddddddd";

		//draw R
		gotoXY(68 - 1 + 2, 21); cout << "rrrrrrrr";
		gotoXY(68 - 1 + 2, 22); cout << "rr"; gotoXY(74 - 1 + 2, 22); cout << "rrr";
		gotoXY(68 - 1 + 2, 23); cout << "rr"; gotoXY(75 - 1 + 2, 23); cout << "rrr";
		gotoXY(68 - 1 + 2, 24); cout << "rr"; gotoXY(73 - 1 + 2, 24); cout << "rrrr";
		gotoXY(68 - 1 + 2, 25); cout << "rrrrrrr";
		gotoXY(68 - 1 + 2, 26); cout << "rr"; gotoXY(73 - 1 + 2, 26); cout << "rrr";
		gotoXY(68 - 1 + 2, 27); cout << "rr"; gotoXY(74 - 1 + 2, 27); cout << "rrrr";

		//Draw A
		gotoXY(81 + 3, 21); cout << "rrrrrrrr";
		gotoXY(80 + 3, 22); cout << "rr"; gotoXY(80 + 3 + 8, 22); cout << "rr";
		gotoXY(80 + 3, 23); cout << "rr"; gotoXY(80 + 3 + 8, 23); cout << "rr";
		gotoXY(80 + 3, 24); cout << "rrrrrrrrrr";
		gotoXY(79 + 3, 25); cout << "rrr"; gotoXY(80 + 3 + 8, 25); cout << "rrr";
		gotoXY(79 + 3, 26); cout << "rrr"; gotoXY(80 + 3 + 8, 26); cout << "rrr";
		gotoXY(79 + 3, 27); cout << "rrr"; gotoXY(80 + 3 + 8, 27); cout << "rrr";

		//Draw W
		gotoXY(74 + 2 + 1 + 20 - 1, 22 - 1); cout << "xxx";
		gotoXY(75 + 2 + 1 + 20 - 1, 23 - 1);  cout << "xxx";
		gotoXY(76 + 2 + 1 + 20 - 1, 24 - 1);   cout << "xxx";
		gotoXY(77 + 2 + 1 + 20 - 1, 25 - 1);    cout << "xxx";
		gotoXY(78 + 2 + 1 + 20 - 1, 26 - 1);     cout << "xxx";
		gotoXY(79 + 2 + 1 + 20 - 1, 27 - 1);      cout << "xxxxx";
		gotoXY(85 + 2 + 1 + 20 - 1, 27 - 1);      cout << "xxxxx";
		gotoXY(80 + 2 + 1 + 20 - 1, 28 - 1);       cout << "xxx";
		gotoXY(82 + 2 + 1 + 20 - 1, 26 - 1);       cout << "xxxxx";
		gotoXY(83 + 2 + 1 + 20 - 1, 25 - 1);       cout << "xxx";
		gotoXY(86 + 2 + 1 + 20 - 1, 28 - 1);       cout << "xxx";
		gotoXY(84 + 2 + 1 + 20 - 1, 24 - 1); cout << "x";
		gotoXY(85 + 2 + 1 + 20 - 1, 27 - 1); cout << "xxx";
		gotoXY(88 + 2 + 1 + 20 - 1, 26 - 1);  cout << "xxx";
		gotoXY(89 + 2 + 1 + 20 - 1, 25 - 1);   cout << "xxx";
		gotoXY(90 + 2 + 1 + 20 - 1, 24 - 1);    cout << "xxx";
		gotoXY(91 + 2 + 1 + 20 - 1, 23 - 1);     cout << "xxx";
		gotoXY(92 + 2 + 1 + 20 - 1, 22 - 1);      cout << "xxx";
	}
}

 void Draw_Table_X_or_win(int win_number)
{
	int mau = 9;
	for (int j = 0; j < 200; j++)
	{
		for (int i = 0; i < 11; i++)
		{
			if (j == 199) SetColor(14, 14);
			else SetColor(mau, mau);
			gotoXY(53, 29 - i); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
		}
		mau++;
		if (mau == 14) mau = 9;
	}
	SetColor(2, 2);
	gotoXY(53, 29); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(53, 19); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	for (int i = 0; i < 9; i++)
	{
		gotoXY(53, 20 + i); cout << "x";
	}
	for (int i = 0; i < 9; i++)
	{
		gotoXY(53 + 65, 20 + i); cout << "x";
	}
	if (win_number == -1) Draw_X_OR_O_For_Win(-1);
	if (win_number == 1) Draw_X_OR_O_For_Win(1);
	if (win_number == 2) Draw_X_OR_O_For_Win(2);
}
