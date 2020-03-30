#pragma once
/*周谦乐依赖头文件
*stdoutput
*for 周谦乐v0.0.0.0 debug alpha
*file v0.0.0.1
*latest edit 20200330
*/

#include<iostream>
#include<string>

using namespace std;

int outbanben() {    //输出版本信息
    cout << "周谦乐-framework v0.0.0.0 debug alpha" << endl;
    cout << "Lastest edit time：20200330" << endl;

    return 1;
}

string getpath() {
    string filepath;//文件路径
    filepath=_pgmptr;

    return filepath;
}