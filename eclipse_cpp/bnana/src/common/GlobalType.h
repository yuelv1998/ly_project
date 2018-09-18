#pragma once
#include <sys/type.h>
//#define FIFO_MODE ()
enum IPCMODE
{
    IR = S_IRUSR
   ,IW = S_IWUSR
   ,GR = S_IRGRP
   ,GW = S_IWGRP
   ,OR = S_IROTH
   ,OW = S_IWOTH

}

enum IPCFLAG
{
    READ       = O_RDONLY
   ,WRITE      = O_WRONLY
   ,READ_WIRTE = O_RDWR
   ,CREATE     = O_CREAT
   ,CREATE_EXCL     = O_CREAT | O_EXCL
   ,NOBLOCK    = O_NONBLOCK
}

#define FIFO_MODE ( IR| IW|GR|GW )





