#include <iostream>
#include <fstream>

using namespace std;

/*****************Only file Write Code*******************/
int main()
{
    ofstream fout;  //Create an object to perform data write operation
    fout.open("Rahim.txt"); //Create a file or open a file
    fout<< "My name is Rahim";
    fout.close();
    cout << "Hello world!" << endl;
    return 0;
}
