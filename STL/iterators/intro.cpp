#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v1={1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it=v1.begin();
    while(it!=v1.end()){
        cout<<*it<<" ";
        it++;
    }
   

return 0;
}