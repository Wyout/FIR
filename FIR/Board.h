#pragma once
#include <iostream>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
#include <conio.h>

class Board {
public:
    void draw();

    int x = 0;
    int y = 0;
    int value = -1; // 黑棋：1 白棋：0 空位：-1
    int modle; // 模式
    bool isNew = false; // 是否有选择框
    int score = 0;
    COLORREF color = WHITE; // 棋盘背景色
};