#pragma once

#ifndef PLAYER_VS_COMPUTER_H
#define PLAYER_VS_COMPUTER_H

#include"Thu_vien_va_bien_toan_cuc.h"
#include"Cai_dat_he_thong.h"
#include"Game.h"
#include"Chuc_nang_che_do.h"
#include"Save_and_Load.h"

extern void PvC();
//Vẽ chữ chế độ Player vs Computer

extern void dif();
//Vẽ chữ difficult bên cạnh chế độ Player vs Computer khi ở chế độ khó

extern void Nor();
//Vẽ chữ normal bên cạnh chế độ Player vs Computer khi ở chế độ bình thường

extern void PvCLV();
//Chọn chế độ khó dễ 

extern long TC_Doc(int cur_row, int cur_col);
//Tính điểm tấn công theo hàng dọc

extern long TC_Ngang(int cur_row, int cur_col);
//Tính điểm tấn công theo hàng ngang

extern long TC_Cheo_Xuoi(int cur_row, int cur_col);
//Tính điểm tấn công theo đường chéo chính

extern long TC_Cheo_Nguoc(int cur_row, int cur_col);
//Tính điểm tấn công theo đường chéo phụ

extern long PN_Doc(int cur_row, int cur_col);
//Tính điểm phòng ngự theo hàng dọc

extern long PN_Ngang(int cur_row, int cur_col);
//Tính điểm phòng ngự theo hàng ngang

extern long PN_Cheo_Xuoi(int cur_row, int cur_col);
//Tính điểm phòng ngự theo đường chéo chính

extern long PN_Cheo_Nguoc(int cur_row, int cur_col);
//Tính điểm phòng ngự theo đường chéo phụ

extern long Diem_TC(int i, int j);
//Tổng hợp các hàm Tấn công phía trên

extern long Diem_PN(int i, int j);
//Tổng hợp các hàm Phòng ngự phía trên

extern _POINT Nuoc_di();
//Phân tích nước đi 

extern void Com_play();
//Computer đánh cờ vào nước đi đã phân tích

extern void Player_Vs_Com();
//Chế độ người đấu với máy 

#endif
