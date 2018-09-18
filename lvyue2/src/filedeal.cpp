#include "filedeal.h"

filedeal::filedeal()
{
    //ctor
    cout << "create success"<<endl;
}

filedeal::~filedeal()
{
    //dtor
}
void filedeal::getkeyvalue(const char * filename)
{
     cout << "in the getkeyvalue"<<endl;

     FILE *fp = fopen( filename, "r" );
     char linestr[1024] = {0};
     if( fp != NULL)
     {
          cout << " dd" <<endl;
        // while(1)
         {

             cout << "in the loop"<<endl;
             while(fgets(linestr, 23, fp))
             {
                  cout << "get success " <<endl;
                  cout << linestr<<endl;

             }

         }



     }
     else
    {
     cout << "open failed"<<endl;

    }
}
