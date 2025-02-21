// oops it consist of a template which is class class and can be accsed using a object of a class  
// why : in the proceduler programing thier was many error to overcome this error oops is introduced in the industry
#include<bits/stdc++.h>
using namespace std;
class Student {
    public: //so that the data member and data fucntion can be accesd in the main function
    int student_id;
    string student_name;
    float *gpa;
    int age;
    Student(){}//default constructor
    Student(int id,string name,int age,float gpa ){  //parameterise constructor
        this->student_id=id;
        this->student_name=name;
        this->age=age;  
        //this keyward demonstrate on which object/instance wer are calling the class 
        this->gpa=new float(gpa); //isko  distructor per dlete kar dena
    }

    // copy construnctor
      Student(const Student& srcObj ){  //parameterise constructor
        this->student_id=srcObj.student_id;
        this->student_name=srcObj.student_name;
        this->age=srcObj.age;  
        //this keyward demonstrate on which object/instance wer are calling the class 
    }
    void eat(){
        cout<<this->student_name<<" is eating food";
    }
    void play(){
        cout<<this->student_name<<" is playing";


    }
    void study(){
        cout<<this->student_name<<" is  studying";

    }

    ~Student(){
        delete this->gpa;
        cout<<"Distructor is called";
    } // this is distructing the class so that the memory which are allocated can be released
};
int main() {
    // Student s1(1,"Nitish",22); //this is instance fo the class
    // s1.eat(); //by this way i can access the data meber and data function of a class
    // cout<<endl;
    // s1.play();

    // // now how to create a copy constructor
    // Student s2=s1;//the valu of s1 objext is copied to the s2 obect
    // // OR Student s2(s1);
    // cout<<s2.age;

    // all above code use stack memory 
    // Now let us see dynamic memory aallocation
    Student *B=new Student(2,"Tanish",21,9.8);
    cout<<B->age<<endl;
    cout<<B->student_name<<endl;

    // When using a dynamic memory allocation the distructor is not called by it self but we hve to call the distructor maunaly
    delete B;




return 0;
}