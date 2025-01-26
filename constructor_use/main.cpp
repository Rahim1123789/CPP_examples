#include<iostream>
#include<string>

using namespace std;

class mobile
{
private:
    string model_name;
    string processor;
    int ram;
public:
    mobile(string model_name_a="NULL", string processor_a="NULL",int ram_a=0)
    {
        model_name = model_name_a;
        processor = processor_a;
        ram = ram_a;
    }
    mobie(mobile &mob)
    {
         model_name = mob.model_name;
        processor = mob.processor;
        ram = mob.ram;
    }
    void getdata(void)
    {
        cout<< "Model Name is:" << model_name <<endl;
        cout<< "Processor Name is:" << processor <<endl;
        cout<< "Ram is:" << ram <<endl;
    }
};

int main()
{

mobile mob3,mob("Doko","inteli5",4),mob2(mob);
mob3.getdata();
mob.getdata();
mob2.getdata();

    return 0;

}
