#pragma once
/*��ǫ������ͷ�ļ�
*stdoutput
*for ��ǫ��v0.0.0.0 debug alpha
*file v0.0.0.1
*latest edit 20200330
*/

#include<iostream>
#include<string>

using namespace std;

int outbanben() {    //����汾��Ϣ
    cout << "��ǫ��-framework v0.0.0.0 debug alpha" << endl;
    cout << "Lastest edit time��20200330" << endl;

    return 1;
}

string getpath() {
    string filepath;//�ļ�·��
    filepath=_pgmptr;

    return filepath;
}