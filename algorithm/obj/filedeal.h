#ifndef FILEDEAL
#define FILEDEAL
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include<map>
#define  max_len  1024

using namespace std;

/**
���������ļ��ҵ���Ҫ����Ϣ
flag = 0 ȥǰ��Ŀո�
1 ȥ����Ŀո�
2 ȥǰ��Ŀո�

*/

/*
static  void logmanager(string str)
{
    cout << str<<endl;
}
*/

class FileDeal
{
public:
    FileDeal():filename(NULL),name(NULL),value(NULL),seperator("="),annotation("#") {}
    FileDeal(string fn, string sep="=", string anno="#"):filename(fn), seperator(sep), annotation(anno) {}

public:
    string getvalue(string  key);

    void setseperator(string sep)
    {
        seperator = sep;
    }

    void setannotation(string anno)
    {
        annotation = anno;
    }
    /**
    �����ļ��õ�һ�������ֶκ�ֵ��ӳ���

    */
    void parseFileToMap();



public:
    string filename;//�ļ���
private:
    string name;//Ҫ��ȡ������
    string value;//Ҫ��ȡ��ֵ
    string seperator; //Ĭ��Ϊ=
    string annotation;//ע�ͷ���Ĭ��Ϊ#
    map<string, string> maplist;

};
#endif // FILEDEAL


