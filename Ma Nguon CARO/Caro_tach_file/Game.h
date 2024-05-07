#pragma once

#ifndef GAME_H
#define GAME_H

#include"Thu_vien_va_bien_toan_cuc.h"
#include"Cai_dat_he_thong.h"
#include"Chuyen_nen_vao_Game.h"
#include"Time.h"
#include"Player_vs_Player.h"
#include"Player_vs_Computer.h"
#include"Chuc_nang_che_do.h"

extern void ResetData();
//Hàm này có chức năng reset lại dữ liệu về ban đầu

extern void DrawBoard(int pSize);
//Hàm này có chức năng vẽ bảng caro

extern void StartGame();
//Hàm này có chức năng bắt đầu vào trò chơi khi người dùng nhấn "Start Game" trên Menu

extern int ProcessFinish(int pWhoWin);
//Hàm có chức năng xuất ra kết quả người thắng và thua

extern bool Check_matrix_full();
//Hàm kiểm tra nếu bàn cờ cara bị full và không còn ô nào trống

extern bool kiem_tra_tren_mang_5x5_hai_duong_cheo(int x, int y);
//Hàm kiểm tra nếu một trong hai người chơi X hoặc O có đường thắng là đường chéo (bao gồm cả đường chéo chính và phụ)

extern bool kiem_tra_tren_mang_5x5_cac_duong_thang_hang(int x, int y);
//Hàm kiểm tra nếu một trong hai người chơi X hoặc O có đường thắng là đường thẳng

extern bool check_X_or_O_win();
//Hàm có chức năng kiểm tra X hay O thắng

extern void color_for_win();
//Hàm có chức năng điều chỉnh 5 nước thắng thành màu khác cho dễ phân biệt

extern int TestBoard();
//Hàm này có chức năng kiểm tra xem người dùng thắng, thua, hòa hay không thắng, thua, hòa

extern int CheckBoard(int pX, int pY);
//Hàm này có chức năng biết lượt nào nhập "X" và lượt nào nhập "O" khi nhấn Enter

extern void MoveRight();
//Di chuyển phải

extern void MoveLeft();
//Di chuyển trái

extern void MoveDown();
//Di chuyển xuống

extern void MoveUp();
//Di chuyển lên

extern void ve_X(int a, int b);
//Hàm này có chức năng vẽ Ô vuông X màu đỏ hiển thị lượt đi của X

extern void Ve_O(int a, int b);
//Hàm này có chức năng vẽ Ô vuông O màu xanh hiển thị lượt đi của O

extern void Draw_Win_and_Step_for_X();
//Vẽ bảng số lượt win và step cho X

extern void Draw_Win_and_Step_for_O();
//Vẽ bảng lượt win và step cho O

extern void Count_Step_X();
//Đếm số lượt quân X đã đánh

extern void Count_Step_O();
//Đếm số lượt quân O đã đánh

extern void Draw_X_OR_O_For_Win(int win_number);
//Vẽ CHỮ xuất hiện kết quả X hay O thắng hoặc hòa

extern void Draw_Table_X_or_win(int win_number);
//Vẽ BẢNG xuất hiện kết quả X hay O thắng hoặc hòa

#endif