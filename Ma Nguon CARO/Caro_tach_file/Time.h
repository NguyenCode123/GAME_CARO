#pragma once

#ifndef TIME_H
#define TIME_H

#include"Thu_vien_va_bien_toan_cuc.h"
#include"Game.h"
#include"Cai_dat_he_thong.h"

extern void Ve_clock();
//Vẽ hình đồng hồ đếm ngược thời gian

extern void count_time(int h);
//Vẽ các số đếm ngược thời gian bắt đầu từ giây thứ 10 

extern void color_for_win_version_time(int number);
//Vẽ hiệu ứng chiến thắng cho người chơi còn lại khi hetsw thời gian

#endif