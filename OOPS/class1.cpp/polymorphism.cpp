// there are two type s of poylymorphism 
// complie time : when the polymorphism act on the compile time when the code is compiling that is known as compile time or static polymorphism
// can be implemented by two methods
// 1 function overloading: multile funciton with same name but have different argument type and argument count
// 2 operator overloading

// run time: when the polymorphism act on the runtine taht is known as runtime polymorphism or dynamic polymorphosm
// funciton overriding
#include<bits/stdc++.h>
using namespace std;

class Add{
    public:
    int sum(int x,int y) { //funciton overlading
        return x+y;
    }
    int sum(double x,double y){
        return x+y;
    }
    double sum(double x,double y,double z){
        return x+y+z;
    }
    


};
class Complex{ //operatir overloading
    public:
    int real;
    int imag;
    Complex(){
        real=imag=-1;
    }
    Complex(int r,int i): real(r),imag(i){};
    void print(){
        printf("[%d + i%d]",this->real,this->imag);
    }

    Complex operator + (const Complex& obj){
        Complex temp;
        temp.real=obj.real+this->real;
        temp.imag=obj.imag+this->imag;
        return temp;
    }
    bool operator == (const Complex& obj){
        return this->real==obj.real && this->imag==obj.imag;
    }
    


};

int main(){
    Add obj;
    // int s1=obj.sum(5,7);
    // int s2=obj.sum(56.8,7.2);
    // int s3=obj.sum(5,7,5);

    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<s3<<endl;
    Complex B(3,2);
    B.print();
    Complex C(4,5);

    Complex d=B+C;

    return 0;
}