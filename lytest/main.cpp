#include <iostream>
#include <string.h>

using namespace std;

/*
class A
{
public:

    A(string name)
    {
        this->name = name;
        cout << "A " << endl;
    }


    A& operator =(A& a)
    {
        name = a.name;
        return *this;
    }

    string name;
};


class B
{
public:

    B(A &a1)
    {
        a = a1;
        cout << "B" <<endl;

    }

    B(B & b)
    {
        a= b.a;
    }


    A a;
};
*/

/*

class C
{
public:
    C(B &b)
    {
        this->b  = b;
        cout << "C" << endl;
    }

    B b;
};

*/


/*
class A
{
public:
    int age;
    string name;
    int high;
};
*/
//������Ԫ���ʹ��
//class B;


/*
class A
{

public:
    A(){}
    A(int a, string b){ age = a, name = b;}
private:
    int age;
    string name;
    friend class B;

};

class B
{
public:
    B(A&);
public:
    string disc;
    A a;

};

B::B(A & a)
{
    disc = a.name;
}

*/

//�����ľ�̬�������ݳ�Ա�Ƿ���������ڶ���//����


/*
class A
{
public:
    friend void fun(A &a );
    //A(){ cout << "i moren" <<endl;}
    A(int a){age = a;}

private:
    int age;

};

void fun(A &a)
{
    cout << a.age <<endl;

}
*/

/*

class pointer
{
public:
    pointer(){ cout << "m"<<endl;}
    pointer(int a ){age = a;}
    pointer(const pointer& po)
    {
        age = po.age;
        cout << "f" << endl;
    }

private:
    int age;
};

pointer global;
pointer foo_bar(pointer arg)
{
    pointer local = arg;
    cout <<"---" <<endl;
    pointer *heap = new pointer(global);
    cout << "----" <<endl;
    *heap = local;
    pointer pa[4]  = {local, *heap};
    return *heap;
}

*/



class U_Ptr
{
    /*
    ��װ�˼��������������ص�
    1.��Ԫ������ָ����
    2.���ݳ�Ա��˽�е�
    3.���캯��Ҳ��˽�еģ�Ҳ����ֻ����Ԫ������ָ�����ܴ�������ʵ��
    4.��Ĭ�Ϲ��캯����use��ʼΪ1

    */
    friend class HasPtr;
    int *ip;
    int use;
    U_Ptr(int *p):ip(p), use(1){}

};

class HasPtr
{
public:
    /*
     ֻ�б�֤�˺���ֻ����һ�Σ�����ʵ������ָ���Ԥ��
    */
    HasPtr(int *p, int i):ptr(new U_Ptr(p)), val(i){}
    //���ƹ��캯������ʹ�ø��ƹ��캯����ʼ���Ķ���ӵ�еĶ���ͬһ��U_ptr
    //��ͬ�����޸��˼���
    HasPtr(const HasPtr & orig):ptr(orig.ptr) ,val(orig.val)
    {
        ++ptr->use;
    }

    HasPtr& operator=(const HasPtr & rhs)
    {
        ++rhs.ptr->use;
        if ( --ptr->use == 0 )
        {
            delete ptr;
        }
        ptr = rhs.ptr;
        val = rhs.val;
        return *this;
    }

    ~HasPtr()
    {
        if(--ptr->use == 0)
        {
            delete ptr;
        }
    }
    //��ȡ���ݳ�Ա
    int * get_ptr()const
    {
        return ptr->ip;
    }
    int get_int() const
    {
        return val;
    }
    //�޸����ݳ�Ա
    void set_ptr(int *p)
    {
        ptr->ip = p;
    }
    void set_int(int i)
    {
        val = i;
    }

    //���ػ��޸Ļ���int����
    int get_ptr_val()const
    {
        return *ptr->ip;
    }
    void set_ptr_val(int i)
    {
        *ptr->ip  = i;
    }
private:
    U_Ptr  *ptr;
    int    val;
};

/*
class Sale_item
{

     friend std::istream& operator>>(std::istream& , Sale_item&);
     friend std::ostream& operator<<(std::ostream&, Sale_item&);
 public:
    Sale_item& operator+=(const Sale_item&)
    {

    }
    Sale_item Sale_item::operator+(const Sale_item& rhs)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }
    /*
    Sale_item& operator+(const Sale_item&)
    {

    }
    */
//};

/*
//����ָ��
class CheckedPtr
{
public:
    CheckedPtr(Screen *b, Screen *e):beg(b),end(e),curr(b){}

    Screen& operator*()
    {
       if(curr == end)
       {
           throw out_of_range();
       }
       return *curr;
    }

    const Screen& operator*()const
    {
        if (curr == end )
        {
            throw  out_of_range();

        }
        return *curr
    }
    //ǰ׺
    CheckedPtr& operator++()
    {
        if (curr == end)
        {
            throw out_of_range();
        }
        ++curr;
        return *this;
    }

    //��׺

    //��ͷ����
    Screen* operator->()
    {
        return curr;
    }

    //







private:
    Screen  *beg;//ָ����������ָ��
    Screen  * end;//�����β����һ��λ��
    Screen  * curr//�����еĵ�ǰλ��
};
Sale_item operator+(const Sale_item& a, const Sale_item& b);
{
    Sale_item p = Sale_item();
    p.item1 = a.item1 + b.item1;
    return p;
}
*/



/*
class arrayptr
{

int  operator[](int index)
{
    return *((int*)p + index);
}

int operator*()
{
    return (*p);
}

private:
    int *arrptr;
};


*/
int main()
{


/*
  cout << "begin"<<endl;
  pointer a = foo_bar(global);
*/

/*
    A a(5);
    fun(a);
*/
    /*
    A a(1,"lvyue");
    B b(a);
    cout << b.disc << endl;
    */
    const char* hp = "lvyue";
    cout << strlen(hp) <<endl;
    return 0;
}

