#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ofile.open("file.txt");
    ofile<<"This is a line in a file";
    ofile<<"This is another file";
    cout<<"Data written to file";
    ofile.close();
    return 0;
}
