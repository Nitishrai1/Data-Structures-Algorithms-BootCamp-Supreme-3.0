// all the things under oops come inside the abstarction it is the global thing which tells to give the access to the user which they want to see not how the things are implemented under the hood
// eg all the the header files are the example of abstraction like the sort function and reveres and many more

// Abstruct class : class that contains at least one virtual funciton and these classes cannot be instaintiated

#include<bits/stdc++.h>
using namespace std;
class Bird{
    public:
    virtual void eat()=0;  //pure virtual funciton also called as an interface
    virtual void fly()=0;
    virtual void sleep()=0;

    // classes that inherit this class have to implement this funcitons
    // basically jab bhi hame pura idea nahi hota hai to ham virtual funciton bane deegt hai taki usko child class me implement kar sake

    // ab is file ko jab ham kahi or header file me lenge to ye sab methoid le lenge usme se

};

class  Sparow : public  Bird{
    public:
    void eat(){
        cout<<"Sparrow is eating"<<endl;
    }
    void fly(){
        cout<<"Sparrow is flying"<<endl;
    }
    void sleep(){
        cout<<"Sparrow is sleaping"<<endl;
    }

};
class  Eagle : public  Bird{
    public:
    void eat(){
        cout<<"Sparrow is eating"<<endl;
    }
    void fly(){
        cout<<"Sparrow is flying"<<endl;
    }
    void sleep(){
        cout<<"Sparrow is sleaping"<<endl;
    }

};

