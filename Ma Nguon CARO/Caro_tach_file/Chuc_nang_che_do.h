#pragma once

#ifndef CHUC_NANG_CHE_DO_H
#define CHUC_NANG_CHE_DO_H

#include"Thu_vien_va_bien_toan_cuc.h"
#include"Cai_dat_he_thong.h"
#include"Time.h"
#include"Save_and_Load.h"
#include"Player_vs_Computer.h"
#include"Game.h"

extern void Huong_dan_phim_tat();
//Vẽ bảng hướng dẫn các phím tắt

extern int Want_to_continue();
//Hỏi người chơi có muốn tiếp tục chơi ván mới không

extern void  Want_to_resume();
//Hỏi người chơi có muốn tiếp trận đấu khi trận đấu đang dừng

extern void Want_To_Save_Game();
//Hỏi người chơi có muốn lưu ván đấu khi Out Game

extern void Hint();
//Gợi ý nước đi

#endif
