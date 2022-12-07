#include <iostream>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
#include <conio.h>

#include "Board.h"
#include "Location.h"

// 声明函数
void drawFunc(); // 绘制
void initFunc(); // 初始化操作
Location findBestLocation(); // 寻找最佳位置
void isWin(); // 判断胜负
void gameMain(); // 游戏主函数

int main() {
    // 初始化游戏绘图环境
    initgraph(700, 700, NOMINIMIZE);
    setbkcolor(WHITE);

    // 修改标题名称
    HWND hwnd = GetHWnd(); 
    SetWindowText(hwnd, "五子棋 V0.1");

    cleardevice();

    while (true) {

    }

    return 0;
}

// 实现函数
void drawFunc() {

}

void initFunc() {

}

Location findBestLocation() {
    Location obj;
    return obj;
}

void isWin() {

}

void gameMain() {

}