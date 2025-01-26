#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string>

using namespace std;

//Function Declaration
void project();
void addData();
void displayData();
void deleteData();
void getTrash();

//student Class
class Student
{
    //member variables
    int admissionNo;
    char sname[20];
    char sgender;
    int standerd;
    float smarks;
    double sprcentage;

    //member functions
public:
    void getData();
    void showData();
    int getAdmno()
    {
        return admissionNo;
    }
}s;    //object of class student

//Main Function
int main()
{
    project();  //function call

    return 0;
}

//project function declaration
void project()
{
  int ch;

  do
  {
      system("cls"); //clear screen
      cout << "*****************************STUDENT MANAGMENT SYSTEM**********************************\n";
      cout << "1. Write Student Record\n";
      cout << "2. Read Student Record\n";
      cout << "3. Delete Student Record\n";
      cout << "4. Get Deleted Records\n";
      cout << "0. Exit\n";
      cout << "Enter your choice: ";
      cin >> ch;
      system("cls");

      switch (ch)
      {
          case 1: addData();       //add student data to file  - stu.txt
                   break;
          case 2: displayData();   //read data from file - stu.txt
                   break;
          case 3: deleteData();    //remove data from - stu.txt and store into Trash.txt
                   break;
          case 4: getTrash();      //add data from Trash.txt to stu.txt
                   break;
      }
      system("pause");
  }while(ch);
}

void Student::getData()    // will get data from console
{
    cout << "\n\n******************Enter Student Data********************\n";
    cout << "Admission No.: ";
    cin >> admissionNo;
    cout << "Full Name: ";
    cin.ignore();
    cin.getline(sname,20);
    cout << "Gender (M/F):";
    cin >> sgender;
    cout << "Class: ";
    cin >> standerd;
    cout << "Total Marks(/500): ";
    cin >> smarks;
    cout << endl;
    sprcentage = smarks * 100.0 / 500.0;
}

void Student::showData()  //will display data on console
{
    cout << "\n\n****************Student Details***********************\n";
    cout << "Admission No.: " << admissionNo << endl;
    cout << "Full Name: " << sname << endl;
    cout << "Gender" << sgender << endl;
    cout << "Class" << standerd << endl;
    cout << "Total Marks (/500): " << smarks << endl;
    cout << "Percentage: " << sprcentage << endl;
    cout << endl;
}

void addData()
{
    ofstream fout;
    fout.open("Stu.txt",ios::out | ios::app | ios::binary);
    s.getData(); // get data from console

    //s- object to write data to file
    fout.write((char*)&s,sizeof(s)); //write data in file Stu.txt
    fout.close(); //close the file to save
    cout << "\n\n*************Data Successfully Saved to File******************\n";
}

void displayData()
{
   ifstream fin;
   fin.open("Stu.txt",ios::in | ios::binary);

   while(fin.read((char*)&s,sizeof(s)))
   {
       s.showData();
   }
   fin.close();
   cout << "\n\n**************Data Reading from File Successfully Done***************\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout, tout;
    fin.open("Stu.txt",ios::in | ios::binary);
    fout.open("Temp.txt",ios::out | ios::app |ios::binary);
    tout.open("Trash.txt",ios::out | ios::app |ios::binary);
    cout << "Enter Addmission Number : " << endl;
    cin >> n;

    while(fin.read((char*)&s,sizeof(s)))
    {
       if(n == s.getAdmno())
       {
           cout << "This Record " << n << "Has Been sent to trash:\n";
           s.showData();
           tout.write((char*)&s,sizeof(s));
           flag++;
       }
       else
       {
           fout.write((char*)&s,sizeof(s));
       }
    }
    fout.close();
    tout.close();
    fin.close();

    if(flag == 0)
        cout << "  " << n << "No Record found***************\n\n";

    remove("Stu.txt");
    rename("Temp.txt","Stu.txt");
}

void getTrash()
{
    ifstream fin;
    fin.open("Trash.txt", ios::in |ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
    {
        s.showData();
    }
    fin.close();
    cout << "\n\n*************Data Reading from Trash file Successfully Done***************\n";
}








