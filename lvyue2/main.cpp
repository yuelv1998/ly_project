
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;

/**
赋值的等号左右不能有空格
*/
/*
void getkeyandvalue(string line,string &key, string &value)
{
    if(line.empty())
    {
        cout << "is a empty line"<<endl;
        key ="";
        value="";
    }
    if (line.find("=") != string::npos)
    {
        key= line.substr(0, line.find("="));
        int valuelength= line.find("#") - (line.find("=") + 1);
        value = line.substr(line.find("=")+1, valuelength);
        value = value.substr(0, value.find_first_of(" "));
    }
}
*/

/*
class Base
{
public:
    Base():foo_bar(1){}
    virtual void xu() { cout << "Base"<<endl;};
    int to;
protected:
    int foo_bar;

};

class derived:public Base
{
public:
    void xu( )  { cout <<"derived" << endl;};
    derived(){ me= 1; }

   bool bar (derived * db);
private:
    int me;
};
*/

/*
bool derived::bar( derived *pb)
{
    return foo_bar = pb->foo_bar;
}
*/

/**
在一个字符串中查找子字符串的算法
在父中查找第一个子，如果对，就看父的其余的时候是子的
否则在父中查找第一个子
直到 strlen(str1) - strlen(str2)位置
*/
/*
template <typename parm>
void print(const parm& c)
{
    typename parm::size_type index = 0;
    while(index != c.size())
    {
        cout << c[index] << ' ' ;
        ++index;
    }
}
*/
/*
template<typename T, std::size_t N>
std::size_t size(T (&arr)[N])
{
    return N;
}
*/
/*

template<class A, int num>
void fun()
{

}
*/
/*
template<class type>
class A
{
public:
    A(){}
    type fun(type pa){};

private:
    type num1;
};
template<>
*/
/*
int A::fun(int)
{

}
*/
/*
template<class t1, class t2> void fun(t1 a ,t2 b)
{
 cout << "template"<<endl;
}

void fun(int a , float b)
{
cout << "special "<<endl;
}
*/
/*
enum matherr
{
    overflow,
    underflow
};
*/

/**
探讨私有继承下的多态的局限性
*/

/*
class A
{
public:
    virtual fun(){cout << "A"<<endl;};
    void fun1() {cout << "a1"<<endl;}
protected:
    int a;
};

class B: public A
{
public:
    fun(){cout << "B"<<endl;}
    void fun1(){cout << "c"<<endl; a = 5;}

};
*/

/*
  class Base
{
public:
    Base():foo_bar(1){}
    int to;
protected:
    int foo_bar;
private:
    int foo;
};

class derived:public Base
{
public:
    derived(){ me= 1; }
    void set_foo(int bar, Base *ba)
    {
        foo_bar = bar;
        //foo = bar;//err  should  Base::foo or ba.foo_bar
        to = bar;//yes
    }
   bool bar (derived * db);
private:
    int me;
};

*/

/**
测试虚继承的使用

*/

/*
class A
{
public:
    A()
    {
        a = 1;
    }
    A(int c)
    {
        a =c;
    }
public:

    int a;
};

class B: virtual public A
{
public:
    B():A(){ b=2;}
    bsetA(){ a = 201;}

private:
    int b;
};

class C:virtual public A
{
public:
    C():A(2){c=3;}
    csetA(){a = 301;}
private:
    int c;
};
class D:public B, C
{

};
*/

/*
class A
{
public:
     virtual void fun(){cout << "A"<<endl;}
     void fun1(){cout << "A1"<<endl;}
};
class B:public A
{
public:
    void fun(){cout << "B"<<endl;}
    void fun1(){cout << "B1" <<endl;}
};
*/
/*
#include <iostream>
#include <utility>
#include <string>
#include <vector>
typedef pair<string, int> ptype;
*/


#include <iostream>
#include <map>
#include <utility>
#include <string>
using namespace std;



int main()
{
   typedef  pair<pair<string, int>, string> triple;


    /*
    multimap<string, string> authors;
    typedef multimap<string, string>::iterator itype;
    authors.insert(make_pair("pengfeng","数据库"));
    authors.insert(make_pair("lvyue", "西游记"));
    authors.insert(make_pair("liufeng","东游记"));
    authors.insert(make_pair("lvyue","南游记"));
    authors.insert(make_pair("yongtao", "三国演义"));
    authors.insert(make_pair("lvyue","水浒传"));
    authors.insert(make_pair("mengpeng","小说"));

    string name = "lvyue";
    pair<itype, itype> iter = authors.equal_range(name);
    if (iter.first != iter.second)
    {
        cout << iter.first->first<< "," <<iter.first->second <<endl;
        cout << iter.second->first << "," << iter.second->second << endl;
    }
    */

    /*
     map<string, int> wordcount;
     string word;
     while( cin >> word )
     {
          pair< map<string,int>::iterator, bool> ret = wordcount.insert( make_pair(word, 1) );
          if ( !ret.second )
          {
              ++ret.first->second;//将该单词出现的次数加1
          }
     }
     //输出map中的单词，单词出现的次数
     for (map<string, int>::iterator iter  = wordcount.begin(); iter != wordcount.end();  ++iter)
     {
         cout << (*iter).first << (*iter).second <<endl;
     }
*/


/*
   ptype pair1;
   string str;
   int   ival;
   vector< ptype > pvec;
   while(cin>> str>>ival)
   {
       //pair1 = make_pair(str, ival);

       //pair1.first = str;
       //pair1.second = ival;


       pvec.push_back(pair1);
   }
   */
/*
  //B b;
  A *pa1 = new B();
  pa1->fun1();// a1
  B *pa = dynamic_cast<B*>(pa1);//if A not a virtual fun ,then err happen
  pa->fun1();//b1
*/

/*
    D c;
    cout << c.a <<endl;
    */
    //A *a = new A;

    //B *b = new A();
   // A a1;
    //A * a2 = new B();
    //cout << a2 << endl;
    //a2->fun();
    //a2->fun1();
   // B *b = new B;

    //b.a = 5;


    /*
    char c = '\t';
    cout << "||"<<c<<"&"<<endl;
    */
     //matherr a = overflow;
    /*
    int a = 10;
    double b = 2.15;
    float c = 2.3;
    fun(a,b);
    fun(a,c);
    */
    /*
    int a  = 6;
    fun<int, a>();*/
/*
  int str[13] = {1,2,3,5,8,9,10};
  cout << size(str) <<endl;
  */
    /*
     string str1("hellolvyue");
     string str2("lvyue");
     int a = static_cast<int> (str1.find(str2));
     cout <<a <<endl;
*/
     //cout << static_cast(intstr1.find(str2)<<endl;


    //Base bp;
    //derived * dp = new derived();
    //dp.foo_bar = 2;
    //bp->foo_bar = 1;

    /*
     Base *b = new Base();
     //derived *d  = new derived();
     Base *b1 = new derived();
    //d->xu();
    b1->xu();

*/
    /*
    ifstream infile("D:\\client.txt", ios::in);
    if( !infile)
    {
        cout << "can open for read" <<endl;
    }
    char  linestr[23]={0};
    int re;
    while(1)
    {

        if ((re = infile.get(linestr, 23).get()) == '\n')
        {
            //处理一行
            cout << string(linestr)<<endl;
        }
        else if (re == EOF)
        {
            cout << "end the file"<<endl;
            break;
        }
        else
        {
            cout << "the line too long ,not read enough!"<<endl;
            break;
        }


    }
    */
    /*
    string test="name=lvyue    ";
    string key, value;
    getkeyandvalue(test, key,value);
    cout << key <<"|"<<value << "|"<<endl;
    */

    return 0;

}
