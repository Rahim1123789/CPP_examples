#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
ofstream fout;
fout.open("New.txt");
fout<<"Hii World";
fout.close();
ifstream fin;
fin.open("New.txt");
while(!fin.eof())
{
    cout << ch;
    fin >> ch;
}
fin.close();
 //   cout << "Hello world!" << endl;
    return 0;
}
