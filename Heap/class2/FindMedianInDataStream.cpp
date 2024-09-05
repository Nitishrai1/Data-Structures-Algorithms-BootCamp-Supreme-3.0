#include<bits/stdc++.h>
using namespace std;
class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    double median;

    MedianFinder() {
        median=0;
    }
    
    void addNum(int num) {
        if(maxheap.size()==minheap.size()){
            if(num>median){
                minheap.push(num);
                median=minheap.top();
            }else{
                maxheap.push(num);
                median=maxheap.top();
            }
        
        }else if(maxheap.size()==minheap.size()+1){
            // is case me maxheap bada hai min heap se
            if(num>median){
                minheap.push(num);
                median=(minheap.top()+maxheap.top())/2.0;
            }else{
                int ele=maxheap.top();
                maxheap.pop();
                minheap.push(ele);
                maxheap.push(num);
                 median=(minheap.top()+maxheap.top())/2.0;
            }
        }else if(maxheap.size()+1==minheap.size()){
            if(num>median){
                // insert at right
                int ele=minheap.top();
                minheap.pop();
                maxheap.push(ele);
                minheap.push(num);
                median=(minheap.top()+maxheap.top())/2.0;
            }else{
                maxheap.push(num);
                median=(minheap.top()+maxheap.top())/2.0;
            }
        }
        
    }
    
    double findMedian() {
        return median;
        
    }
};
int main() {

return 0;
}