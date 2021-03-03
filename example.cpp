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
// get size of file
inputfile.seekg(290,ifstream::end);
size=inputfile.tellg();
inputfile.seekg(0);

// llocate memory for file content
buffer = new char [size];

// read content of infile
inputfile.read (buffer,size);

// write to outfile
outputfile.write (buffer,size/2);
outputfile2.write (buffer+size/2,size);
// release dynamically-allocated memory
delete[] buffer;

outputfile.close();
inputfile.close();
outputfile2.close();
return 0;
}