#ifndef FILEDEAL_H
#define FILEDEAL_H
#include <string.h>
#include <string>
#include<stdio.h>
#include<iostream>

using namespace std;

class filedeal
{
    public:
        filedeal();
        virtual ~filedeal();
        void  getkeyvalue(const char* filename);

    protected:

    private:
};

#endif // FILEDEAL_H
