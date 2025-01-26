#include <iostream>

using namespace std;

class serial
{
public:
    string buffdata="inital string";
    string getstring();
    void sendstring(string);
    void printstr()
    {
        cout << buffdata << '\n';
    }
};
string serial::getstring()
{
    string str="NULL";
    str=buffdata;
    return str;
}
void serial::sendstring(string str)
{
   buffdata = str;
}

int main()
{
    string str1="This is a second string";
    serial ser;
    cout << ser.getstring() << endl;
    ser.sendstring(str1);
    ser.printstr();
    return 0;
}
