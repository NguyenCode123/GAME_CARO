#pragma once

#ifndef MENU_H
#define MENU_H

#include"Thu_vien_va_bien_toan_cuc.h"
#include"Cai_dat_he_thong.h"
#include"Player_vs_Player.h"
#include"Player_vs_Computer.h"
#include"Save_and_Load.h"
#include"Game.h"
#include"Chuyen_nen_vao_Game.h"
#include"Time.h"

extern void Menu();
//Vẽ in chữ hiển thị các chế độ ra màn hình

extern void C();
//Vẽ chữ C trong CARO

extern void A();
//Vẽ chữ A trong CARO

extern void R();
//Vẽ chữ R trong CARO

extern void _O();
//Vẽ chữ O trong CARO

extern void c();
//Vẽ bóng của chữ C

extern void _a();
//Vẽ bóng của chữ A

extern void r();
//Vẽ bóng của chữ R

extern void o();
//Vẽ bóng của chữ O

extern void chay();
//Chạy vẽ màu chữ CARO thay đổi màu sắc liên tục

extern void hello();
//Vẽ chữ Hello

extern void help();
//Thiết kế chế độ Help hướng dẫn người chơi

extern void team();
//Giới thiệu thành viên nhóm

extern void About_Menu();
//Thiết kế chế độ about giớ thiệu nhóm

extern int dichuyen(int y);
//Thiết kế chức năng di chuyển chọn chế độ trong menu

extern void Move_Up();
//Di chuyển lên 

extern void Move_Down();
//Di chuyển xuống

extern void kiemtra(int y);
//Thiết kế kiểm tra tham số đầu vào là gì để chọn chế độ tương ứng với tham số đó

extern void ve_thang_menu();
//Vẽ bậc thang chế độ cho người dùng chọn trong menu

extern void nguoi_ngoai_hanh_tinh();
//Vẽ người ngoài hành tinh

extern void UFO();
//Vẽ UFO

extern void vetinh();
//Vẽ vệ tinh

extern void Chay_anh_sang();
//Vẽ ánh sáng chuyển động liên tục

extern void VeLoa();
//Vẽ Loa

extern void Bat_Tat_Loa(int check);
//Vẽ bật/tắt loa

extern void thank_you();

#endif