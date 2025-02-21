// ITs the first piller of the oops
// it is used to bind the data and method in the class
#include<bits/stdc++.h>
using namespace std;
class Encapsulation
{
private:
    /* data */
    int age;
    int salary; //this store in the internal code from the external user and only the neccesary imformation is exposed to the real world
public:
// these are the setter
    void setAge(int a){
        this->age=a;
    }
    void setSalary(int sal){
        this->salary=sal;
    }
    // string name;
    // int gpa;
    // Encapsulation(int age,int sal,string name,int gpa){
    //     this->age=age;
    //     this->salary=sal;
    //     this->name=name;
    //     this->gpa=gpa;
    // }
    // this are the getter
    int getAge()
    {
        return this->age;
    }
    int getSalary()
    {
        return this->salary;
    }
    private:
    void work(){}
    ~Encapsulation();
};


int main() {
    // Encapsulation A(12,20000,"Nitish",9);
    // all the private data member is not accessible in the main function

return 0;
}