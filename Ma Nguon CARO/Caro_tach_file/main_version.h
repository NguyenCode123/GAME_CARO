#pragma once

#ifndef MAIN_VERSION_H
#define MAIN_VERSION_H

#include"Thu_vien_va_bien_toan_cuc.h"
#include"Game.h"
#include"Cai_dat_he_thong.h"
#include"Time.h"
#include"Menu.h"

extern  void FixConsoleWindow();
// Hàm này có chức năng chỉnh bảng Console cố định

extern void ShowScrollbar(BOOL Show);
//Hàm này có chức năng chỉnh thanh trượt lên xuống trong CONSole ẩn đi

extern void  main_Menu();
//Thiết kế hoàn chỉnh chạy menu

 extern  void start_menu();
//Thiết kế các hiệu ứng chạy mở đầu menu

extern void Time();
//Đếm ngược thời gian cho từng lượt chơi và kiểm tra thắng thua khi hết thời gian

#endif

