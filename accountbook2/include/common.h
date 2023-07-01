#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

#define INCOME "收入"
#define COST "支出"
#define FILENAME "record.txt"

using namespace std;

// 通用功能性函数声明
// 绘制菜单的函数
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

// 读取键盘输入进行合法性校验的函数
char readMenuSelection(int options);
char readQuitConfirm();
int readAmount();