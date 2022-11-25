#include<iostream>
#include<fstream>
#include<map>
#include<set>

using namespace std;

int main()
{
	ifstream ifs;
	char buffer[10000]={0};

	ifs.open("C17.blif");
	ifs.read(buffer,sizeof(buffer));

}

