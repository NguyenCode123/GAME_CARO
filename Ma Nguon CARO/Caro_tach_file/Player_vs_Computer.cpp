#include"Player_vs_Computer.h"

extern long Attack_point_array[7] = { 1,2,3,4,5,6,7 };// Mảng điểm tấn công.
extern long Defence_point_array[7] = { 1,2,3,4,5,6,7 };// Mảng điểm phòng ngự.

 void dif()
{
	SetColor(0, 15);
	//D
	gotoXY(82, 27); cout << " "; gotoXY(83, 27); cout << char(220); gotoXY(84, 27); cout << char(223);
	gotoXY(82, 28); cout << " "; gotoXY(84, 28); cout << " ";
	gotoXY(82, 29); cout << " "; gotoXY(83, 29); cout << char(223); gotoXY(84, 29); cout << char(220);
	//I
	gotoXY(86, 27); cout << " ";
	gotoXY(86, 28); cout << " ";
	gotoXY(86, 29); cout << " ";
	//F
	gotoXY(88, 27); cout << " "; gotoXY(89, 27); cout << char(220); gotoXY(90, 27); cout << char(220);
	gotoXY(88, 28); cout << " "; gotoXY(89, 28); cout << char(223); gotoXY(90, 28); cout << char(223);
	gotoXY(88, 29); cout << " ";
	gotoXY(92, 27); cout << " "; gotoXY(93, 27); cout << char(220); gotoXY(94, 27); cout << char(220);
	gotoXY(92, 28); cout << " "; gotoXY(93, 28); cout << char(223); gotoXY(94, 28); cout << char(223);
	gotoXY(92, 29); cout << " ";
	//I
	gotoXY(96, 27); cout << " ";
	gotoXY(96, 28); cout << " ";
	gotoXY(96, 29); cout << " ";
	//C
	gotoXY(98, 27); cout << " "; gotoXY(100, 27); cout << char(220); gotoXY(99, 27); cout << char(220);
	gotoXY(98, 28); cout << " ";
	gotoXY(98, 29); cout << " "; gotoXY(100, 29); cout << char(223); gotoXY(99, 29); cout << char(223);
	//U
	gotoXY(102, 27); cout << " "; gotoXY(105, 27); cout << " ";
	gotoXY(102, 28); cout << " "; gotoXY(105, 28); cout << " ";
	gotoXY(102, 29); cout << " "; gotoXY(105, 29); cout << " ";
	gotoXY(103, 29); cout << char(223); gotoXY(104, 29); cout << char(223);
	//L
	gotoXY(107, 27); cout << " ";
	gotoXY(107, 28); cout << " ";
	gotoXY(107, 29); cout << " "; gotoXY(108, 29); cout << char(223); gotoXY(109, 29); cout << char(223);
	//T
	gotoXY(111, 27); cout << char(220); gotoXY(113, 27); cout << char(220);
	gotoXY(112, 27); cout << " ";
	gotoXY(112, 28); cout << " ";
	gotoXY(112, 29); cout << " ";

}
 void Nor()
{
	SetColor(0, 15);
	gotoXY(82, 27); cout << " "; gotoXY(83, 27); cout << char(220); gotoXY(84, 27); cout << char(223);
	gotoXY(82, 28); cout << " "; gotoXY(85, 28); cout << " ";
	gotoXY(82, 29); cout << " "; gotoXY(85, 29); cout << " ";
	gotoXY(86, 29); cout << char(223);
	gotoXY(87, 27); cout << " ";
	gotoXY(87, 28); cout << " ";
	gotoXY(87, 29); cout << " ";
	//O
	gotoXY(90, 27); cout << char(223); gotoXY(91, 27); cout << char(220); gotoXY(92, 27); cout << char(223);
	gotoXY(89, 28); cout << " "; gotoXY(93, 28); cout << " ";
	gotoXY(90, 29); cout << char(220); gotoXY(91, 29); cout << char(223); gotoXY(92, 29); cout << char(220);
	//R
	gotoXY(95, 27); cout << " "; gotoXY(96, 27); cout << char(220); gotoXY(96, 28); cout << char(223);
	gotoXY(95, 28); cout << " "; gotoXY(97, 28); cout << " "; gotoXY(97, 27); cout << " ";
	gotoXY(95, 29); cout << " "; gotoXY(97, 29); cout << char(223); gotoXY(96, 29); cout << char(220);
	//M
	gotoXY(99, 27); cout << " "; gotoXY(100, 27); cout << char(220); gotoXY(101, 27); cout << char(223);
	gotoXY(99, 28); cout << " "; gotoXY(102, 27); cout << char(220);
	gotoXY(99, 29); cout << " ";
	gotoXY(103, 27); cout << " ";
	gotoXY(103, 28); cout << " ";
	gotoXY(103, 29); cout << " ";
	//A
	gotoXY(105, 27); cout << " "; gotoXY(106, 27); cout << char(220); gotoXY(107, 27); cout << char(220);
	gotoXY(105, 28); cout << " "; gotoXY(106, 28); cout << char(223); gotoXY(107, 28); cout << char(223);
	gotoXY(105, 29); cout << " ";
	gotoXY(108, 27); cout << " ";
	gotoXY(108, 28); cout << " ";
	gotoXY(108, 29); cout << " ";
	//L
	gotoXY(110, 27); cout << " ";
	gotoXY(110, 28); cout << " ";
	gotoXY(110, 29); cout << " "; gotoXY(111, 29); cout << char(223); gotoXY(112, 29); cout << char(223);
}

 void PvC()
{
	SetColor(5, 15);
	gotoXY(0, 26); cout << "   ";
	gotoXY(0, 27); cout << " "; gotoXY(2, 27); cout << " ";
	gotoXY(0, 28); cout << "   ";
	gotoXY(0, 29); cout << " ";
	gotoXY(4, 26); cout << " ";
	gotoXY(4, 27); cout << " ";
	gotoXY(4, 28); cout << " ";
	gotoXY(4, 29); cout << "  ";
	gotoXY(8, 26); cout << "  ";
	gotoXY(7, 27); cout << " "; gotoXY(10, 27); cout << " ";
	gotoXY(7, 28); cout << " "; gotoXY(10, 28); cout << " "; gotoXY(8, 28); cout << "  ";
	gotoXY(7, 29); cout << " "; gotoXY(10, 29); cout << " ";
	gotoXY(12, 26); cout << " "; gotoXY(14, 26); cout << " ";
	gotoXY(12, 27); cout << " "; gotoXY(14, 27); cout << " ";
	gotoXY(13, 28); cout << " ";
	gotoXY(13, 29); cout << " ";

	gotoXY(16, 26); cout << " "; SetColor(15, 5); gotoXY(17, 26); cout << char(223); gotoXY(18, 26); cout << char(223);
	gotoXY(19, 26); cout << char(223);
	SetColor(5, 15);
	gotoXY(16, 27); cout << " ";
	gotoXY(16, 28); cout << " "; SetColor(15, 5); gotoXY(17, 27); cout << char(220); gotoXY(18, 27); cout << char(220);
	gotoXY(19, 27); cout << char(220);
	SetColor(5, 15);
	gotoXY(16, 29); cout << " "; SetColor(15, 5); gotoXY(17, 29); cout << char(220); gotoXY(18, 29); cout << char(220);
	gotoXY(19, 29); cout << char(220);
	SetColor(5, 15);
	gotoXY(21, 26); cout << " "; gotoXY(24, 26); cout << " ";
	gotoXY(21, 27); cout << " "; gotoXY(24, 27); cout << " ";
	gotoXY(21, 28); cout << " ";
	gotoXY(21, 29); cout << " ";
	SetColor(15, 5); gotoXY(22, 26); cout << char(223); gotoXY(23, 26); cout << char(223);
	gotoXY(22, 27); cout << char(220); gotoXY(23, 27); cout << char(220);
	gotoXY(22, 28); cout << char(223);
	gotoXY(23, 28); cout << char(220);
	//vs
	SetColor(5, 15);
	gotoXY(24, 29); cout << " ";
	gotoXY(27, 26); cout << " "; gotoXY(31, 26); cout << " ";
	gotoXY(27, 27); cout << " "; gotoXY(31, 27); cout << " ";
	gotoXY(28, 28); cout << " "; gotoXY(30, 28); cout << " ";
	gotoXY(29, 29); cout << " ";
	gotoXY(33, 26); cout << " ";
	gotoXY(33, 27); cout << " ";
	gotoXY(36, 28); cout << " ";
	gotoXY(36, 29); cout << " ";
	SetColor(15, 5);
	gotoXY(34, 27); cout << char(220); gotoXY(35, 27); cout << char(220); gotoXY(36, 27); cout << char(220);
	gotoXY(34, 26); cout << char(223); gotoXY(35, 26); cout << char(223); gotoXY(36, 26); cout << char(223);
	gotoXY(33, 29); cout << char(220); gotoXY(34, 29); cout << char(220); gotoXY(35, 29); cout << char(220);
	//pVc
	SetColor(5, 15);
	gotoXY(39, 26); cout << " "; SetColor(15, 5); gotoXY(40, 26); cout << char(223); gotoXY(41, 26); cout << char(223);
	gotoXY(42, 26); cout << char(223);
	SetColor(5, 15);
	gotoXY(39, 27); cout << " ";
	gotoXY(39, 28); cout << " ";
	gotoXY(39, 29); cout << " "; SetColor(15, 5); gotoXY(40, 29); cout << char(220); gotoXY(41, 29); cout << char(220);
	gotoXY(42, 29); cout << char(220);
	SetColor(5, 15);
	gotoXY(44, 26); cout << "  ";
	gotoXY(43, 27); cout << " "; gotoXY(46, 27); cout << " ";
	gotoXY(43, 28); cout << " "; gotoXY(46, 28); cout << " ";
	gotoXY(44, 29); cout << "  ";
	gotoXY(48, 26); cout << " "; gotoXY(49, 26); cout << " "; gotoXY(51, 26); cout << " "; gotoXY(52, 26); cout << " ";
	gotoXY(48, 27); cout << " "; gotoXY(50, 27); cout << " "; gotoXY(52, 27); cout << " ";
	gotoXY(48, 28); cout << " "; gotoXY(52, 28); cout << " ";
	//
	gotoXY(48, 29); cout << " "; gotoXY(52, 29); cout << " ";
	gotoXY(54, 26); cout << "   ";
	gotoXY(54, 27); cout << " "; gotoXY(56, 27); cout << " ";
	gotoXY(54, 28); cout << "   ";
	gotoXY(54, 29); cout << " ";
	gotoXY(58, 26); cout << " "; gotoXY(61, 26); cout << " ";
	gotoXY(58, 27); cout << " "; gotoXY(61, 27); cout << " ";
	gotoXY(58, 28); cout << " "; gotoXY(61, 28); cout << " ";
	gotoXY(58, 29); cout << " "; gotoXY(61, 29); cout << " ";
	SetColor(15, 5);
	gotoXY(59, 29); cout << char(220); gotoXY(60, 29); cout << char(220);
	SetColor(5, 15);
	gotoXY(64, 26); cout << " "; gotoXY(63, 26); cout << " "; gotoXY(65, 26); cout << " ";
	gotoXY(64, 27); cout << " ";
	gotoXY(64, 28); cout << " ";
	gotoXY(64, 29); cout << " ";
	//er
	gotoXY(67, 26); cout << " "; SetColor(15, 5); gotoXY(68, 26); cout << char(223); gotoXY(69, 26); cout << char(223);
	/*gotoXY(72, 26); cout << char(223);*/
	SetColor(5, 15);
	gotoXY(67, 27); cout << " ";
	gotoXY(67, 28); cout << " "; SetColor(15, 5); gotoXY(68, 27); cout << char(220); gotoXY(69, 27); cout << char(220);
	/*gotoXY(72, 27); cout << char(220);*/
	SetColor(5, 15);
	gotoXY(67, 29); cout << " "; SetColor(15, 5); gotoXY(68, 29); cout << char(220); gotoXY(69, 29); cout << char(220);
	/*gotoXY(72, 29); cout << char(220);*/
	SetColor(5, 15);
	gotoXY(71, 26); cout << " "; gotoXY(73, 26); cout << " ";
	gotoXY(71, 27); cout << " "; gotoXY(73, 27); cout << " ";
	gotoXY(71, 28); cout << " ";
	gotoXY(71, 29); cout << " ";
	SetColor(15, 5); gotoXY(72, 26); cout << char(223);
	gotoXY(72, 27); cout << char(220);
	gotoXY(72, 28); cout << char(223);
	gotoXY(73, 28); cout << char(220);
	SetColor(5, 15);
	gotoXY(73, 29); cout << " ";
}

 void PvCLV()
{
	AnTroChuot();
	//khung ngang tren
	SetColor(0, 3);
	for (int i = 5; i <= 117; i++)
	{
		gotoXY(i, 6); cout << char(223);
	}
	//khung ngang duoi 
	for (int i = 5; i <= 117; i++)
	{
		gotoXY(i, 24); cout << char(220);
	}
	gotoXY(5, 24); cout << char(223); gotoXY(117, 24); cout << char(223);
	//normal
	for (int i = 7; i < 47; i++)
	{
		gotoXY(i, 16); cout << char(223);
		gotoXY(i, 21); cout << char(220);
	}
	//normal
	for (int i = 16; i < 22; i++)
	{
		SetColor(3, 15);
		gotoXY(6, i); cout << " ";
		gotoXY(47, i); cout << " ";
	}
	for (int i = 70; i <= 110; i++)
	{
		SetColor(0, 3);
		gotoXY(i, 16); cout << char(223);
		gotoXY(i, 21); cout << char(220);
	}
	//difficult
	for (int i = 16; i < 22; i++)
	{
		SetColor(3, 15);
		gotoXY(69, i); cout << " ";
		gotoXY(111, i); cout << " ";
	}
	SetColor(0, 3);
	//khung

	gotoXY(5, 6); cout << char(220); gotoXY(117, 6); cout << char(220);
	SetColor(3, 15);
	for (int i = 7; i < 24; i++)
	{
		gotoXY(4, i); cout << " ";
	}
	//khung
	for (int i = 7; i < 24; i++)
	{
		gotoXY(118, i); cout << " ";
	}
	SetColor(5, 15);
	//Player vs  computer
	gotoXY(8, 7); cout << " "; gotoXY(12, 7); cout << " ";
	gotoXY(8, 8); cout << " "; gotoXY(12, 8); cout << " ";
	gotoXY(8, 9); cout << " "; gotoXY(12, 9); cout << " ";
	gotoXY(8, 10); cout << " ";
	gotoXY(8, 11); cout << " ";
	SetColor(5, 0);
	gotoXY(9, 7); cout << char(220);
	gotoXY(11, 7); cout << char(220);
	gotoXY(10, 7); cout << char(220);
	gotoXY(9, 9); cout << char(223);
	gotoXY(11, 9); cout << char(223);
	gotoXY(10, 9); cout << char(223);
	gotoXY(15, 11); cout << char(223);
	gotoXY(16, 11); cout << char(223);
	//A
	gotoXY(20, 7); cout << char(220);
	gotoXY(19, 7); cout << char(223); gotoXY(21, 7); cout << char(223);
	gotoXY(18, 8); cout << " "; gotoXY(22, 8); cout << " ";
	gotoXY(18, 9); cout << " "; gotoXY(22, 9); cout << " ";
	gotoXY(18, 10); cout << " "; gotoXY(22, 10); cout << " ";
	gotoXY(18, 11); cout << " "; gotoXY(22, 11); cout << " ";
	gotoXY(19, 9); cout << char(223); gotoXY(20, 9); cout << char(223); gotoXY(21, 9); cout << char(223);
	//Y
	gotoXY(24, 7); cout << char(220); gotoXY(28, 7); cout << char(220);
	gotoXY(25, 7); cout << char(223); gotoXY(27, 7); cout << char(223);
	gotoXY(25, 8); cout << char(220); gotoXY(27, 8); cout << char(220);
	gotoXY(26, 8); cout << char(223);
	gotoXY(26, 9); cout << " ";
	gotoXY(26, 10); cout << " ";
	gotoXY(26, 11); cout << " ";
	//E
	gotoXY(30, 7); cout << " "; gotoXY(31, 7); cout << char(220); gotoXY(32, 7); cout << char(220);
	gotoXY(30, 8); cout << " ";
	gotoXY(30, 9); cout << " "; gotoXY(31, 9); cout << char(220); gotoXY(32, 9); cout << char(220);
	gotoXY(30, 10); cout << " ";
	gotoXY(30, 11); cout << " "; gotoXY(31, 11); cout << char(223); gotoXY(32, 11); cout << char(223);
	//R
	gotoXY(34, 7); cout << " "; gotoXY(35, 7); cout << char(220); gotoXY(36, 7); cout << char(220); gotoXY(37, 7); cout << " ";
	gotoXY(34, 8); cout << " "; gotoXY(37, 8); cout << " ";
	gotoXY(34, 9); cout << " "; gotoXY(35, 9); cout << char(223); gotoXY(36, 9); cout << char(223); gotoXY(37, 9); cout << " ";
	gotoXY(34, 10); cout << " ";
	gotoXY(34, 11); cout << " ";
	gotoXY(35, 10); cout << char(220);
	gotoXY(36, 10); cout << char(223);
	gotoXY(37, 11); cout << " ";
	gotoXY(30, 7);
	//L
	SetColor(5, 15);
	gotoXY(14, 7); cout << " ";
	gotoXY(14, 8); cout << " ";
	gotoXY(14, 9); cout << " ";
	gotoXY(14, 10); cout << " ";
	gotoXY(14, 11); cout << " ";
	//V
	gotoXY(44, 7); cout << " "; gotoXY(50, 7); cout << " ";
	gotoXY(44, 8); cout << " "; gotoXY(50, 8); cout << " ";
	gotoXY(45, 9); cout << " "; gotoXY(49, 9); cout << " ";
	gotoXY(46, 10); cout << " "; gotoXY(48, 10); cout << " ";
	gotoXY(47, 11); cout << " ";
	//S
	gotoXY(53, 7); cout << " "; gotoXY(54, 7); cout << " "; gotoXY(55, 7); cout << " "; gotoXY(56, 7); cout << " ";
	gotoXY(53, 8); cout << " ";
	gotoXY(53, 9); cout << " "; gotoXY(54, 9); cout << " "; gotoXY(55, 9); cout << " "; gotoXY(56, 9); cout << " ";
	gotoXY(56, 10); cout << " ";
	gotoXY(56, 11); cout << " "; gotoXY(54, 11); cout << " "; gotoXY(53, 11); cout << " "; gotoXY(55, 11); cout << " ";
	//C
	gotoXY(61, 7); cout << " "; gotoXY(62, 7); cout << " "; gotoXY(63, 7); cout << " "; gotoXY(64, 7); cout << " ";
	gotoXY(61, 8); cout << " ";
	gotoXY(61, 9); cout << " ";
	gotoXY(61, 10); cout << " ";
	gotoXY(61, 11); cout << " "; gotoXY(62, 11); cout << " "; gotoXY(63, 11); cout << " "; gotoXY(64, 11); cout << " ";
	//O
	gotoXY(67, 7); cout << " "; gotoXY(68, 7); cout << " ";
	gotoXY(66, 8); cout << " "; gotoXY(69, 8); cout << " ";
	gotoXY(66, 9); cout << " "; gotoXY(69, 9); cout << " ";
	gotoXY(66, 10); cout << " "; gotoXY(69, 10); cout << " ";
	gotoXY(67, 11); cout << " "; gotoXY(68, 11); cout << " ";
	//M
	SetColor(5, 0);
	gotoXY(71, 7); cout << " "; gotoXY(76, 7); cout << " ";
	gotoXY(71, 8); cout << " "; gotoXY(76, 8); cout << " ";
	gotoXY(71, 9); cout << " "; gotoXY(76, 9); cout << " ";
	gotoXY(71, 10); cout << " "; gotoXY(76, 10); cout << " ";
	gotoXY(71, 11); cout << " "; gotoXY(76, 11); cout << " ";
	gotoXY(72, 7); cout << " "; gotoXY(75, 7); cout << " ";
	gotoXY(73, 8); cout << char(220); gotoXY(74, 8); cout << char(220);
	//P
	gotoXY(78, 7); cout << " "; gotoXY(82, 7); cout << " ";
	gotoXY(78, 8); cout << " "; gotoXY(82, 8); cout << " ";
	gotoXY(78, 9); cout << " "; gotoXY(82, 9); cout << " ";
	gotoXY(78, 10); cout << " ";
	gotoXY(78, 11); cout << " ";
	SetColor(5, 0);
	gotoXY(79, 7); cout << char(220);
	gotoXY(81, 7); cout << char(220);
	gotoXY(80, 7); cout << char(220);
	gotoXY(79, 9); cout << char(223);
	gotoXY(81, 9); cout << char(223);
	gotoXY(80, 9); cout << char(223);
	//U
	gotoXY(84, 7); cout << " "; gotoXY(88, 7); cout << " ";
	gotoXY(84, 8); cout << " "; gotoXY(88, 8); cout << " ";
	gotoXY(84, 9); cout << " "; gotoXY(88, 9); cout << " ";
	gotoXY(84, 10); cout << " "; gotoXY(88, 10); cout << " ";
	gotoXY(84, 11); cout << " "; gotoXY(88, 11); cout << " ";
	gotoXY(85, 11); cout << char(223); gotoXY(86, 11); cout << char(223); gotoXY(87, 11); cout << char(223);
	//T
	gotoXY(91, 7); cout << " "; gotoXY(92, 7); cout << " "; gotoXY(93, 7); cout << " "; gotoXY(94, 7); cout << " "; gotoXY(95, 7); cout << " ";
	gotoXY(93, 8); cout << " ";
	gotoXY(93, 9); cout << " ";
	gotoXY(93, 10); cout << " ";
	gotoXY(93, 11); cout << " ";
	//E
	gotoXY(98, 7); cout << " "; gotoXY(99, 7); cout << char(220); gotoXY(100, 7); cout << char(220);
	gotoXY(98, 8); cout << " ";
	gotoXY(98, 9); cout << " "; gotoXY(99, 9); cout << char(220); gotoXY(100, 9); cout << char(220);
	gotoXY(98, 10); cout << " ";
	gotoXY(98, 11); cout << " "; gotoXY(99, 11); cout << char(223); gotoXY(100, 11); cout << char(223);
	//R
	gotoXY(102, 7); cout << " "; gotoXY(106, 7); cout << " "; gotoXY(103, 7); cout << char(220); gotoXY(104, 7); cout << char(220); gotoXY(105, 7); cout << char(220);
	gotoXY(102, 8); cout << " "; gotoXY(106, 8); cout << " ";
	gotoXY(102, 9); cout << " "; gotoXY(106, 9); cout << " "; gotoXY(103, 9); cout << char(223); gotoXY(104, 9); cout << char(223); gotoXY(105, 9); cout << char(223);
	gotoXY(102, 10); cout << " "; gotoXY(103, 10); cout << char(220); gotoXY(104, 10); cout << char(223);
	gotoXY(102, 11); cout << " "; gotoXY(105, 11); cout << " ";
	SetColor(15, 12);
	gotoXY(25, 22); printf("%c", 30);
	gotoXY(25, 15); printf("%c", 31);
	gotoXY(25, 14); printf("%c", 220);
	gotoXY(25, 23); printf("%c", 223);
	//Normal
	//N
	SetColor(4, 15);
	gotoXY(11, 17); cout << " "; gotoXY(12, 17); cout << " "; gotoXY(15, 17); cout << " ";
	gotoXY(11, 18); cout << " "; gotoXY(13, 18); cout << " "; gotoXY(15, 18); cout << " ";
	gotoXY(11, 19); cout << " "; gotoXY(14, 19); cout << " "; gotoXY(15, 19); cout << " ";
	gotoXY(11, 20); cout << " "; gotoXY(14, 20); cout << " "; gotoXY(15, 20); cout << " ";
	//O
	gotoXY(17, 18); cout << " "; gotoXY(21, 18); cout << " ";
	gotoXY(17, 19); cout << " "; gotoXY(21, 19); cout << " ";
	SetColor(4, 0);
	gotoXY(18, 17); cout << char(223); gotoXY(20, 17); cout << char(223); gotoXY(19, 17); cout << char(220);
	gotoXY(18, 20); cout << char(220); gotoXY(20, 20); cout << char(220); gotoXY(19, 20); cout << char(223);
	// R
	SetColor(4, 15);
	gotoXY(23, 17); cout << " "; gotoXY(26, 17); cout << " ";
	gotoXY(23, 18); cout << " ";
	gotoXY(23, 19); cout << " "; gotoXY(26, 18); cout << " ";
	gotoXY(23, 20); cout << " ";
	gotoXY(26, 20); cout << " ";

	SetColor(4, 0);
	gotoXY(24, 17); cout << char(220);
	gotoXY(25, 17); cout << char(220);
	gotoXY(24, 18); cout << char(223);
	gotoXY(25, 18); cout << char(223);
	gotoXY(25, 18); cout << char(223);
	gotoXY(24, 19); cout << char(220);
	gotoXY(25, 19); cout << char(223);
	// M
	SetColor(4, 15);
	gotoXY(28, 17); cout << " "; gotoXY(32, 17); cout << " ";
	gotoXY(28, 18); cout << " "; gotoXY(32, 18); cout << " ";
	gotoXY(28, 19); cout << " "; gotoXY(32, 19); cout << " ";
	gotoXY(28, 20); cout << " "; gotoXY(32, 20); cout << " ";
	gotoXY(29, 17); cout << " "; gotoXY(31, 17); cout << " ";
	SetColor(4, 0);
	gotoXY(30, 18); cout << char(220);
	// A
	SetColor(4, 15);
	gotoXY(34, 17); cout << " "; gotoXY(37, 17); cout << " ";
	gotoXY(34, 18); cout << " ";
	gotoXY(34, 19); cout << " "; gotoXY(37, 19); cout << " ";
	gotoXY(34, 20); cout << " ";
	gotoXY(37, 20); cout << " ";
	gotoXY(37, 18); cout << " ";
	SetColor(4, 0);
	gotoXY(35, 17); cout << char(220);
	gotoXY(36, 17); cout << char(220);
	gotoXY(35, 19); cout << char(223);
	gotoXY(36, 19); cout << char(223);
	// L
	SetColor(4, 15);
	gotoXY(39, 17); cout << " ";
	gotoXY(39, 18); cout << " ";
	gotoXY(39, 19); cout << " ";
	gotoXY(39, 20); cout << " ";
	SetColor(4, 0);
	gotoXY(40, 20); cout << char(223);
	gotoXY(41, 20); cout << char(223);
	//difficult
	//D
	SetColor(6, 15);
	gotoXY(72, 17); cout << " "; gotoXY(75, 18); cout << " "; gotoXY(74, 17); cout << " ";
	gotoXY(72, 18); cout << " ";
	gotoXY(72, 19); cout << " ";
	gotoXY(72, 20); cout << " "; gotoXY(75, 19); cout << " "; gotoXY(74, 20); cout << " ";
	SetColor(6, 0);
	gotoXY(73, 17); cout << char(220);
	gotoXY(73, 20); cout << char(223);
	//I
	gotoXY(77, 17); cout << " ";
	gotoXY(77, 18); cout << " ";
	gotoXY(77, 19); cout << " ";
	gotoXY(77, 20); cout << " ";
	//F
	gotoXY(79, 17); cout << " "; gotoXY(80, 17); cout << char(220); gotoXY(81, 17); cout << char(220);
	gotoXY(79, 18); cout << " "; gotoXY(80, 18); cout << char(223); gotoXY(81, 18); cout << char(223);
	gotoXY(79, 19); cout << " ";
	gotoXY(79, 20); cout << " ";
	gotoXY(83, 17); cout << " "; gotoXY(84, 17); cout << char(220); gotoXY(85, 17); cout << char(220);
	gotoXY(83, 18); cout << " "; gotoXY(84, 18); cout << char(223); gotoXY(85, 18); cout << char(223);
	gotoXY(83, 19); cout << " ";
	gotoXY(83, 20); cout << " ";
	gotoXY(87, 17); cout << " ";
	gotoXY(87, 18); cout << " ";
	gotoXY(87, 19); cout << " ";
	gotoXY(87, 20); cout << " ";
	//C
	gotoXY(90, 17); cout << " "; gotoXY(91, 17); cout << char(220); gotoXY(92, 17); cout << char(220);
	gotoXY(90, 18); cout << " ";
	gotoXY(90, 19); cout << " ";
	gotoXY(90, 20); cout << " "; gotoXY(91, 20); cout << char(223); gotoXY(92, 20); cout << char(223);
	//U
	gotoXY(94, 17); cout << " "; gotoXY(98, 17); cout << " ";
	gotoXY(94, 18); cout << " "; gotoXY(98, 18); cout << " ";
	gotoXY(94, 19); cout << " "; gotoXY(98, 19); cout << " ";
	gotoXY(94, 20); cout << " "; gotoXY(98, 20); cout << " "; gotoXY(95, 20); cout << char(223); gotoXY(96, 20); cout << char(223); gotoXY(97, 20); cout << char(223);
	//L
	gotoXY(100, 17); cout << " ";
	gotoXY(100, 18); cout << " ";
	gotoXY(100, 19); cout << " ";
	gotoXY(100, 20); cout << " "; gotoXY(102, 20); cout << char(223); gotoXY(101, 20); cout << char(223);
	//T
	gotoXY(104, 17); cout << " "; gotoXY(105, 17); cout << " "; gotoXY(106, 17); cout << " "; gotoXY(107, 17); cout << " "; gotoXY(108, 17); cout << " ";
	gotoXY(106, 18); cout << " ";
	gotoXY(106, 19); cout << " ";
	gotoXY(106, 20); cout << " ";
	int pos = -1;
	while (1)
	{
		_COMMAND = _getch();
		if ((_COMMAND == 75 || _COMMAND == 77) && pos == -1)
		{
			if (sound_on)
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			pos = 1;
			//Mui Ten 1
			SetColor(15, 15);
			gotoXY(25, 22); printf("%c", 30);
			gotoXY(25, 15); printf("%c", 31);
			gotoXY(25, 14); printf("%c", 220);
			gotoXY(25, 23); printf("%c", 223);
			//Mui Ten -1
			SetColor(15, 12);
			gotoXY(90, 22); printf("%c", 30);
			gotoXY(90, 15); printf("%c", 31);
			gotoXY(90, 14); printf("%c", 220);
			gotoXY(90, 23); printf("%c", 223);
			//Normal
			//N
			SetColor(6, 15);
			gotoXY(11, 17); cout << " "; gotoXY(12, 17); cout << " "; gotoXY(15, 17); cout << " ";
			gotoXY(11, 18); cout << " "; gotoXY(13, 18); cout << " "; gotoXY(15, 18); cout << " ";
			gotoXY(11, 19); cout << " "; gotoXY(14, 19); cout << " "; gotoXY(15, 19); cout << " ";
			gotoXY(11, 20); cout << " "; gotoXY(14, 20); cout << " "; gotoXY(15, 20); cout << " ";
			//O
			gotoXY(17, 18); cout << " "; gotoXY(21, 18); cout << " ";
			gotoXY(17, 19); cout << " "; gotoXY(21, 19); cout << " ";
			SetColor(6, 0);
			gotoXY(18, 17); cout << char(223); gotoXY(20, 17); cout << char(223); gotoXY(19, 17); cout << char(220);
			gotoXY(18, 20); cout << char(220); gotoXY(20, 20); cout << char(220); gotoXY(19, 20); cout << char(223);
			// R
			SetColor(6, 15);
			gotoXY(23, 17); cout << " "; gotoXY(26, 17); cout << " ";
			gotoXY(23, 18); cout << " ";
			gotoXY(23, 19); cout << " "; gotoXY(26, 18); cout << " ";
			gotoXY(23, 20); cout << " ";
			gotoXY(26, 20); cout << " ";

			SetColor(6, 0);
			gotoXY(24, 17); cout << char(220);
			gotoXY(25, 17); cout << char(220);
			gotoXY(24, 18); cout << char(223);
			gotoXY(25, 18); cout << char(223);
			gotoXY(25, 18); cout << char(223);
			gotoXY(24, 19); cout << char(220);
			gotoXY(25, 19); cout << char(223);
			// M
			SetColor(6, 15);
			gotoXY(28, 17); cout << " "; gotoXY(32, 17); cout << " ";
			gotoXY(28, 18); cout << " "; gotoXY(32, 18); cout << " ";
			gotoXY(28, 19); cout << " "; gotoXY(32, 19); cout << " ";
			gotoXY(28, 20); cout << " "; gotoXY(32, 20); cout << " ";
			gotoXY(29, 17); cout << " "; gotoXY(31, 17); cout << " ";
			SetColor(6, 0);
			gotoXY(30, 18); cout << char(220);
			// A
			SetColor(6, 15);
			gotoXY(34, 17); cout << " "; gotoXY(37, 17); cout << " ";
			gotoXY(34, 18); cout << " ";
			gotoXY(34, 19); cout << " "; gotoXY(37, 19); cout << " ";
			gotoXY(34, 20); cout << " ";
			gotoXY(37, 20); cout << " ";
			gotoXY(37, 18); cout << " ";
			SetColor(6, 0);
			gotoXY(35, 17); cout << char(220);
			gotoXY(36, 17); cout << char(220);
			gotoXY(35, 19); cout << char(223);
			gotoXY(36, 19); cout << char(223);
			// L
			SetColor(6, 15);
			gotoXY(39, 17); cout << " ";
			gotoXY(39, 18); cout << " ";
			gotoXY(39, 19); cout << " ";
			gotoXY(39, 20); cout << " ";
			SetColor(6, 0);
			gotoXY(40, 20); cout << char(223);
			gotoXY(41, 20); cout << char(223);
			//difficult
			//D
			SetColor(4, 15);
			gotoXY(72, 17); cout << " "; gotoXY(75, 18); cout << " "; gotoXY(74, 17); cout << " ";
			gotoXY(72, 18); cout << " ";
			gotoXY(72, 19); cout << " ";
			gotoXY(72, 20); cout << " "; gotoXY(75, 19); cout << " "; gotoXY(74, 20); cout << " ";
			SetColor(4, 0);
			gotoXY(73, 17); cout << char(220);
			gotoXY(73, 20); cout << char(223);
			//I
			gotoXY(77, 17); cout << " ";
			gotoXY(77, 18); cout << " ";
			gotoXY(77, 19); cout << " ";
			gotoXY(77, 20); cout << " ";
			//F
			gotoXY(79, 17); cout << " "; gotoXY(80, 17); cout << char(220); gotoXY(81, 17); cout << char(220);
			gotoXY(79, 18); cout << " "; gotoXY(80, 18); cout << char(223); gotoXY(81, 18); cout << char(223);
			gotoXY(79, 19); cout << " ";
			gotoXY(79, 20); cout << " ";
			gotoXY(83, 17); cout << " "; gotoXY(84, 17); cout << char(220); gotoXY(85, 17); cout << char(220);
			gotoXY(83, 18); cout << " "; gotoXY(84, 18); cout << char(223); gotoXY(85, 18); cout << char(223);
			gotoXY(83, 19); cout << " ";
			gotoXY(83, 20); cout << " ";
			gotoXY(87, 17); cout << " ";
			gotoXY(87, 18); cout << " ";
			gotoXY(87, 19); cout << " ";
			gotoXY(87, 20); cout << " ";
			//C
			gotoXY(90, 17); cout << " "; gotoXY(91, 17); cout << char(220); gotoXY(92, 17); cout << char(220);
			gotoXY(90, 18); cout << " ";
			gotoXY(90, 19); cout << " ";
			gotoXY(90, 20); cout << " "; gotoXY(91, 20); cout << char(223); gotoXY(92, 20); cout << char(223);
			//U
			gotoXY(94, 17); cout << " "; gotoXY(98, 17); cout << " ";
			gotoXY(94, 18); cout << " "; gotoXY(98, 18); cout << " ";
			gotoXY(94, 19); cout << " "; gotoXY(98, 19); cout << " ";
			gotoXY(94, 20); cout << " "; gotoXY(98, 20); cout << " "; gotoXY(95, 20); cout << char(223); gotoXY(96, 20); cout << char(223); gotoXY(97, 20); cout << char(223);
			//L
			gotoXY(100, 17); cout << " ";
			gotoXY(100, 18); cout << " ";
			gotoXY(100, 19); cout << " ";
			gotoXY(100, 20); cout << " "; gotoXY(102, 20); cout << char(223); gotoXY(101, 20); cout << char(223);
			//T
			gotoXY(104, 17); cout << " "; gotoXY(105, 17); cout << " "; gotoXY(106, 17); cout << " "; gotoXY(107, 17); cout << " "; gotoXY(108, 17); cout << " ";
			gotoXY(106, 18); cout << " ";
			gotoXY(106, 19); cout << " ";
			gotoXY(106, 20); cout << " ";
		}
		else if ((_COMMAND == 77 || _COMMAND == 75) && pos == 1)
		{
			if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
			pos = -1;
			//Mui Ten 1
			SetColor(15, 12);
			gotoXY(25, 22); printf("%c", 30);
			gotoXY(25, 15); printf("%c", 31);
			gotoXY(25, 14); printf("%c", 220);
			gotoXY(25, 23); printf("%c", 223);
			//Mui Ten -1
			SetColor(15, 15);
			gotoXY(90, 22); printf("%c", 30);
			gotoXY(90, 15); printf("%c", 31);
			gotoXY(90, 14); printf("%c", 220);
			gotoXY(90, 23); printf("%c", 223);
			//Normal
			//N
			SetColor(4, 15);
			gotoXY(11, 17); cout << " "; gotoXY(12, 17); cout << " "; gotoXY(15, 17); cout << " ";
			gotoXY(11, 18); cout << " "; gotoXY(13, 18); cout << " "; gotoXY(15, 18); cout << " ";
			gotoXY(11, 19); cout << " "; gotoXY(14, 19); cout << " "; gotoXY(15, 19); cout << " ";
			gotoXY(11, 20); cout << " "; gotoXY(14, 20); cout << " "; gotoXY(15, 20); cout << " ";
			//O
			gotoXY(17, 18); cout << " "; gotoXY(21, 18); cout << " ";
			gotoXY(17, 19); cout << " "; gotoXY(21, 19); cout << " ";
			SetColor(4, 0);
			gotoXY(18, 17); cout << char(223); gotoXY(20, 17); cout << char(223); gotoXY(19, 17); cout << char(220);
			gotoXY(18, 20); cout << char(220); gotoXY(20, 20); cout << char(220); gotoXY(19, 20); cout << char(223);
			// R
			SetColor(4, 15);
			gotoXY(23, 17); cout << " "; gotoXY(26, 17); cout << " ";
			gotoXY(23, 18); cout << " ";
			gotoXY(23, 19); cout << " "; gotoXY(26, 18); cout << " ";
			gotoXY(23, 20); cout << " ";
			gotoXY(26, 20); cout << " ";

			SetColor(4, 0);
			gotoXY(24, 17); cout << char(220);
			gotoXY(25, 17); cout << char(220);
			gotoXY(24, 18); cout << char(223);
			gotoXY(25, 18); cout << char(223);
			gotoXY(25, 18); cout << char(223);
			gotoXY(24, 19); cout << char(220);
			gotoXY(25, 19); cout << char(223);
			// M
			SetColor(4, 15);
			gotoXY(28, 17); cout << " "; gotoXY(32, 17); cout << " ";
			gotoXY(28, 18); cout << " "; gotoXY(32, 18); cout << " ";
			gotoXY(28, 19); cout << " "; gotoXY(32, 19); cout << " ";
			gotoXY(28, 20); cout << " "; gotoXY(32, 20); cout << " ";
			gotoXY(29, 17); cout << " "; gotoXY(31, 17); cout << " ";
			SetColor(4, 0);
			gotoXY(30, 18); cout << char(220);
			// A
			SetColor(4, 15);
			gotoXY(34, 17); cout << " "; gotoXY(37, 17); cout << " ";
			gotoXY(34, 18); cout << " ";
			gotoXY(34, 19); cout << " "; gotoXY(37, 19); cout << " ";
			gotoXY(34, 20); cout << " ";
			gotoXY(37, 20); cout << " ";
			gotoXY(37, 18); cout << " ";
			SetColor(4, 0);
			gotoXY(35, 17); cout << char(220);
			gotoXY(36, 17); cout << char(220);
			gotoXY(35, 19); cout << char(223);
			gotoXY(36, 19); cout << char(223);
			// L
			SetColor(4, 15);
			gotoXY(39, 17); cout << " ";
			gotoXY(39, 18); cout << " ";
			gotoXY(39, 19); cout << " ";
			gotoXY(39, 20); cout << " ";
			SetColor(4, 0);
			gotoXY(40, 20); cout << char(223);
			gotoXY(41, 20); cout << char(223);
			//difficult
			//D
			SetColor(6, 15);
			gotoXY(72, 17); cout << " "; gotoXY(75, 18); cout << " "; gotoXY(74, 17); cout << " ";
			gotoXY(72, 18); cout << " ";
			gotoXY(72, 19); cout << " ";
			gotoXY(72, 20); cout << " "; gotoXY(75, 19); cout << " "; gotoXY(74, 20); cout << " ";
			SetColor(6, 0);
			gotoXY(73, 17); cout << char(220);
			gotoXY(73, 20); cout << char(223);
			//I
			gotoXY(77, 17); cout << " ";
			gotoXY(77, 18); cout << " ";
			gotoXY(77, 19); cout << " ";
			gotoXY(77, 20); cout << " ";
			//F
			gotoXY(79, 17); cout << " "; gotoXY(80, 17); cout << char(220); gotoXY(81, 17); cout << char(220);
			gotoXY(79, 18); cout << " "; gotoXY(80, 18); cout << char(223); gotoXY(81, 18); cout << char(223);
			gotoXY(79, 19); cout << " ";
			gotoXY(79, 20); cout << " ";
			gotoXY(83, 17); cout << " "; gotoXY(84, 17); cout << char(220); gotoXY(85, 17); cout << char(220);
			gotoXY(83, 18); cout << " "; gotoXY(84, 18); cout << char(223); gotoXY(85, 18); cout << char(223);
			gotoXY(83, 19); cout << " ";
			gotoXY(83, 20); cout << " ";
			gotoXY(87, 17); cout << " ";
			gotoXY(87, 18); cout << " ";
			gotoXY(87, 19); cout << " ";
			gotoXY(87, 20); cout << " ";
			//C
			gotoXY(90, 17); cout << " "; gotoXY(91, 17); cout << char(220); gotoXY(92, 17); cout << char(220);
			gotoXY(90, 18); cout << " ";
			gotoXY(90, 19); cout << " ";
			gotoXY(90, 20); cout << " "; gotoXY(91, 20); cout << char(223); gotoXY(92, 20); cout << char(223);
			//U
			gotoXY(94, 17); cout << " "; gotoXY(98, 17); cout << " ";
			gotoXY(94, 18); cout << " "; gotoXY(98, 18); cout << " ";
			gotoXY(94, 19); cout << " "; gotoXY(98, 19); cout << " ";
			gotoXY(94, 20); cout << " "; gotoXY(98, 20); cout << " "; gotoXY(95, 20); cout << char(223); gotoXY(96, 20); cout << char(223); gotoXY(97, 20); cout << char(223);
			//L
			gotoXY(100, 17); cout << " ";
			gotoXY(100, 18); cout << " ";
			gotoXY(100, 19); cout << " ";
			gotoXY(100, 20); cout << " "; gotoXY(102, 20); cout << char(223); gotoXY(101, 20); cout << char(223);
			//T
			gotoXY(104, 17); cout << " "; gotoXY(105, 17); cout << " "; gotoXY(106, 17); cout << " "; gotoXY(107, 17); cout << " "; gotoXY(108, 17); cout << " ";
			gotoXY(106, 18); cout << " ";
			gotoXY(106, 19); cout << " ";
			gotoXY(106, 20); cout << " ";
		}
		else if (_COMMAND == 13)
		{
			if (pos == -1)
			{
				file_mode = 0;
				if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				/*Attack_point_array[7] = { 1,2,3,4,5,6,7 };*/// Mảng điểm tấn công.
				Attack_point_array[0] = 1; Attack_point_array[1] = 2;
				Attack_point_array[2] = 3; Attack_point_array[3] = 4;
				Attack_point_array[4] = 5; Attack_point_array[5] = 6;
				Attack_point_array[6] = 7;
				/*Defence_point_array[7] = { 0,3,27,99,729,6561,59049 };*/// Mảng điểm phòng ngự.
				Defence_point_array[0] = 0; Defence_point_array[1] = 3;
				Defence_point_array[2] = 27; Defence_point_array[3] = 512;
				Defence_point_array[4] = 1024; Defence_point_array[5] = 6561;
				Defence_point_array[6] = 59049;
				break;
			}
			else
			{
				file_mode = 1;
				if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				//Attack_point_array[7] = {0,9,54,162,1024,13112,118008};// Mảng điểm tấn công.
				 //Defence_point_array[7] = { 0,3,27,512,1024,6561,59049 };// Mảng điểm phòng ngự.
				Attack_point_array[0] = 0; Attack_point_array[1] = 9;
				Attack_point_array[2] = 54; Attack_point_array[3] = 162;
				Attack_point_array[4] = 1024; Attack_point_array[5] = 13112;
				Attack_point_array[6] = 118008;
				Defence_point_array[0] = 0; Defence_point_array[1] = 3;
				Defence_point_array[2] = 27; Defence_point_array[3] = 512;
				Defence_point_array[4] = 1024; Defence_point_array[5] = 6561;
				Defence_point_array[6] = 59049;
				break;
			}
		}
	}

}

 long TC_Doc(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_row + Dem < 12; Dem++)
	{
		if (_A[cur_row + Dem][cur_col].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row + Dem][cur_col].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_row - Dem >= 0; Dem++)
	{
		if (_A[cur_row - Dem][cur_col].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row - Dem][cur_col].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	if (Quan_dich == 2)
		return 0;
	diem_tong -= Defence_point_array[Quan_dich + 1] * 2;
	diem_tong += Attack_point_array[Quan_ta];
	return diem_tong;
}

 long TC_Ngang(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_col + Dem < 12; Dem++)
	{
		if (_A[cur_row][cur_col + Dem].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row][cur_col + Dem].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_col - Dem >= 0; Dem++)
	{
		if (_A[cur_row][cur_col - Dem].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row][cur_col - Dem].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	if (Quan_dich == 2)
		return 0;
	diem_tong -= Defence_point_array[Quan_dich + 1] * 2;
	diem_tong += Attack_point_array[Quan_ta];
	return diem_tong;
}

 long TC_Cheo_Xuoi(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_row + Dem < 12 && cur_col + Dem < 12; Dem++)
	{
		if (_A[cur_row + Dem][cur_col + Dem].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row + Dem][cur_col + Dem].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_row - Dem >= 0 && cur_col - Dem >= 0; Dem++)
	{
		if (_A[cur_row - Dem][cur_col - Dem].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row - Dem][cur_col - Dem].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	if (Quan_dich == 2)
		return 0;
	diem_tong -= Defence_point_array[Quan_dich + 1] * 2;
	diem_tong += Attack_point_array[Quan_ta];
	return diem_tong;
}

 long TC_Cheo_Nguoc(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_row + Dem < 12 && cur_col - Dem >= 0; Dem++)
	{
		if (_A[cur_row + Dem][cur_col - Dem].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row + Dem][cur_col - Dem].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_row - Dem >= 0 && cur_col + Dem < 12; Dem++)
	{
		if (_A[cur_row - Dem][cur_col + Dem].Turn == flag_turn)
			Quan_ta++;
		else
			if (_A[cur_row - Dem][cur_col + Dem].Turn == -flag_turn)
			{
				Quan_dich++;
				break;
			}
			else
				break;
	}
	if (Quan_dich == 2)
		return 0;
	diem_tong -= Defence_point_array[Quan_dich + 1] * 2;
	diem_tong += Attack_point_array[Quan_ta];
	return diem_tong;
}

 long PN_Doc(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_row + Dem < 12; Dem++)
	{
		if (_A[cur_row + Dem][cur_col].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row + Dem][cur_col].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_row - Dem >= 0; Dem++)
	{
		if (_A[cur_row - Dem][cur_col].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row - Dem][cur_col].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	if (Quan_ta == 2)
		return 0;
	diem_tong += Defence_point_array[Quan_dich];
	return diem_tong;
}

 long PN_Ngang(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_col + Dem < 12; Dem++)
	{
		if (_A[cur_row][cur_col + Dem].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row][cur_col + Dem].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_col - Dem >= 0; Dem++)
	{
		if (_A[cur_row][cur_col - Dem].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row][cur_col - Dem].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	if (Quan_ta == 2)
		return 0;
	diem_tong += Defence_point_array[Quan_dich];
	return diem_tong;
}

 long PN_Cheo_Xuoi(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_row + Dem < 12 && cur_col + Dem < 12; Dem++)
	{
		if (_A[cur_row + Dem][cur_col + Dem].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row + Dem][cur_col + Dem].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_row - Dem >= 0 && cur_col - Dem >= 0; Dem++)
	{
		if (_A[cur_row - Dem][cur_col - Dem].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row - Dem][cur_col - Dem].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	if (Quan_ta == 2)
		return 0;
	diem_tong += Defence_point_array[Quan_dich];
	return diem_tong;
}

 long PN_Cheo_Nguoc(int cur_row, int cur_col)
{
	long diem_tong = 0;
	int Quan_ta = 0, Quan_dich = 0;
	if (_A[cur_row][cur_col].Turn != 0)
		Quan_ta++;
	for (int Dem = 1; Dem < 6 && cur_row + Dem < 12 && cur_col - Dem >= 0; Dem++)
	{
		if (_A[cur_row + Dem][cur_col - Dem].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row + Dem][cur_col - Dem].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	for (int Dem = 1; Dem < 6 && cur_row - Dem >= 0 && cur_col + Dem < 12; Dem++)
	{
		if (_A[cur_row - Dem][cur_col + Dem].Turn == flag_turn)
		{
			Quan_ta++;
			break;
		}
		else
			if (_A[cur_row - Dem][cur_col + Dem].Turn == -flag_turn)
				Quan_dich++;
			else
				break;
	}
	if (Quan_ta == 2)
		return 0;
	diem_tong += Defence_point_array[Quan_dich];
	return diem_tong;
}

 long Diem_TC(int i, int j)
{
	long TC = TC_Ngang(i, j) + TC_Doc(i, j) + TC_Cheo_Xuoi(i, j) + TC_Cheo_Nguoc(i, j);
	return TC;
}

 long Diem_PN(int i, int j)
{
	long PN = PN_Ngang(i, j) + PN_Doc(i, j) + PN_Cheo_Xuoi(i, j) + PN_Cheo_Nguoc(i, j);
	return PN;
}

 _POINT Nuoc_di()
{
	_POINT O_co_result = { 0,0,0 };
	long MaxPoint = 0;
	long TmpPoint = 0;
	int i = 0, j = 0;
	for (i = 0; i < 12; i++)
		for (j = 0; j < 12; j++)
		{
			if (_A[i][j].Turn == 0)
			{
				if (Diem_TC(i, j) > Diem_PN(i, j))
					TmpPoint = Diem_TC(i, j);
				else
					TmpPoint = Diem_PN(i, j);
				if (MaxPoint < TmpPoint)
				{
					MaxPoint = TmpPoint;
					O_co_result = { i,j,flag_turn };
				}
			}
		}
	return O_co_result;
}


 void Com_play()
{
	_POINT O_co;
	if (Count_X == 0 || count_O == 0)
		O_co = { 5,5,flag_turn };
	else
		O_co = Nuoc_di();
	_X = 4 * O_co.y + LEFT + 2;
	_Y = 2 * O_co.x + TOP + 1;
	check_turn_for_time_version_1 = 1;
	if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
	gotoXY(_X, _Y);
	if (_TURN)
	{
		SetColor(15, 4);
		printf("X");
		ve_X(15, 15);
		Ve_O(1, 1);
	}
	else
	{
		SetColor(15, 1);
		printf("O");
		Ve_O(15, 15);
		ve_X(4, 4);
	}
	if (_TURN)
		Count_Step_X();
	else
		Count_Step_O();
	check = 1;
	check_turn_for_time_version_1 = 0;
	_A[O_co.x][O_co.y].Turn = -1;
}

 void Player_Vs_Com()
{
	flag_turn = (_TURN) * (_TURN)-3 * _TURN + 1;
	check_time_or_not_time = 0;
	check = 1;
	check_exit = 0;
	bool validEnter = true;
	int o = 0;
	check_turn_for_time_version_1 = 0;
	while (1)
	{
		Sleep(500);
		if (_TURN)
		{
			Com_play();
			_TURN = true;
		}
		else
		{
			gotoXY(_X, _Y);
			while (1)
			{
				_COMMAND = toupper(_getch());
				if (_COMMAND == 75 && _TURN == false && check_win_over_tim == 0)
				{
					if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					MoveLeft();
				}
				else if (_COMMAND == 72 && _TURN == false && check_win_over_tim == 0)
				{
					if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					MoveUp();
				}
				else if (_COMMAND == 80 && _TURN == false && check_win_over_tim == 0)
				{
					if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					MoveDown();
				}
				else if (_COMMAND == 77 && _TURN == false && check_win_over_tim == 0)
				{
					if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					MoveRight();
				}
				else if (_COMMAND == 'L' && check_win_over_tim == 0)
				{
					check_time_or_not_time = 1;
					if (sound_on) PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					SaveGame(-5);
					check_exit = 1;
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
				else if (_COMMAND == 13 && _TURN == false && check_win_over_tim == 0)
				{// Người dùng đánh dấu trên màn hình bàn cờ
					switch (CheckBoard(_X, _Y)) {
					case -1:
						validEnter = false;
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
						if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
						gotoXY(_X, _Y);
						SetColor(15, 1);
						printf("O");
						ve_X(4, 4);
						Ve_O(15, 15);
						Count_Step_O();
						check = 1;
						check_turn_for_time_version_1 = 0;
						validEnter = true;
						break;
					case 0: validEnter = false; // Khi đánh vào ô đã đánh rồi
					}
					if (validEnter)
						break;
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
							o = 1;
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
				if (o == 1) break;
			}
			_TURN = false;
			if (o == 1)
			{
				_TURN = true;
			}
		}
		if (check_exit == 1) break;
		if (o == 0)
		{
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
					if (Check_matrix_full == 0) Draw_Table_X_or_win(0);
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
		}
		o = 0;

	}

}

 void Hint()
{
	Attack_point_array[0] = 0; Attack_point_array[1] = 9;
	Attack_point_array[2] = 54; Attack_point_array[3] = 162;
	Attack_point_array[4] = 1024; Attack_point_array[5] = 13112;
	Attack_point_array[6] = 118008;
	Defence_point_array[0] = 0; Defence_point_array[1] = 3;
	Defence_point_array[2] = 27; Defence_point_array[3] = 512;
	Defence_point_array[4] = 1024; Defence_point_array[5] = 6561;
	Defence_point_array[6] = 59049;
	_POINT O_co;
	if (Count_X == 0 && count_O == 0)
		O_co = { 5,5,flag_turn };
	else
		O_co = Nuoc_di();
	tmp_hint = O_co;
	_X = 4 * O_co.y + LEFT + 2;
	_Y = 2 * O_co.x + TOP + 1;
	check_turn_for_time_version_1 = 1;
	if (sound_on) PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
	gotoXY(_X, _Y);
	if (_TURN)
	{
		SetColor(15, 0);
		printf("X");
	}
	else
	{
		SetColor(15, 0);
		printf("O");
	}
	_A[O_co.x][O_co.y].Turn = 0;
}