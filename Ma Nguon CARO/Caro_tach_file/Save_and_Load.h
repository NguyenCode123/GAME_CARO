#pragma once

#ifndef SAVE_AND_LOAD_H
#define SAVE_AND_LOAD_H

#include"Thu_vien_va_bien_toan_cuc.h"
#include"Cai_dat_he_thong.h"
#include"Game.h"

extern bool Enter_File_Name(char data[16]);
//Nhập tên file, nếu file đã lưu rồi thì ấn lưu sẽ không cần nhập lại tên file

extern void SaveGame(int n);
//Lưu ván đấu

extern void Danh_Sach_File_Luu();
//Vẽ chữ List

extern bool DeleteFile(char file_path[20]);
//Xóa File

extern void Delete_Name(vector<string>& a, vector<string>& main, int& cur_pos, int& first_mem);
//Xóa File hiển thị trên màn hình

extern bool StringCmp(string str1, string str2);
//So sánh chuỗi con nhập vào với các chuỗi tên file, liên quan đến Search File (không phân biệt chữ thường và hoa)

extern void Print(vector<string>a, int cur_pos, int first_mem, char arrow);
//In danh sách các File ra màn hình

extern void Arrow(vector<string> a, int& first_mem, char arrow);
//Vẽ mũi tên hiển thị lên xuống trong phần Load Game

extern void Go_Up_List(vector<string> a, int& cur_pos, int& first_mem, char arrow);
//Cập nhập lại danh sách File được in ra khi di chuyển lên

extern void Go_Down_List(vector<string> a, int& cur_pos, int& first_mem, char arrow);
//Cập nhập lại danh sách File được in ra khi di chuyển xuống

extern void list(vector<string>& a, vector<string>& main, char cmd, int& cur_pos, int& first_mem);
//Kết hợp giữa các hàm trên

extern string Keyword(string& str, int& pos, char& cmd, int& cur_pos, int& first_mem);
//Hàm nhập kí tự để so sanh chuỗi tìm các file có chứ các kĩ tự vừa nhập, liên quan Search File

extern void List_and_search(string& Data);
//Kết hợp giữa hàm list và Keyword

extern void LoadGame(string data);
//Mở File đã lưu tiếp tục trận đấu

#endif