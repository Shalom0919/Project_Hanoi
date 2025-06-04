/* 2452098 计算机 赵崇治 */
#pragma once

/* 将所有const常量定义的头文件包含进来 */
#include "hanoi_const_value.h"

/* ------------------------------------------------------------------------------------------------------

     本文件功能：
	1、为了保证 hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp 能相互访问函数的函数声明
	2、一个以上的cpp中用到的宏定义（#define）或全局只读（const）变量，个数不限
	3、可以参考 cmd_console_tools.h 的写法（认真阅读并体会）
   ------------------------------------------------------------------------------------------------------ */
void input(const int op);
int menu();
void wait();
void showch(const int X, const int Y, const char ch);
void outputGraph(const int op);
void outputStatus(int op);
void init(int op, int n, char from);
void initPrint(int op, int steps, int n, char src, char dst);
void Output_4(int n, char src, char dst, int order);
void Move(char src, char dst);
void solve(int n, char src, char dst, int op, int order);
void drawCol();
void manageError(int* n, char* src, char* tmp, char* dst, int op);
void hanoi(int n, char src, char tmp, char dst, int op);
void solve_123(int op);
void solve_4(int op);
void solve_6(int op);
void solve_7(int op);
void solve_8(int op);
void solve_9(int op);