#include<iostream>
#include<string>


using namespace std;

class person
{
private:
    string name;
    int age;
    int hiegth;
public:
    person(string nam,int ag,int hight)
    {
       name = nam;
       age = ag;
       hiegth = hight;
    }

    void getData(void)
    {
        cout <<name<<endl;
        cout<<age<<endl;
        cout<<hiegth<<endl;
    }
};

int main()
{
    person sabi("sabina"`   3,20,4);
    sabi.getData();
    return 0;
}
