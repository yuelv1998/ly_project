#include <iostream>
#include <thread>
using namespace std;
void hello()
{
   cout <<"hello world" <<endl;
}
int main()
{
    //cout << "Hello world!" << endl;
    std::thread t(hello);
    t.join();
    return 0;
}
