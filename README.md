#include <iostream>  
#include <fstream> 
#include <string>
using namespace std;

int main () 
{
char * buffer;
int size;

ifstream inputfile ("C:\\Users\\admin\\Desktop\\text.txt",ifstream::binary);
ofstream outputfile ("C:\\Users\\admin\\Desktop\\new1.txt",ofstream::binary);
ofstream outputfile2 ("C:\\Users\\admin\\Desktop\\new2.txt",ofstream::binary);

inputfile.seekg(290,ifstream::end);
size=inputfile.tellg();
inputfile.seekg(0);

buffer = new char [size];
inputfile.read (buffer,size);
outputfile.write (buffer,size/2);
outputfile2.write (buffer+size/2,size);
delete[] buffer;
outputfile.close();
inputfile.close();
outputfile2.close();
return 0;
}
