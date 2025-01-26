#include <iostream>

using namespace std;

class Person
{
    int age;
public:
    Person()
    {

    }
    Person(int i)
    {
        age=i;
    }
    void get0ccupation()
    {
        try
        {
           throw age;
        }
        catch(int age){
           cout << "Catch Called " << '\n';
            switch(age)
            {
            case 10:
                cout <<  "Child" << '\n';
                break;
            case 20:
               cout <<  "Student" << '\n';
                break;
            case 30:
               cout << "Employee" << '\n';
                break;
            }
        }
    }
    void increment()
    {
        age+=10;
    }
};
int main()
{
    Person objPerson(10);
    objPerson.get0ccupation();
    objPerson.increment();
    objPerson.get0ccupation();
    objPerson.increment();
    objPerson.get0ccupation();
    objPerson.increment();
    cout << "Hello world!" << endl;
    return 0;
}
