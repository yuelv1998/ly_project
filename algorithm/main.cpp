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
    {//空行
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
1.欧几里得算法

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
2.二分查找算法，前提是数据已经是有序的

*/

/*
int rank(int key , int* array,int length)
{
    int lo = 0; //位置
    int hi = length -1;//位置
    while (lo <= hi)
    {
        int mid= lo + (hi-lo)/2;//位置
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
选择排序实现
*/

/*
void chose_sort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        //这里是不是必须呢,是的，如果min初始化为i+1。内循环中就跳过了一个位置
         //之所以这么初始化，是因为交换是个费事的事，能不交换就不交换
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
4.插入排序算法,i的左边是排序好的，右边是混乱的，将i和它左边的有序比较，直到插入到一个比它小的的后面
i从1开始递增直到 n-1 ；i标识需要秩序化的数
j是标识i和它左边的比较和交换

*/
/*
void insert_sort(int *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        //不能越界，并且比左边的小是循环的条件
        for (int j = i; j > 0 && BaseSort::less(arr,j,j-1) ; j--)
        {
            //和它大的数逐个交换实现 向右移动的操作
            BaseSort::swap(arr,j-1,j);
        }
    }
}
*/
/**
4.1一种改进措施，在内循环中将较大的元素都向右移动，而不交换两个元素
*/

void insert_sort1(int *arr, int length)
{

    for( int i = 1; i < length; i++ )//从i开始
    {
        int myplace = i;
        int me = arr[i];
        //找到插入的位置
        for(int j = i-1; -1 < j ; j--)
        {
            if ( BaseSort::less(arr, j, i))//j 比i小
            {
                myplace = j+1;
                break;
            }
        }
        //将myplacce 到 i 之前的数字往后移动一位
        for(int k = i-1; myplace -1 < k; k--)
        {
            arr[k+1] = arr[k];
        }
        arr[myplace] = me;

    }
}


/**
一个处理文件的函数
*/

int main(int argc , char* argv[])
{
    cout << "Hello world!" << endl;
    /*

    //1.测试欧几里得算法

    int r = gcd(35,70);
    cout <<r <<endl;
    ////////////////////////////////

    //2.测试二分查找算法

    int array[]={0,1,3,5,7,8};
    int length=sizeof(array)/sizeof(int);
    int index = rank(3,array, length);
    cout << index << endl;
    ///////////////////////////////

    //3测试选择排序

    int arr3[] = {0,8,2,5,4,7,6,23};
    int length3 = sizeof(arr3)/sizeof(int);
    chose_sort(arr3, length3);
    BaseSort::show(arr3,length3);
    //////////////////////////////

    //4.测试插入排序

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


    //4.1测试优化的插入排序
     int arr4[] = {0,8,2,5,4,7,6,23};
     int length4 = sizeof(arr4)/sizeof(int);
     insert_sort1(arr4, length4);
     BaseSort::show(arr4,length4);
    // string a(numeric_limits<int>::min());
    int a = numeric_limits<int>::min();
     cout << a <<endl;

    return 0;
}
