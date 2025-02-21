#include<bits/stdc++.h>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(abc &obj){  //this is called the shallow copy in which we make to same copy of the obje which is pointing to the same memory location
        this->x=obj.x;
        this->y=obj.y

    }
    abc(abc &obj){
        this->x=obj.x;
        this->y=new int(obj.y); //this is called the deep copy in whihc we make the new address

    }
}


int main() {

    abc a(5,6);

    abc b=a; //this is called shallow copy

return 0;
}