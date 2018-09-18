#!/usr/bin/env python3
import  io
import os
import re
import json
import functools
from enum import  Enum,unique
from io import StringIO, BytesIO
import time
#import Image
#from sys import argv,path
#from sys import *
from  collections  import Iterable
'''
上面的写法为佳
'''

'''
#coding=utf-8 //等号两边不能有空格
python3 默认编码方式是 utf-8
设置编码格式的方式:
file->setting->coding
'''

print("hello 吕岳")
#单行注释，可以用\连接多行内容
total = "hello" + \
        "lvyue" + \
        "chenggong"
print(total)
'''
数字，字符串略
'''

#列表:各种数据的有序集合
list = ["lvyue",2, 2.345, "wanmei"]
for i in list:
    print(i, end=" ?") #不换行输出
print( list )

#1.练习
L = [
    ['apple','google','micosoft'],
    ['java','python','ruby','php'],
    ['adm','bart','lisa']]
#打印apple
print(L[0][0])

'''
[]and ()their are all inordered, bu the list could be change, the tuple could't changed
'''



'''
数字运算
加法：+
减法：-
乘法：*
得到浮点数的除法：/
得到整数的除法://
取余：%
乘方：**
'''

'''
1.字符串不能改变
2. +表示拼接变量，*表示重复变量
'''

#字符串操作,截取
str ="woshizhongguoren"
print( str[2:5])

#原始字符串
print(r"nishi \n yitiaogous")

#元组，有序号的各种数据的集合，数据不可变
tuple = (1,"tuple",2.34)
print(tuple)
del tuple

#空元组
tuple_empty = ()

#一个元素的元组,需要加逗号
tuple_one = (1,)

#集合:集合是没有重复数据的集合，没有顺序
set_parm = {1,2,3,"parm", 2.45}
print(set_parm)


#字典:有序的靠键提取数据的数据的集合
dict = {'name':"lvyue","code":"123456","rcl":"http://hello.com"}
print( dict )
for x,y in dict.items():
    print(x,y)

#定义函数
def test_fun():
     return 0

'''
type()
isinstance()
'''

#条件控制
a =3.45
if a==3:
    print(1)
elif a==4:
    print(2)
else:
    print(3)

#循环
a=2





'''
生成器：生成迭代器
yield:让一个函数成为生成器，遇到yield的时候停止,遇到next()开始从上次yield的地方执行
yield的使用是为了在迭代中节省内存空间
yield是和next联合使用才能有用
'''


#函数
'''
def 函数名(参数列表)
    函数体
'''

high = 1.75
height = 80.5

bmi = high/height

if bmi < 18.5:
    print('过轻')
elif bmi < 25:
    print('正常')
elif bmi < 28:
    print('过重')
elif bmi < 32:
    print('肥胖')
else:
    print('严重肥胖')

list = ['lvyue','yinyin','shafei','libing']
for i in list:
    print("欢迎：%s"    %i)

'''
集合和字典的唯一不同是 集合只存储键不存储值，作为键 不可以存储 可变的键
'''

#abs()
print(abs(-100))

#hex()
a=23
#print(str(hex(2223)))
b = hex(23)
#c = str(b)
print(b)

#ypeError错误


#如何判断是否是可迭代对象
'''
from collections import Iterable
isinstance('abc',Iterable)
'''

#列表生成式
'''
[x * x for x in range(0,15) if x % 2 == 0]
[m + n for m in 'abc' for n in 'xyz']
'''

#a litter test

L = ['hello', 'world',18, 'apple', None]
LL = [strc for strc in L if isinstance(strc, int)]
#为什么不能是 isinstance(strc, str)但是 isinstance(strc , int)可以啊

'''
print(' ddd')
x = 'adc'
y = 123
b = isinstance(x, str)
#c = str(b)
print(b)
'''

#杨辉三角
'''
def triangle():
    up_line = tmp_line = [1]
    while True:
         yield tmp_line
         up_line  =  tmp_line
         tmp_line.clear()
         tmp_line.append(1)
         #index = 2
         for index in up_line:
         tmp_line.append(1)
 '''

'''
def f(x):
    return x*x
r = map(f, [1,2,3])
for i in r:
    print(i)
'''

'''
a = '123456'
aa = char2num(a)
print(aa)
def char2num(s):
  return {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}[s]
'''
#返回函数
'''
def lazy_sum(*args):
    def sum():
        ax = 0
        for n in args:
            ax = ax + n
        return ax
    return sum
'''


def count():
    def f(j):
        def g():
            return j*j
        return g
    fs = []
    for i in range(1,4):
        fs.append(f(i))
    return fs
f1,f2,f3 = count()
print(f1(),f2(),f3())

#匿名函数
'''
匿名函数有个限制，就是只能有一个表达式，不用写return，返回值就是该表达式的结果。
lambda x: x * x
关键字lambda表示匿名函数，冒号前面的x表示函数参数
'''

#函数对象和装饰器
'''
函数也是个对象，可以赋值给别人
函数对象都有个__name__属性
当我们不想改变函数定义，同时希望增强函数的功能时候，可以使用装饰器
它的本质就是一个返回函数的高阶函数
对于没有参数的装饰器
1.将函数作为装饰器的参数
2.编写内裹函数，内裹函数添加额外的内容，调用被装饰函数
3.装饰器返回 内裹函数

对于有自己参数的装饰器
0.引入functools包
1.定义内部的decorator函数
2.decorator第一句是调用@functools.wrap(func)
自己领悟把
'''

'''
decorator 就是函数参数返回裹函数的一个 函数

'''
def log(fun):
    @functools.wraps(fun)
    def wraper(*argc , **kw):
        print("before fun()")
        return fun(*argc, **kw)
    return wraper

@log
def fun(a):
    print('in the fun() %i' %a )

fun(5)

def log1(text):
    def decorator(fun1):
        @functools.wraps(fun1)
        def wraper(*args,**kwargs):
                print("before fun1")
                return fun1(*args, **kwargs)
        return wraper
    print("after fun1")
    return decorator


@log1('i was the log1')
def fun1():
    print("in the fun1")

fun1()


'''
所以，简单总结functools.partial的作用就是，把一个函数的某些参数给固定住（也就是设置默认值），返回一个新的函数，调用这个新函数会更简单。

'''

'''
python中的包就是一个目录，其中放置了多个模块，每个包都有一个__init__.py的文件，它是 目录之所以成为包的必备文件
'''

'''
类
1.构造函数__init__(self,...),第一个参数必须是self，代表类的实例本生,类的所有方法的第一个参数必须是self
2.类的实例可以绑定任意的数据
3.以__开头但不以__结尾的变量是私有变量，外界不能访问，
4.以__开头且以__结尾的变量是特殊变量，外界可以访问
5.以_开头的变量是 虽然外界可以访问但是最好把我当私有变量看待
6.解释器一般会将私有变量翻译成 _类名__变量名 的方式。如果非要访问类的私有变量可以使用_类名__变量名 但各个接收器的翻译方式不同

'''

'''
python的多态 比静态语言强悍的地方在于它的鸭子类型，
它不要求严格的继承体系，一个对象只要“看起来像鸭子，走起路来像鸭子” 它就可以被看成是一个鸭子
例如一个函数的参数是类型A，在函数中调用A的方法a()，我们可以传入任何实现了a()方法的类型实例
'''




#测试try的finally语句
try:
    print("in try")
except ZeroDivisionError as e:
    print("have error")
finally:
    print("in finally")
print('end')
################################
#

env = os.environ
try:
    #dict = list(env)
    print(env)
except Exception   as e:
    print(e)
finally:
    print('hello')


###############################################################################
'''
生成器：generator
在python中的一种机制：一边循环一边计算的机制
'''
print('generator.....')
g = (x * x for x in range(10))
print(next(g))
for i in g:
    print(i, end=' ')

#############################################################################
print("begin the trim")
def  trim(str):
    a = ''
    for i in str:
        if i != ' ':
          a = a + i

    return a

b = trim('   hello    ')
print(b)

'''
如何判断一个对象是否是可迭代的，通过collections 的iterable的类型

'''
isinstance('abc',Iterable)

'''
内置的
enumerate 函数可以把一个list变成 索引，元素对，可以实现和java一样的索引方式
'''
for i, value in enumerate(['a','b',34]):
    print(i,value)


'''
none 是否可比较 答案是不可以
'''

def  findminandmax(L):
    min = max = L[0]
    if isinstance(L,Iterable):
      for value in L:
         if max < value:
                 max=value
         elif  value < min:
                 min = value
    return (min, max)

print('lllllll')
a = findminandmax([1,2,3,5,6])
print(a)

'''
哪些数据支持切片操作?
哪些数据支持迭代操作
'''

'''
列表生成式 是一种快速生成list的方式
'''
a = [x * x for x in range(1,11)] #[1,0)
print(a)

a = [x * x for x in range(1,33) if x % 2 ==0]
print(a)

a = [m + n for m in 'abc' for n in 'xyz']
print(a)

a = [d for  d in os.listdir('.')]
print(a)

a = {'x':'a', 'name':'lvyue', 'path':'/home/lvyue'}

for k, v in a.items():
    print(k, '=',v)

a1 = [k + '=' + v for k,v in a.items()]
print(a1)


'''
将列表中的字符小写
'''

a = ['hello', 13,'nihao', 'wanmei']

#a1 = [ L for L in a if isinstance(L, str)== True ]
#print(a1)

#可迭代对象和迭代器的区别
#凡是可以用在for中的都是可迭代对象,Iterable
#凡是可用next()函数的都是迭代器，Iterator. list ,dict ,str 都是Iterable, 但是不能使用next()函数
#将Iterable转换成Iterator的方法
#使用iter()函数


'''
关于生成器，generator，是保存算法的数据结构，生成器就是不仅可以使用在for中，还可以调用next(fib)
生成一个generator的方法
1.使用for 
a = (x for x in range(10))
2.在一个函数中使用了yield

可以被next函数调用的叫做迭代器，生成器都可以用next()调用，所以生成器都是迭代器
生成器都是迭代器，但是可迭代对象不一定都是迭代器
可迭代对象是Iterable的
'''

#1.for
a = (x for x in range(10))
for l in a:
    print(l)

print('nihaoaaaaaaaaaaa')
testq = (x for x in range(11))
while True:
    try:
        a1=next(testq)
        print('g:', a1)
    except StopIteration as e:
        #print('wo have error %s' %e.value)
        #print('error')
        break

'''
生成器学习
写生成器的一个秘诀就是先将yield换成 print
当将一个生成器放在for中的时候，相当于不断的next，当遇到yield的时候就中断知道下一个next的时候从上一次yield的地方开始执行
'''
#杨辉三角

def yanghui():
    yield [1,]
    yield[1,1]
    list =[1,1]
    while True:
        list_work = [1,1]
        index = 0
        while index < list.count()-1:#2
            list_work.insert(index, list[index] + list[index+1])
            index = index + 1
        yield list_work
        list = list_work






'''
生成器都是迭代器
能够作为for对象的都是Iterable对象
迭代器就是能够使用next()函数的序列对象，迭代器当然能够作为for对象，迭代器可以看作是一个流不能事先确定它的长度
将Iterable 变成 迭代器的 函数 iter()

'''
it = iter([1,2,3,4]) #这里it是一个迭代器但不是生成器，所以在for中会捕捉到StopIteration
while True:
    try:
        x = next(it)
    except StopIteration:
        print('in the except')
        break

'''
高阶函数学习..........................................................................
1.一个函数接受另一个函数作为参数，这种函数称为高阶函数
'''

'''
map()
接受两个参数，一个是函数，一个是可迭代对象Iterable， 返回一个迭代器Iterator
为什么会有此函数的出现，是因为在大数据处理时，抽象出了此函数的模型
'''
a = [x for x in range(10)]
def  doublex(x):
      return x+x
b = map(doublex, 'str')
for x in b:
    print(x, end='')


'''
reduce函数

'''

'''
def normalize(name):
    name_new=''
    if  'a' < name[0] and name[0] < 'z':
        name_new  = name_new + name[0] -'a' + 'A'
    for c in name[1:]:
        if  'A' <c and c <'Z':
            name_new = name_new + (c-'A' +'a')
        else:
            name_new = name_new + c
    return name_new

c = ['hello', 'AddDddd']
c1 = map(normalize, c)
for i in c1:
    print(i)
'''


'''
filter 函数，过滤序列的作用
'''



L = [('Bob',75),('Adam',92),('Bart',66),('Lisa',88)]
def byname(L):
    return L[0]

def bynum(L):
    return L[1]
L2 = sorted(L, key= byname)
print(L2)

L3 = sorted(L,key = bynum,reverse=True)
print(L3)
'''
返回函数.......................................
函数中再定义一个函数，然后返回此函数，此为闭包结构
返回的函数也叫闭包，闭包不要采用外围中可能发生变化的临时变量
当参数传入函数的形参的时候是立刻绑定的，当闭包引用外围函数的变量的时候，如果该变量会变化，情况很不好

'''

def count():
    fs=[]
    for i in range(1,4):
        def f(i):
            return i*i
        fs.append(f(i))
    return fs
f1,f2,f3 = count()
print(f1,f2,f3)


#print(f1())
#print(f2())
#print(f3())
#print(d1,d2,d3)



def createCount():
   # fs = []
    def count():
        return 1

    return count
for i in range(5):
    dd = 0
    dd = i + createCount()()
    print(dd)

'''
匿名函数：.............................
lambda x :x * x

'''
def odd(n):
    return n%2==1

for i in filter(lambda n:n%2==1,  range(1, 20) ):
    print(i)


'''
装饰器.............................................................
1.函数对象都有一个名字_name_
2.装饰器decorator的本质是 在内函数外包裹一层东西，在裹函数中返回 内函数，在 装饰器 中返回裹函数，让内函数名称指向裹函数
总结一下装饰器的结构
1.形参是内函数
2.返回包裹函数
3.包裹函数的参数是内函数的可接受的参数，做一些前置操作，返回内函数
？如果装饰器也需要传入参数怎么办，将装饰器作为一个闭包，让闭包调用外围函数的局部变量


'''
print('tttttttttttttttttttttttttttttttt')



def log(func):
    def wrapper(*args, **kw):
         print('call fund %s' %func.__name__)
         return func(*args, **kw)
    return wrapper


@log
def now():
    print('2017-12-07')



'''
以上定义了装饰器
定义了将装饰器作为一个闭包的情况
'''
#print('%s' %now_1.__name__)




'''
def log(*text):
    print('before the decorator')
    def decorator(func):
        #@text1 = text
        @functools.wraps(func)
        def wrapper(*args ,**kw):
           # @if( text1 != None ):
                  print('before the neihanshu ......%s' %text)
          #  else:
           #     print('before the neihanshu')
                  return func(*args , **kw)
        return wrapper
    return decorator

def log(*argsa, **kws):
    print('before the decorator')
    def decorator(func):
        # @text1 = text
        @functools.wraps(func)
        def wrapper(*args, **kw):
            # @if( text1 != None ):
            print('before the neihanshu ......%d' % kws )
            #  else:
            #     print('before the neihanshu')
            return func(*args, **kw)

        return wrapper

    return decorator
@log('helo')
def now_2():
    print('hello xiaohuozi')
now_2()


对于可变参数还不是很了解

'''


'''
偏函数
把一个函数的某些参数给固定住，返回一个新函数，
偏函数是为了简化有多个参数的函数调用

'''

'''
id函数用于判断是否是引用的同一个地址单元

'''
a = 12
b = 12
print(id(a), id(b))

'''
字符串学习

'''

str ='     hello       '
str_new = str.rstrip()
print('|' + str_new + '|')


'''
列表所用的一些函数
list(seq) :将元组转换成列表
有插入操作
有清空操作
有排序操作

增 ，删 ，改 ，查


'''
#初始化一个二维数组
a = [ [0 for i in range(5)] for i in range(5) ]
print(a)


'''
列表的复制的一个例子
'''
original = [i for i in range(5)]
o1 = original.copy()
o2 = o1
o3 = o1[:]
print(original)
print(id(original), id(o1), id(o2),id(o3))

'''
元组学习
len()
将列表转换成元组tuple()
当元组只有一个成员时，需要加上,
元组在定义的时候就确定了，本身不能被修改
max()
min()
'''

'''
字典学习
字典可以修改
后面相同的建可以覆盖前面的建
要求建是不可变的 类型
函数：
len()
str()
items()
for i_key in dict
dict.keys()
dict1.update(dict2)
dict.values()
dict.pop(key[,default] )
字典是可以无限嵌套的
'''

'''
print()
end 
seq

print(a,b,c, seq='@')
print(a,b ,c , end =',')

'''

'''
while   :



else：

for  dd in ...:


else:

range(1,10,2)

continue
break
pass
enumerate()

...

'''


'''
functools.partial(int ,base=2)

'''


'''
模块学习
1.模块的私有变量，_开头
2.模块的特殊变量,__dd__
3.__author__, __doc__,    
4.没有强制不能访问
5.所有的模块需要先安装才能导入使用
'''


'''
anaconda about...
PYTHONPATH：是模块加载的目录

'''


'''
类的实例可以自己自由的绑定属性
类的构造函数__init__(self, xxx,xxxxxx)
self指向 实例
'''


'''
在定义一个类的方法的时候，self必须带上不能省略
如何定义类的实例的打印方式


'''
class Student():
    def __init__(self,a,b):
        self.a=  a
        self.b = b

a = Student(123, 'hello')

#print(a)


'''
类的属性如果加上__就可以不被外界访问
对于__xxx__是特殊变量，外界可以访问
对于__xx不能访问但是可以通过__leiming__xx 访问
对于_xx可以访问，但是不应该访问
'''



'''
开始实现一个类有私有变量，有set，get方法

'''

class TestLvyue(object):
    def __init__(self,name,age):
        self.__name = name
        self.__age = age

    def get_name(self):
        return self.__name

    def set_name(self, name):
        self.__name = name

    def get_age(self):
        return self.__age

    def set_age(self,age):
        self.__age = age

    #def __str__(self):
       # print(self.__name + '%d' %self.__age)



a = TestLvyue('lvyue  ', 13)
print(a)
#print(a.__name)


'''
在定义一个新的类时候，在括号中标识 它继承的基类
python中的多态，当子类中有和父类相同的方法时候，会覆盖掉基类的，在使用基类作为参数的地方传入 派生类，会调用派生类的方法进行
注意的是，这里的鸭子模型，只要传入的类型有一个run方法就可以了太棒了
所以对与python来说，多态的实现不一定需要 继承 ，继承是为了方便继承父类的方法

type()函数：
返回类型的class类型
'''

a = dir(5)
print(a)

'''
dir()函数
列出一个对象所有的属性和方法

'''


'''
getattr(obj, '')
setattr(obj, '', )
hasattr(obj, '')
'''

'''
实例的属性会覆盖类的同名属性
'''

class Student(object):
    time = 0
    def __init__(self,name):
       self.__name = name
       Student.time = Student.time + 1

a = Student('lvyue')
print(a.time)

b = Student('chengfeng')
print(b.time)

'''
如何理解类的属性 和实例的属性
类的属性和实例的属性互不干扰
类的属性所有实例共有
实例的同名属性调用时会覆盖掉类的同名属性

'''

'''
__slots__ 方法是绑定属性，这里的属性包含方法名
__slots__ 不能继承

'''
class TestA(object):
    __slots__ = ('name', 'age','funa')

   #将一个get方法作为属性使用
    @property
    def score(self):
        return self.score

    @score.setter
    def score(self,value):
        if isinstance(value, int):
            return ValueError('not int')
        elif  0< value and value < 100:
            self.score = value
        else:
            print('out the range')



def funa():
    print('funcaaaa')

s = TestA()
s.name = 'lvyue'
s.age  = 12
s.funa = funa

s.funa()
type(s)
a = dir(s)
print(a)
b = dir(TestA)
print(b)

print(s.name ,s.age)

'''
property方法 和 @xxx.setter
简单的说就是将两个同名的方法作为一个属性使用，该属性具有set，get，像java的
注意的是这里的width 中要设置为_width，内部接受的那个属性
'''


print('aaaaaa')
class Screen(object):
    '''
    def __init__(self,Width):
        self.Width = Width
        '''
    @property
    def width(self):
        return self._width

    @width.setter
    def width(self,value):
        self._width = value

    @property
    def height(self):
        return self._height

    @height.setter
    def height(self,value):
        self._height  = value

    @property
    def resolution(self):
        return self._height * self._width

    def __str__(self):
        #return  print(  self._width  ,self._height)
        return  '%s ' %self._height
print('bbb')
a = Screen()
a.width = 5
a.height  = 6
print(a.resolution)
print(a)

'''
python使用的是 组合的方式来定义子类，而不是通过深继承的方式
__getitems__()方法实现起来还是比较复杂的，需要考虑切片对象slice()还有切边的参数
就是实现xxx.[]功能



print(dir(a))


class Fib(object):
    def __init__(self):
        self.a, self.b = 0,1

    
    __iter__, __next__让它能使用在for中
    
    def __call__(self):
        return self.a





    def __iter__(self):
        return self

    def __next__(self):
        #self.b = self.a + self.b#
        self.a,self.b  = self.b , self.a + self.b
        if self.a > 100000:
            raise  StopIteration()
        return self.a

    
    __getitem__()能够取索引
    

    def __getitem__(self, item):
        i = 0
        self.a , self.b = 0,1
        while i < item:
            self.a , self.b  = self.b , self.a + self.b
            i = i + 1
        return self.a


#a  = Fib()
#print(a())
for i in a:
    print(i)
print('dddddddddd')
print(a[6])

__getattr__()方法 配合正则表达式的使用情况




__str__()
__repr__()
__repr__ = __str__





__call__方法可以让一个对象变成函数，有点像c中的防函数的样子





#####################################################################################################################################
'''

class weekday(Enum):
    sun = 0
    mon = 1
    tue = 2
    wed = 3
    thu = 4
    fri = 5
    sat = 6


a = weekday.sun
print(a)


Month = Enum( 'Month', ('month', 'weekday') )
print('ddddd')

for name ,mumber in Month.__members__.items():
    print(name, '->',mumber,':', mumber.value)


'''
关于枚举
form enum import Enum, unique


class Enumtest(Enum):
    xx = 1
    xxx = 2
    
'''

def testfun(self, name='helld'):
    print('hello , %s'  %name)

Hello = type('Hello',(object,),  { 'hello':testfun} )
h= Hello()
h.hello()


'''
元类描述了定义类时候的行为


'''

def test_except(ob):
    try:
        10/ob
    except BaseException as e:
        print('error ', e)
        raise ValueError('input error')
    else:
        print('hello')
    finally:
        print('i was the finally')



def  matchre(str):
    re_mail = re.compile( r'^[a-zA-Z]+@[a-zA-Z]+.com$' )
    return  re_mail.match(str)


if matchre('lvyue@qq.com'):
    print('right')
else:
    print('failed')

'''
with open('D:\lvyue_test_io.txt', 'r') as f:
    for line in f.readlines():
        print(line)

'''

print('ddd')
list = os.listdir('D:\learn_meterial\笔记本')
for i in list:
    print(i)



'''
如何查找某种后缀的文件

'''


'''
Stringio 
byteio
'''
f = StringIO('temp')
f.write('hello')
f.write('world')
print(f.getvalue())

f = BytesIO()
f.write('中文'.encode('utf-8'))
print(f.getvalue())

'''
-------------------------------------------------------------------------------
'''

#print(os.uname())

for i in os.environ:
    print( i ,':',os.environ.get(i))

'''
学习一下os系统
'''

'''
序列化为json以及从json反序列化

'''

'''
__enter__
__exit__
测试上下文管理器
'''

class test_lvyue(object):
    def __init__(self, name):
        self.name = name
    def __enter__(self):
        print('entering')
        print(self.name)
        return 'hello'
    def __exit__(self, exc_type, exc_value, traceback):
        print('exiting')
        if exc_type is not None:
            print('excepiton:' , exc_value)
with test_lvyue('lvyue') as lvyue:
    print(lvyue)


class test_lvyue(object):
    @classmethod
    def bar(cls,x):
        print('the input is :', x)


test_lvyue.bar( 'ssss')