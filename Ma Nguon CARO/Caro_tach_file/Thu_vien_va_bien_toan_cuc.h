#pragma once

#ifndef THU_VIEN_VA_BIEN_TOAN_CUC_H
#define THU_VIEN_VA_BIEN_TOAN_CUC_H

#include<iostream>
#include<Windows.h>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include <mmsystem.h>
#include<vector>
#include<thread>
#include<string>

using namespace std;

#define BOARD_SIZE 12 // Kích thức ma trận bàn cờ
#define LEFT 3 // Tọa độ trái màn hình bàn cờ;
#define TOP 1

 struct _POINT
{
	int x, y;
	int Turn;
}; // x: tọa độ dòng, y: tọa độ cột, Turn: đánh dấu

 extern _POINT _A[BOARD_SIZE][BOARD_SIZE]; //Ma trận bàn cờ
 extern bool _TURN; //true là lượt người thứ nhất và false là lượt người thứ hai
 extern int _COMMAND; // Biến nhận giá trị phím người dùng nhập
 extern int _X, _Y;
 extern int _Z;
 extern int so_o_con_trong;
 extern bool X_win;
 extern int x_khoi_dau, y_khoi_dau;
 extern int color_number;
 extern bool Turn_win;
 extern int Count_X, count_O; //đém số lượt đi
 extern char X[11]; extern char O[11];//Nhập tên người dùng
 extern int win_number_X, win_number_O;// đếm số lượt thắng
 extern int number_to_check_number_of_win;
 extern bool X_check;
 extern int check;
 extern int check_win_over_tim;
 extern int check_time_or_not_time;
 extern int check_turn_for_time_version_1;
 extern int check_turn_for_time_version_2;
 extern int check_exit;
 extern int check_time_for_save_game;
 extern bool q;
 extern int p;
 extern int t;
 extern int dif_nor;
 extern string  name;
 extern bool flag_ai;
 extern bool tat;
 extern int file_mode;
 extern bool flag_hint;
 extern bool sound_on;
 extern _POINT tmp_hint;
 extern bool start;
 extern int flag_turn;

#endif