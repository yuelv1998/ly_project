#include "filedeal.h"



using namespace std;
/*
查找字段对应的值
*/

string FileDeal::getvalue(string key)
{
    /*
    return maplist[key];
    */



    string linestr("   name=lvyue    ");
    string tmpkey;
    string tmpvalue;

    //将字符串除去前后的空格
    //截取等号前后的字符串，key为等号
    string::size_type idx = linestr.find(seperator);
    if(idx == string::npos)
    {
        cout << "no find the key name!" <<endl;
        return NULL;
    }
    else
    {
         tmpkey = linestr.substr(0, idx);
         tmpvalue= linestr.substr(idx+1);
    }

    value = tmpvalue;
    return value;
};

void FileDeal::parseFileToMap()
{
    FILE *  fp = fopen(filename.c_str(), "r");
    if( fp != NULL)
    {
        char tstr[max_len];
        string newstr;
        string tmpkey;
        string tmpvalue;
        while( fgets(tstr, max_len, fp) != NULL )
        {
            //tstr[] = '\0';//将\n替换成\0
            //tstr[(int)strlen(tstr)-1] = '\0';
            n  = strlen(tstr)-1;
            tstr[n] = '\0';
            newstr = noSpace(string(tstr),2);
            tmpkey = newstr.substr(0,newstr.find(seperator));
            //maplist[]
        }



    }
    else
    {
        cout <<"open failed"<<endl;
    }

    /*
    while(读取一行)
    {
        1.排除空行，注释行
        2.删除一行的前后空格
        3.提取一样的字段和字段值
        4.添加到map中去
    }
    */

}

