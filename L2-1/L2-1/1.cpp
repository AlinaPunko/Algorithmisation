#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	FILE *F2 = fopen("f2.txt", "w");
	ofstream out("f2.txt", ofstream::out);
	out << "punko" << endl;          
}