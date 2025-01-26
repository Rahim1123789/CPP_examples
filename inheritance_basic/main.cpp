#include<iostream>
#include<string>

using namespace std;

class retangle
{
  public:
     int higeht;
     int width;
     retangle()
     {
         higeht=0;
         width=0;
     }
     void showData(void)
     {
         cout << "higeht is:" << higeht << endl;
         cout << "width is:"  << width << endl;
     }
};

class cube:public retangle
{
public:
    int angle;
    void display(void)
    {
        cout << "angle is:" << angle << endl;
    }
};

int main ()
{
  cube c1(higeht=20,width=21,angle=44);
    return 0;
}
