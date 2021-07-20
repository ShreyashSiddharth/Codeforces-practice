#include <bits/stdc++.h>
#include<fstream>
using namespace std;

class Student{
private:
    int roll_no;
    char name[50];
    char class1[3];


public:
    Student(){
    roll_no = 0;
    strcpy(name,"no name");
    strcpy(class1,"no info");
    }

    void GetStudentDetails(){
    cout<<"Enter students roll number,name and class"<<endl;
    cin>>roll_no;
    getline(name,49);
    getline(class1,2);

    }


};




int main(){
    Student s1;
    s1.GetStudentDetails();
    fstream file;
    char name[20];
    file.open("demo.txt",ios::out);
    if(!file){
        cout<<"File does not exist";
    }
    cout<<"Writing in file"<<endl;
    file<<"Raj"<<endl;
    file<<"Rahul"<<endl;
    file<<"shyam"<<endl;
    file.close();
    cout<<"Reading from file"<<endl;
    file.open("demo.txt",ios::in);
    file>>name;
    while(!file.eof()){

        cout<<name<<endl;
        file>>name;
    }

    file.close();
    return 0;


}



