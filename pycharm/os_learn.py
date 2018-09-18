#!/usr/bin/env python3
import  os,os.path
from numpy import  *
import  sys
import csv
import re
import time
import string
'''
学习python的os模块
'''

'''
查看一个文件路径的目录结构树
'''

def pathtree(path):
    #path = 'D:\learn_meterial'
    for root, dirs, files in os.walk(path):
        for dir in dirs:
           # print(' ', name)
           print(os.path.join(root,dir))
        for  file in files:
           print(os.path.join(root,file))

'''
查看一个路径下，修改时间比给定时间老的文件并输出
'''

#fd = open('D:\learn_meterial\test_python.txt')
#replace(fd, 'lvyue', 'world')

'''
os.path 练习
'''

file = 'D:\python_test\hello.txt'

print(os.path.split(file))
print(os.path.splitext(file))

file_tuple= os.path.splitext(file)
print(file_tuple[1])

print(os.path.dirname(file))
print(os.path.basename(file))

'''
文件是否存在
'''
file1='D:\python_test\hello1.txt'
if os.path.exists(file1):
    print('exists')
else:
    print('no exists')

'''
绝对路径？
'''
file3 = 'hello.txt'
if os.path.isabs(file3):
    print('is absoluted file')
else:
    print('not absolute file')

'''
列出目录
'''
dir = 'D:\python_test'
for file in os.listdir(dir):
    print(' file',file)

'''
创建目录和删除目录

'''

#递归创建目录，exist_ok 为真时候，即使存在不抛出异常

try:
        os.makedirs('D:\python_test\lvyue',exist_ok=True)
except  OSError as e:
        print('error', e)


'''
递归删除叶子目录，如果父目录为空也删除
'''
try:
    os.removedirs('D:\python_test\lvyue\ddd')
except  OSError as e:
    print('error', e)
finally:
    print('hello continue')

'''
调用window程序
'''

str = os.environ['PATH']

#for path1 in path.split
   # print(path1)

#for path in os.environ('PATH'):
#    print(path)

'''
def run(program, *args):
    # find executable
    for path in string.split(os.environ["PATH"], os.pathsep):
        file = os.path.join(path, program) + ".exe"
        try:
            return os.spawnv(os.P_WAIT, file, (file,) + args)
        except os.error:
            pass
    raise os.error

run("QQ", "1047309494")
'''

# file = 'D:\install\qq\Bin\QQ.exe'
# returncode = os.spawnv(os.P_WAIT, file, (file, ))
# print('qq:',returncode)

# os.environ['lvyue_test'] = 'lvyue'
# print(os.path.en)

'''
time 模块
'''
now = time.time()
print(now)
now = time.localtime(time.time())

print(time.asctime(now))
print(time.strftime("%y/%m/%d %H:%M", now))
print (time.strftime("%a %b %d", now))
print (time.strftime("%c", now))
print (time.strftime("%I %p", now))

# print(time.strftime('%H:%M:%S:%Z', now))


'''
实现一个函数将一个目录下的创建日期小于给出的 ，都罗列出来
'''
# print('niddddddddddd')
'''
dir ='D:\python_test'
def  list_file_date(dir, date = None):
    file_save= 'D:\lvyue_tmp.txt'
    files = os.listdir(dir)
    print(files)
    for file in files:
        absfile = os.path.join(dir,file)
        print(absfile)
        if os.path.isfile(absfile):
             ctime = time.localtime(os.stat(absfile).st_ctime)
             timestrform = time.strftime('%Y%m%d-%H-%M-%S',ctime)
             if timestrform < date:
                 print(r'data < timestrform')
                 fd = open(file_save,'a+')
                 #absfile = absfile.rstrip()
                 # print(absfile)
                 fd.write(absfile + '\n')
                 # fd.write('\n')
                 # fd.write()

                 print('wirted')
             else:
                 print(r'date > timestrform')







list_file_date(dir,'20181213-13-23-06')

'''

'''
numpy 学习
'''
a = [1,2,3,4]
# a= array(a)

try:
    x = 1/0
except Exception:
    print(sys.exc_info())
    # sys.exc_clear()
    # sys.exit(0)
for i in sys.path:
    print(i)

print(sys.platform)
print(sys.version)
print(os.getcwd())
print(os.curdir)
print(os.linesep)

print('lll')
data = [('nihao',),('woshidashen',)]
with open('D:\out7.csv', 'w') as fp:
    w = csv.writer(fp)
    w.writerows(data)

print('vvv')

# os.renames('D:\out7.xlsx','D:\out7.xls')
print('mmm')
'''
re模块
'''


string ='hello world'
pattern = 'hello (\w+)'
match = re.match(pattern, string)
if match is not None:
    print(match.group(0))
    print(match.group(1))

pattern = re.compile('hello (\w+)')
#match = pattern.match(string)

string ='hello 5 world niahod 88 chengyi 97 '
pattern='\d+'
match = re.findall(pattern, string)
print(type(match))
if match is not None:
    print(match)

string_split ='niao,chengdd|xuehing/lingzhu tengxu'
pattern='[,|/ ]'
match = re.split(pattern,string_split)
print(match)

pattern1='\d+|(world)'
replace_string = 'vvvvvv'
newstring = re.sub(pattern1,replace_string ,string)
print(newstring)

print('zzzzzzzzzzzz')
test = re.finditer(pattern1, string)
# print(test.group(0))
for m in test:
    print(m.group())


# print(test.group(0))
# i = iter(test)
# print(next(i))
# print(test[0])
# print(next(test))
# print('vvvvvvvvv')
# for i in test:
# while True:
#     x = next(test)
    # print(x)
    # print(type(x))


