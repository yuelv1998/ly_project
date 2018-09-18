/*
 * main.cpp
 *
 *  Created on: 2018年3月18日
 *      Author: lvyue
 */
#include <iostream>
#include <iterator>
#include <memory>
#include <vector>
#include <algorithm>
#include<list>
#include "test2.h"
#include "tengxu.h"
using namespace std;

/*
 * 归并排序
 * */

/*
static int aux[7];
static void merge(int *a, int lo, int mid, int hi)
{
     int i = lo;
     int j = mid+1;
     //int aux[hi-lo+1]={0};
     for(int k = lo; k <=hi; k++)
     {
    	 aux[k] = a[k];
     }

     for (int k=lo; k<=hi; k++)
     {
    	 //这个思想，用i超过界限 标识右边还有剩余，我们习惯的思维是
    	 if (i > mid)
    	 {
    		 a[k] = aux[j++];
    	 }
    	 else if(j > hi)
    	 {
    		 a[k] = aux[i++];
    	 }
    	 else if (aux[j] < aux[i])
    	 {
    		 a[k] = aux[j++];
    	 }
    	 else
    	 {
    		 a[k] = aux[i++];
    	 }

     }
}

void sort_gui(int *a , int lo, int hi)
{
    if(hi  <= lo)
    {
    	return ;
    }
    int mid = lo + (hi-lo)/2;
    sort_gui(a, lo, mid);
    sort_gui(a, mid+1, hi);
    merge(a,lo, mid , hi);
}
*/

/*
void sort_gui(int* arr, int begin, int end,int length)
{
    int mid = begin + (end -begin)/2;

    sort_gui(arr, begin, mid, mid -begin+1);//begin ----mid
    sort_gui(arr, mid+1, end, end-mid+1);//mid+1----end
    int arr_bk[length];

    for(int i  = 0; i < length; i++)
    {
    	arr_bk[i] = arr[i];
    }

    int i = begin;
    int j = mid +1;
    int k = begin;
    while(i < mid+1 && j < end )
    {
    	if(arr[i] < arr[j])
    	{
    		arr[k++] = arr_bk[i++];
    	}
    	else
    	{
    		arr[k++] = arr_bk[j++];
    	}
    }
    while( i < mid+1)
    {
    	arr[k++] = arr_bk[i++];
    }
    while(j < end)
    {
    	arr[k++] = arr_bk[j++];
    }



}
*/

/*

template<class T>
ostream& operator<<(ostream& otrm , const auto_ptr<T>& p)
{
	if( p.get() == NULL )
	{
		otrm << "null";
	}
	else
	{
		otrm << *p;
	}

	return otrm;
}
*/
int main()
{
	vector<int> vec;
	for(int i = 0; i < 9; i++)
	{
		vec.push_back(i);
	}
    vec.push_back(3);

	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		{

			cout <<  *iter << " " ;
		}
cout << endl;
	//copy( vec.begin(), vec.end() , ostream_iterator<int>(cout, " "));
	vector<int>::iterator iter1 = remove(vec.begin(), vec.end(), 3);
	//cout << vec.end()-iter1<<endl;
    //vec.erase(remove(vec.begin(), vec.end(), 3), vec.end());

	//for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	//{

		//cout <<  *iter << " " ;
	//
	//}
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout , " "));


	//remove(vec.begin(), vec.end(),7);
	//for()

   // remove( vec.begin());

    /*

    for( vector<int>::iterator iter = vec.begin(); iter ！= vec.end(); iter++)
    {
    	cout << *iter;
    }
    */

/*
	const auto_ptr<int> p( new int(42));
	const auto_ptr<int> q(new int(0));
	const auto_ptr<int> r;
	cout << "after initial" <<endl;

	cout << p << endl;
	cout << q <<endl;
	cout << r <<endl;

	*q = *p;
	*p = -77;
	cout << "after change"<<endl;
	cout << p <<endl;
	cout << q<< endl;
	cout << r<<endl;
	int a1 = 9 ,  b1 = 7;

	const int *a = &a1;
	const int *b = &b1;
	*a = *b;
	cout << *a <<endl;
	cout << *b <<endl;
*/
	/*
 cout << " hello" <<endl;
 int arr[7] = {0,3,8,7,9,6,10};
 sort_gui(arr, 0, 6);

 for(int i = 0; i < 7; i++)
 {
	 cout << arr[i] <<" , " <<endl;
 }
*/
  return 0;
}



