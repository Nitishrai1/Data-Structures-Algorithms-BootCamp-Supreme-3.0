// oops it consist of a template which is class class and can be accsed using a object of a class  
// why : in the proceduler programing thier was many error to overcome this error oops is introduced in the industry
#include<bits/stdc++.h>
using namespace std;
class Student{
    public: //so that the data member and data fucntion can be accesd in the main function
    int student_id;
    string student_name;
    int age;
    Student(int id,string name,int age ){
        this->student_id=id;
        this->student_name=name;
        this->age=age;  
        //this keyward demonstrate on which object/instance wer are calling the class 
    }
    void eat(){
        cout<<this->student_name<<" is eating food";
    }
    void play(){
        cout<<this->student_name<<" is eating playing";


    }
    void study(){
        cout<<this->student_name<<" is eating studying";

    }

    ~Student(){} // this is distructing the class so that the memory which are allocated can be released
};
int main() {
    Student s1=new Student(1,"nitish",22); //this is instance fo the class


return 0;
}