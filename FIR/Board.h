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
    int value = -1; // ���壺1 ���壺0 ��λ��-1
    int modle; // ģʽ
    bool isNew = false; // �Ƿ���ѡ���
    int score = 0;
    COLORREF color = WHITE; // ���̱���ɫ
};