#include <iostream>
#include <numeric>
#include<iterator>
#include<limits>
#include <String>
#include <string.h>
#include<stdio.h>
using namespace std;
string noSpace(string str, int flag=2)
{
    string tmp;
    string spacestr(" ");
    if(str.find_first_not_of(spacestr) == string::npos || str.empty())
    {//����
        return "";

    if(flag == 0)
    {
        string::size_type beg = str.find_first_not_of(spacestr);
        tmp = str.substr(beg);
        return tmp;

    }
    else if(flag == 1 )
    {

        int maxc;
        for( int i = 0; i  < str.length(); i++ )
        {

            if(spacestr.find( str.at(i) ) == string::npos)
            {
                maxc = i;
            }

        }
        string::size_type end1 = static_cast<string::size_type>(maxc+1);
        return str.substr(0, end1);
    }
    //flag=2
    string::size_type beg = str.find_first_not_of(spacestr);
    tmp = str.substr(beg);
    int maxc;
    for( int i = 0; i  != tmp.length(); i++ )
    {

        if(spacestr.find( tmp.at(i) ) == string::npos)
        {
            maxc = i;
        }

    }
    string::size_type end2 = static_cast<string::size_type>(maxc+1);
    return tmp.substr(0, end2);


}
}

/**
1.ŷ������㷨

*/
/*
int gcd(int p, int q)
{
    if (q== 0)
    {
       return p;
    }
    int r = p%q;
    return gcd(q,r);

}

*/
/**
2.���ֲ����㷨��ǰ���������Ѿ��������

*/

/*
int rank(int key , int* array,int length)
{
    int lo = 0; //λ��
    int hi = length -1;//λ��
    while (lo <= hi)
    {
        int mid= lo + (hi-lo)/2;//λ��
        if(key < array[mid] )
        {
            hi = mid-1;
        }
        else if (key > array[mid])
        {
            lo = mid +1;
        }
        else
        {
             return mid;
        }

    }
    return -1;
}
*/
/**
basesort class
*/


class BaseSort
{
 public:
    //virtual  void sort(int *a) = 0;
    static void swap(int *arr, int a ,int b)
    {
        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }
    static bool less(int *arr,int a, int b)
    {
        return arr[a] < arr[b];
    }

    static bool issorted(int *arr,int length)
    {
        for(int i = 1; i< length; i++)
        {
            if(arr[i] < arr[i-1])
            {
                return false;
            }
        }
        return true;
    }
    static void show(int *arr, int length)
    {
        for(int i = 0; i < length; i++)
        {
            cout << arr[i] <<",";
        }
        cout <<endl;
    }

};

///////////////////////////////
/**
ѡ������ʵ��
*/

/*
void chose_sort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        //�����ǲ��Ǳ�����,�ǵģ����min��ʼ��Ϊi+1����ѭ���о�������һ��λ��
         //֮������ô��ʼ��������Ϊ�����Ǹ����µ��£��ܲ������Ͳ�����
        int min = i;

        for(int j = i+1; j < length; j++)
        {
             if( BaseSort::less(arr, j, min) )
             {
                 min = j;
             }
        }

        BaseSort::swap(arr, i, min);
    }
}
*/

/**
4.���������㷨,i�����������õģ��ұ��ǻ��ҵģ���i������ߵ�����Ƚϣ�ֱ�����뵽һ������С�ĵĺ���
i��1��ʼ����ֱ�� n-1 ��i��ʶ��Ҫ���򻯵���
j�Ǳ�ʶi������ߵıȽϺͽ���

*/
/*
void insert_sort(int *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        //����Խ�磬���ұ���ߵ�С��ѭ��������
        for (int j = i; j > 0 && BaseSort::less(arr,j,j-1) ; j--)
        {
            //����������������ʵ�� �����ƶ��Ĳ���
            BaseSort::swap(arr,j-1,j);
        }
    }
}
*/
/**
4.1һ�ָĽ���ʩ������ѭ���н��ϴ��Ԫ�ض������ƶ���������������Ԫ��
*/

void insert_sort1(int *arr, int length)
{

    for( int i = 1; i < length; i++ )//��i��ʼ
    {
        int myplace = i;
        int me = arr[i];
        //�ҵ������λ��
        for(int j = i-1; -1 < j ; j--)
        {
            if ( BaseSort::less(arr, j, i))//j ��iС
            {
                myplace = j+1;
                break;
            }
        }
        //��myplacce �� i ֮ǰ�����������ƶ�һλ
        for(int k = i-1; myplace -1 < k; k--)
        {
            arr[k+1] = arr[k];
        }
        arr[myplace] = me;

    }
}


/**
һ�������ļ��ĺ���
*/

int main(int argc , char* argv[])
{
    cout << "Hello world!" << endl;
    /*

    //1.����ŷ������㷨

    int r = gcd(35,70);
    cout <<r <<endl;
    ////////////////////////////////

    //2.���Զ��ֲ����㷨

    int array[]={0,1,3,5,7,8};
    int length=sizeof(array)/sizeof(int);
    int index = rank(3,array, length);
    cout << index << endl;
    ///////////////////////////////

    //3����ѡ������

    int arr3[] = {0,8,2,5,4,7,6,23};
    int length3 = sizeof(arr3)/sizeof(int);
    chose_sort(arr3, length3);
    BaseSort::show(arr3,length3);
    //////////////////////////////

    //4.���Բ�������

    int arr4[] = {0,8,2,5,4,7,6,23};
    int length4 = sizeof(arr4)/sizeof(int);
    insert_sort1(arr4, length4);
    BaseSort::show(arr4,length4);
    */
    ///////////////////////////////
    //cout << *str<<endl;

    /*

    string filename = "d:\lvyue.txt";
    FileDeal test(filename);
    test.parseFileToMap();
    char he[] = {"hello"};
    char * hp = "lvyue";
    */


    //4.1�����Ż��Ĳ�������
     int arr4[] = {0,8,2,5,4,7,6,23};
     int length4 = sizeof(arr4)/sizeof(int);
     insert_sort1(arr4, length4);
     BaseSort::show(arr4,length4);
    // string a(numeric_limits<int>::min());
    int a = numeric_limits<int>::min();
     cout << a <<endl;

    return 0;
}
