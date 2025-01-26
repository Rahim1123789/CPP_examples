#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class fileHandler
{
private:
    int result=0;
    string com="NULL";
    ifstream FileIn;
    ofstream FileOut;
    string FileName="SerialPort.txt";
public:
    string CheckORcreate(void)
    {
        FileIn.open(FileName.c_str());
        if(!(FileIn.is_open()))
        {
            cout << "Error in opening file" << endl;
            FileOut.open(FileName.c_str());
            FileOut << "COM5";
            FileOut.close();
            FileIn.open(FileName.c_str());
            if((FileIn.is_open()))
            {
               cout << "File Is Opened"<<endl;
            }
        }
        FileIn >> com;
        return com;
    }
};

class serialHandler
{
private:
    int counter=0;
    int BUFF_SIZE=10;
    string TxBuffer = "NULL";
    string RxBuffer = "NULL";
public:
    int Serial_Config(void)
    {

    }
    void SendData(string)
    {

    }
    string ReciveData(void)
    {

    }
};


int main()
{
    string comport="NULL";
    fileHandler file;
    comport=file.CheckORcreate();
    cout << "Com Port Is " << comport << endl;

    /** \brief
     *
     ofstream file;
    file.open("SerialPort.txt");
    file<<"Comport is: 5";
    int a = 0;
    file.seekp(1,ios_base::cur);
    cout << "Position is:" << file.tellp() << endl;
     file.close();
     *
     */

    cout << "Hello world!" << endl;
    return 0;
}
