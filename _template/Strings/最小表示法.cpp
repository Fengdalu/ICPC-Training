﻿/*
* 求一个字符串字典序最小的开头位置 ,
* 复制串两次 , len = 原长度
*/
#include <bits/stdc++.h>
int smallest(char *s, int len) {
    int i = 0, j = 1, k = 0;
    while(i < len && j < len) {
        k = 0;
        while(k < len && (s[i + k] == s[j + k])) k++;
        if(k >= len) break;
        if(s[i + k] > s[j + k]) i = std::max(i + k + 1, j + 1);
        else j = std::max(i + 1, j + k + 1);
    }
    return std::min(i, j);
}

int biggest(char *s, int len) {
    int i = 0,j = 1,k = 0;
    while(i < len && j < len) {
        k = 0;
        while(k < len && (s[i + k] == s[j + k])) k++;
        if(k >= len) break;
        if(s[i + k] < s[j + k]) i = std::max(i + k + 1, j + 1);
        else j = std::max(i + 1, j + k + 1);
    }
    return std::min(i,j);
}
