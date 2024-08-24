#include<bits/stdc++.h>
using namespace std;
class NestedIterator {
    queue<int> q1;
    void flattern(vector<NestedInteger>& nextlist){
        for(auto& each:nextlist){
            if(each.isInteger()){
                int item=each.getInteger();  //abhi each is an instance of integer
                q1.push(item);
            }else{
                flattern(each.getList());

            }
        }
    }
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        flattern(nestedList);
        
    }
    
    int next() {
        int front=q1.front();
        q1.pop();
        return front;
        
    }
    
    bool hasNext() {
        return (!q1.empty());
        
    }
};
int main() {

return 0;
}