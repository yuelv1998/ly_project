#include "filedeal.h"



using namespace std;
/*
�����ֶζ�Ӧ��ֵ
*/

string FileDeal::getvalue(string key)
{
    /*
    return maplist[key];
    */



    string linestr("   name=lvyue    ");
    string tmpkey;
    string tmpvalue;

    //���ַ�����ȥǰ��Ŀո�
    //��ȡ�Ⱥ�ǰ����ַ�����keyΪ�Ⱥ�
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
            //tstr[] = '\0';//��\n�滻��\0
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
    while(��ȡһ��)
    {
        1.�ų����У�ע����
        2.ɾ��һ�е�ǰ��ո�
        3.��ȡһ�����ֶκ��ֶ�ֵ
        4.��ӵ�map��ȥ
    }
    */

}

