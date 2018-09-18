//============================================================================
// Name        : eclipse_lvyue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include<fstream>
#include<cstdlib>

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl;
	ofstream outfile("D:\\client.txt", ios::out);
	if(! outfile)
	{
		cout << "file not found "<<endl;
		return 0;
	}




	return 0;
}
