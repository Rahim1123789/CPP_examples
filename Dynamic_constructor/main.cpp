#include <iostream>
#include<string.h>

using namespace std;

class Sttring
{
    char *name;
    int length;
public:
    Sttring()  // First Constructor 1
    {
        length=0;
        name= new char[length+1];
    }
    Sttring(char *s)  // Paramiterised constructor 2
    {
        length = strlen(s);
        name = new char[length+1]; //one additional chr for null
        strcpy(name,s);
    }
    void display(void)
    {
        cout<< name << "\n";
    }
    void join(Sttring &a,Sttring &b);
};

void Sttring::join(Sttring &a,Sttring &b)
{
    length = a.length + b.length;
    delete name;
    name = new char[length+1];   // Dynamic allocation
    strcpy(name,a.name);
    strcat(name,b.name);
}

int main()
{
    char *first = "Joseph";
    Sttring name1(first),name2("Louis"),name3("Lanrange"),s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    cout << "Hello world!" << endl;
    return 0;
}
