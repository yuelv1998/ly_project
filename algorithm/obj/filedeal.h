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
查找配置文件找到需要的信息
flag = 0 去前面的空格
1 去后面的空格
2 去前后的空格

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
    解析文件得到一个关于字段和值的映射表

    */
    void parseFileToMap();



public:
    string filename;//文件名
private:
    string name;//要截取的名称
    string value;//要截取的值
    string seperator; //默认为=
    string annotation;//注释符号默认为#
    map<string, string> maplist;

};
#endif // FILEDEAL


