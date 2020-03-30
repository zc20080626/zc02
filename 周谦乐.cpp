// 周谦乐.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<direct.h>
#include<fstream>
#include "includehead.h"

using namespace std;

string filepath;

int main()
{
    outbanben();//输出版本
    
    cout << "" << endl;//空行
    
    filepath = getpath();//获取文件路径
 

    bool bl;//执行结束
    while (bl!=false)
    {
        zql();
    }
}

