#include<bits/stdc++.h>
using namespace std;
int main() {
    // Dqueue stl
    deque<int> d1;
    d1.push_back(1);
    d1.push_front(10);
    d1.push_back(120);
    d1.push_front(90);
    d1.push_back(155);
    d1.push_back(167);
    d1.push_back(0);

    cout<<d1.front()<<endl;

    cout<<d1.back()<<endl;
    
    d1.pop_back();




return 0;
}