#include"Save_and_Load.h"

bool Enter_File_Name(char data[16])
{
	if (name != "\0")
	{
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
		if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
		SetColor(0, 15);
		gotoXY(82, 14); cout << "Saved !";
		gotoXY(81, 16); cout << "ESC : BACK";
		SetColor(15, 15);
		return true;
	}
	SetColor(2, 2);
	gotoXY(73, 11); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(73, 12); cout << "x"; gotoXY(98, 12); cout << "x";
	gotoXY(73, 13); cout << "x"; gotoXY(98, 13); cout << "x";
	gotoXY(73, 14); cout << "x"; gotoXY(98, 14); cout << "x";
	gotoXY(73, 15); cout << "x"; gotoXY(98, 15); cout << "x";
	gotoXY(73, 16); cout << "x"; gotoXY(98, 16); cout << "x";
	gotoXY(73, 17); cout << "x"; gotoXY(98, 17); cout << "x";
	gotoXY(73, 18); cout << "x"; gotoXY(98, 18); cout << "x";
	gotoXY(73, 18); cout << "xxxxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(14, 14);
	gotoXY(74, 12); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 13); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 14); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 15); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 16); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	gotoXY(74, 17); cout << "xxxxxxxxxxxxxxxxxxxxxxxx";
	SetColor(14, 4);
	gotoXY(79, 13); cout << "Enter File Name:";
	SetColor(14, 0);
	gotoXY(80, 14);
	cin.getline(data, 15);
	if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
	SetColor(0, 15);
	gotoXY(81, 16); cout << "ESC : BACK";
	SetColor(15, 15);
	return false;
}

 void SaveGame(int n)
 {
	 ofstream f1;
	 bool IsSaved = false;
	 char data[16];
	 char file_name[20];
	 IsSaved = Enter_File_Name(data);
	 if (!IsSaved)
	 {
		 int l = strlen(data);
		 memcpy(file_name, data, l);
		 file_name[l] = '.';
		 file_name[l + 1] = 't';
		 file_name[l + 2] = 'x';
		 file_name[l + 3] = 't';
		 file_name[l + 4] = '\0';
		 ofstream f2;
		 f1.open(file_name, ios::out);
		 f2.open("Name.txt", ios::app);
		 f2 << data << file_mode << endl;
		 f2.close();
	 }
	 else
	 {
		 string tmp_name = name + ".txt";
		 f1.open(tmp_name, ios::out);
	 }
	 f1 << X << endl << O << endl;
	 for (int i = 0; i < BOARD_SIZE; i++)
	 {
		 for (int j = 0; j < BOARD_SIZE; j++)
		 {
			 f1 << _A[i][j].Turn << " ";
		 }
		 f1 << endl;
	 }
	 f1 << Count_X << " " << count_O << " " << win_number_X << " " << win_number_O;
	 f1.close();
	 gotoXY(35, BOARD_SIZE * 2 + 3);
	 int t = 1;
	 while (t)
	 {
		 if (_kbhit())
		 {
			 switch (_getch())
			 {
			 case 27:
				 //PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				 if (sound_on)
					 PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				 t = 0;
				 system("cls");
				 //ScreenStartGame(99);
				 break;
			 }
		 }
	 }
 }

 void Danh_Sach_File_Luu()
{
	if (sound_on)
		PlaySound(TEXT("Am-thanh-phep-thuat-xuat-hien-ngan-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
	char c;
	int x = 26, y = 3;
	SetColor(14, 14);
	gotoXY(25, 3);	cout << ".";
	gotoXY(100, 3);	cout << ".";
	gotoXY(100, 13);	cout << ".";
	SetColor(8, 8);
	for (int i = 26; i < 102; i++)
	{
		gotoXY(i, 14);	cout << ".";
	}
	for (int i = 4; i < 15; i++)
	{
		gotoXY(101, i);	cout << ".";
		gotoXY(102, i);	cout << ".";
	}
	for (int i = 8; i >= 0; i--)
	{
		SetColor(14, i);
		Sleep(10);
		gotoXY(x, y);			cout << ".---------------.  .---------------.  .---------------.  .---------------.";
		Sleep(10);
		gotoXY(x - 1, y + 1);  cout << "| .-------------. || .-------------. || .-------------. || .-------------. |";
		Sleep(10);
		gotoXY(x - 1, y + 2);  cout << "| |   _____     | || |    _____    | || |   ________  | || |  _________  | |";
		Sleep(10);
		gotoXY(x - 1, y + 3);  cout << "| |  |_   _|    | || |   |_   _|   | || |  /  ____  | | || | |  _   _  | | |";
		SetColor(14, i + 1);
		Sleep(10);
		gotoXY(x - 1, y + 4);  cout << "| |    | |      | || |     | |     | || | |  (__  '_| | || | |_/ | | '_| | |";
		Sleep(10);
		gotoXY(x - 1, y + 5);  cout << "| |    | |   _  | || |     | |     | || |  '.___ '-.  | || |     | |     | |";
		Sleep(10);
		gotoXY(x - 1, y + 6);  cout << "| |   _| |__/ | | || |    _| |_    | || | |'.____)  | | || |    _| |_    | |";
		SetColor(14, i + 2);
		Sleep(10);
		gotoXY(x - 1, y + 7);  cout << "| |  |________| | || |   |_____|   | || | |________'  | || |   |_____|   | |";
		Sleep(10);
		gotoXY(x - 1, y + 8);  cout << "| |             | || |             | || |             | || |             | |";
		Sleep(10);
		gotoXY(x - 1, y + 9);  cout << "|  '-----------'  ||  '-----------'  ||  '-----------'  ||  '-----------'  |";
		Sleep(10);
		gotoXY(x - 1, y + 10); cout << " '---------------'  '---------------'  '---------------'  '---------------'";
		Sleep(10);
	}
	SetColor(6, 6);
	gotoXY(45, 17);	printf("%c", 220);
	for (int i = 46; i < 58; i++)
	{
		gotoXY(i, 17);	printf("%c", 254);
	}
	for (int i = 69; i < 82; i++)
	{
		gotoXY(i, 17);	printf("%c", 254);
	}
	for (int i = 18; i < 25; i++)
	{
		gotoXY(45, i);	printf("%c", 219);
	}
	gotoXY(82, 17);	printf("%c", 220);
	for (int i = 18; i < 25; i++)
	{
		gotoXY(82, i);	printf("%c", 219);
	}
	gotoXY(45, 25);	printf("%c", 223);
	for (int i = 46; i < 82; i++)
	{
		gotoXY(i, 25);	printf("%c", 254);
	}
	gotoXY(82, 25);	printf("%c", 223);
	SetColor(14, 14);
	for (int i = 46; i < 82; i++)
		for (int j = 18; j < 25; j++)
		{
			gotoXY(i, j); cout << ".";
		}
	//Ve bong
	SetColor(8, 8);
	for (int i = 47; i < 85; i++)
	{
		gotoXY(i, 26);		cout << ".";
	}
	for (int i = 18; i < 26; i++)
	{
		gotoXY(84, i);	cout << ".";
		gotoXY(83, i);	cout << ".";
	}
	SetColor(15, 4);
	gotoXY(56, 17);
	cout << "  Search File  ";
	SetColor(15, 0);
	gotoXY(25, 27); cout << ".---------.";
	gotoXY(25, 28); cout << "|   ESC   |    Quay lai";
	gotoXY(25, 29); cout << "._________.";
	gotoXY(70, 27); cout << ".---------.";
	gotoXY(70, 28); cout << "|  Delete |    Xoa File";
	gotoXY(70, 29); cout << "._________.";
}

bool DeleteFile(char file_path[20])
{
	int n = strlen(file_path);
	file_path[n] = '.';
	file_path[n + 1] = 't';
	file_path[n + 2] = 'x';
	file_path[n + 3] = 't';
	file_path[n + 4] = '\0';
	int ret = remove(file_path);
	bool is_ok = (ret == 0) ? true : false;
	return ret;
}

 void LoadGame(string data)
 {
	 check_time_for_save_game = 1;
	 check_time_or_not_time = 0;
	 Sleep(500);
	 //NHAP FILE
	 ifstream f;
	 string tmp = "test";
	 tmp = data.substr(data.length() - 1, 1);
	 if (tmp == "2")
		 file_mode = 2;
	 else
		 if (tmp == "1")
			 file_mode = 1;
		 else
			 file_mode = 0;
	 data.pop_back();
	 string tmp_data = data + ".txt";
	 f.open(tmp_data, ios::in);
	 int k = 0;
	 SetColor(15, 15);
	 system("cls");
	 StartGame();
	 f.getline(X, 30);
	 f.getline(O, 30);
	 for (int i = 0; i < BOARD_SIZE; i++)
	 {
		 for (int j = 0; j < BOARD_SIZE; j++)
		 {
			 f >> k;
			 if (k == -1)
			 {
				 gotoXY(4 * j + LEFT + 2, 2 * i + TOP + 1);
				 SetColor(15, 4);
				 cout << "X";
				 _A[i][j].Turn = -1;
			 }
			 else if (k == 1)
			 {
				 gotoXY(4 * j + LEFT + 2, 2 * i + TOP + 1);
				 SetColor(15, 1);
				 cout << "O";
				 _A[i][j].Turn = 1;
			 }
		 }
	 }
	 f >> Count_X >> count_O >> win_number_X >> win_number_O;
	 if (Count_X == count_O)
		 _TURN = true;
	 else
	 {
		 _TURN = false;
		 ve_X(15, 15);
		 Ve_O(1, 1);
	 }
	 SetColor(15, 0);
	 gotoXY(68, 16); cout << win_number_X;
	 gotoXY(115, 16); cout << win_number_O;
	 gotoXY(68, 19);	cout << Count_X;
	 gotoXY(115, 19); cout << count_O;
	 gotoXY(58, 13); cout << "         ";
	 gotoXY(58, 13);
	 SetColor(15, 4);
	 cout << X;
	 gotoXY(105, 13); cout << "         ";
	 gotoXY(105, 13);
	 SetColor(15, 1);
	 cout << O;
	 check_time_for_save_game = 0;
	 name = data;
 }

 bool StringCmp(string str1, string str2)
 {
	 if (str1.length() > str2.length())
		 return false;
	 int i = 0;
	 char tmp_1[16], tmp_2[16];
	 for (i = 0; i < str1.length(); ++i)
	 {
		 tmp_1[i] = tolower(str1[i]);
		 tmp_2[i] = tolower(str2[i]);
	 }
	 tmp_1[i] = '\0';
	 for (i; i < str2.length()-1; ++i)
		 tmp_2[i] = tolower(str2[i]);
	 tmp_2[i] = '\0';
	 if (strstr(tmp_2, tmp_1) != NULL)
		 return true;
	 return false;
 }

 void Print(vector<string>a, int cur_pos, int first_mem, char arrow)
 {
	 int i = 0, j = 0;
	 string tmp = "...............................";
	 string tmp_1 = "\0";
	 if (first_mem + 5 <= a.size())
		 for (i = 0; i < 5; ++i)
		 {
			 tmp = "...............................";
			 gotoXY(47, 19 + i);
			 if (i == cur_pos)
			 {
				 arrow = 16;
				 SetColor(14, 12);
				 tmp.resize(34 - a[first_mem + i].length());
				 cout << arrow << a[first_mem + i];
				 gotoXY(47 + a[first_mem + i].length(), 19 + i);
				 cout << tmp;
				 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "2")
					 tmp_1 = "PvP";
				 else
					 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "0")
						 tmp_1 = "PvC(Normal)";
					 else
						 tmp_1 = "PvC(Difficult)";
				 gotoXY(81 - tmp_1.length(), 19 + i);
				 cout << tmp_1;
			 }
			 else
			 {
				 SetColor(14, 0);
				 tmp.resize(35 - a[first_mem + i].length());
				 cout << a[first_mem + i];
				 gotoXY(46 + a[first_mem + i].length(), 19 + i);
				 cout << tmp;
				 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "2")
					 tmp_1 = "PvP";
				 else
					 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "0")
						 tmp_1 = "PvC(Normal)";
					 else
						 tmp_1 = "PvC(Difficult)";
				 gotoXY(81 - tmp_1.length(), 19 + i);
				 cout << tmp_1;
			 }
		 }
	 else
	 {
		 for (i = 0; i < a.size() - first_mem; ++i)
		 {
			 tmp = "...............................";
			 gotoXY(47, 19 + i);
			 if (i == cur_pos)
			 {
				 arrow = 16;
				 SetColor(14, 12);
				 tmp.resize(34 - a[first_mem + i].length());
				 cout << arrow << a[first_mem + i];
				 gotoXY(47 + a[first_mem + i].length(), 19 + i);
				 cout << tmp;
				 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "2")
					 tmp_1 = "PvP";
				 else
					 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "0")
						 tmp_1 = "PvC(Normal)";
					 else
						 tmp_1 = "PvC(Difficult)";
				 gotoXY(81 - tmp_1.length(), 19 + i);
				 cout << tmp_1;
			 }
			 else
			 {
				 SetColor(14, 0);
				 tmp.resize(35 - a[first_mem + i].length());
				 cout << a[first_mem + i];
				 gotoXY(46 + a[first_mem + i].length(), 19 + i);
				 cout << tmp;
				 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "2")
					 tmp_1 = "PvP";
				 else
					 if (a[first_mem + i].substr(a[first_mem + i].length() - 1, 1) == "0")
						 tmp_1 = "PvC(Normal)";
					 else
						 tmp_1 = "PvC(Difficult)";
				 gotoXY(81 - tmp_1.length(), 19 + i);
				 cout << tmp_1;
			 }
		 }
		 tmp = "                                  ";
		 SetColor(14, 0);
		 for (i; i < 5; ++i)
		 {
			 gotoXY(47, 19 + i);
			 cout << tmp;
		 }
	 }
 }

 void Arrow(vector<string> a, int& first_mem, char arrow)
 {
	 SetColor(14, 0);
	 if (a.size() > 5)
	 {
		 if (first_mem == 0)
		 {
			 gotoXY(61, 18);
			 cout << " ";
		 }
		 else
		 {
			 arrow = 30;
			 gotoXY(61, 18);
			 cout << arrow;
		 }
		 if (first_mem + 5 == a.size())
		 {
			 gotoXY(61, 24);
			 cout << " ";
		 }
		 else
		 {
			 arrow = 31;
			 gotoXY(61, 24);
			 cout << arrow;
		 }
	 }
	 else
	 {

		 gotoXY(61, 18);
		 cout << " ";
		 gotoXY(61, 24);
		 cout << " ";
	 }
	 gotoXY(0, 29);
 }

 void Go_Up_List(vector<string> a, int& cur_pos, int& first_mem, char arrow)
 {
	 if (cur_pos == 0)
	 {
		 if (first_mem != 0)
			 first_mem--;
		 else
		 {
			 if (a.size() > 5)
			 {
				 first_mem = a.size() - 5;
				 cur_pos = 4;
			 }
			 else
			 {
				 first_mem = 0;
				 cur_pos = a.size() - 1;
			 }
		 }
		 if (sound_on)
			 PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
	 }
	 else
	 {
		 cur_pos--;
		 if (sound_on)
			 PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
	 }
	 Print(a, cur_pos, first_mem, arrow);
 }

 void Go_Down_List(vector<string> a, int& cur_pos, int& first_mem, char arrow)
 {
	 if (cur_pos == 4 || cur_pos == a.size() - 1)
	 {
		 if (first_mem + 5 >= a.size())
		 {
			 first_mem = 0;
			 cur_pos = 0;
		 }
		 else
			 first_mem++;
		 if (sound_on)
			 PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
	 }
	 else
	 {
		 cur_pos++;
		 if (sound_on)
			 PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
	 }
	 Print(a, cur_pos, first_mem, arrow);
 }

 void Delete_Name(vector<string>& a, vector<string>& main, int& cur_pos, int& first_mem)
 {
	 if (a.size() != 0)
	 {
		 for (int i = 0; i < main.size(); ++i)
			 if (a[first_mem + cur_pos] == main[i])
				 main.erase(main.begin() + i);
		 char* name = (char*)a[first_mem + cur_pos].c_str();
		 int n = strlen(name) - 1;
		 name[n] = '\0';
		 DeleteFile(name);
		 a.erase(a.begin() + first_mem + cur_pos);
		 fstream f;
		 f.open("Name.txt", ios::out);
		 for (int i = 0; i < a.size(); ++i)
			 f << a[i] << endl;
		 f.close();
		 if (first_mem + 5 >= a.size())
		 {
			 if (first_mem != 0)
				 first_mem--;
			 if (cur_pos == a.size())
				 cur_pos--;
		 }
		 if (sound_on)
			 PlaySound(TEXT("Bling-sound-effect-www_tiengdong_com.wav"), NULL, SND_FILENAME | SND_ASYNC);
	 }
 }

 void list(vector<string>& a, vector<string>& main, char cmd, int& cur_pos, int& first_mem)
 {
	 char arrow = '\0';
	 Print(a, cur_pos, first_mem, arrow);
	 if (cmd == 83)
	 {
		 Delete_Name(a, main, cur_pos, first_mem);
		 Print(a, cur_pos, first_mem, arrow);
	 }
	 if (cmd == 72)
		 Go_Up_List(a, cur_pos, first_mem, arrow);
	 if (cmd == 80)
		 Go_Down_List(a, cur_pos, first_mem, arrow);
	 Arrow(a, first_mem, arrow);
 }

 string Keyword(string& str, int& pos, char& cmd, int& cur_pos, int& first_mem)
 {
	 if (cmd == 13)
		 return str;
	 if (cmd == -32 || cmd == 0)
	 {
		 cmd = _getch();
		 return str;
	 }
	 if (cmd == 8)
	 {
		 if (pos == 0)
			 return str;
		 str.erase(str.begin() + pos - 1);
		 pos--;
	 }
	 else
	 {
		 if (str.length() < 15)
		 {
			 if (pos == str.length())
				 str += cmd;
			 else
				 str = str.substr(0, pos) + cmd + str.substr(pos, str.length() - pos);
			 pos++;
			 cur_pos = first_mem = 0;
		 }
	 }
	 return str;
 }

 void List_and_search(string& Data)
 {
	 Danh_Sach_File_Luu();
	 SetColor(14, 0);
	 int n = 0;
	 string str = "";
	 char cmd = '\0';
	 int i = 0, pos = 0;
	 vector<string> a;
	 char tmp[16];
	 fstream f;
	 f.open("Name.txt", ios::in);
	 if (!f.is_open())
	 {
		 f.open("Name.txt", ios::out);
		 f.close();
		 f.open("Name.txt", ios::in);
	 }
	 while (!f.eof())
	 {
		 f.getline(tmp, 15);
		 if (tmp[0] != '\0')
			 a.push_back(tmp);
	 }
	 f.close();
	 vector<string>tmp_string;
	 tmp_string = a;
	 int cur_pos = 0, first_mem = 0;
	 char arrow = '\0';
	 gotoXY(54, 28);
	 list(tmp_string, a, cmd, cur_pos, first_mem);
	 while (1)
	 {
		 cmd = _getch();
		 str = Keyword(str, pos, cmd, cur_pos, first_mem);
		 if (cmd == 13 && tmp_string.size() != 0)
		 {
			 Data = tmp_string[first_mem + cur_pos];
			 break;
		 }
		 gotoXY(57, 17);
		 cout << "               ";
		 tmp_string.resize(0);
		 for (i = 0; i < a.size(); ++i)
			 if (StringCmp(str, a[i]))
				 tmp_string.push_back(a[i]);
		 list(tmp_string, a, cmd, cur_pos, first_mem);
		 if (str != "")
		 {
			 SetColor(15, 4);
			 gotoXY(56, 17);
			 cout << " " << str;
		 }
		 else
		 {
			 SetColor(15, 4);
			 gotoXY(56, 17);
			 cout << "  Search File  ";
		 }
		 if (cmd == 27)
		 {
			 if (sound_on)
				 PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
			 p = false;
			 t = false;
			 break;
		 }
	 }
 }