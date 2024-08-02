#include<bits/stdc++.h>
using namespace std;
void nextsmaller(vector<int>& heights,vector<int> & nextIndex){
        stack<int> st;
        st.push(-1);
        int n=heights.size();
        for(int i=n-1;i>=0;i--){
            int element=heights[i];
            int ind=st.top();
            // tak tak check karo jab tak index aout of bound na ho jaye
            while(st.top()!=-1 && heights[ind]>=element){
                st.pop();
                ind = st.top();
            }

            // yaha ane ka matlab hai ki ya to koi smaller number ka index stack me ya to -1 hoga
            nextIndex.push_back(st.top());
            st.push(i);
        }
    }

    void prevsmaller(vector<int>& heights,vector<int> & prevIndex){
        stack<int> st;
        st.push(-1);
        int n=heights.size();
        for(int i=0;i<n;i++){
            int element=heights[i];
            int ind=st.top();
            // tak tak check karo jab tak index aout of bound na ho jaye
            while(st.top()!=-1 && heights[ind]>=element){
                st.pop();
                ind = st.top();
            }

            // yaha ane ka matlab hai ki ya to koi smaller number ka index stack me ya to -1 hoga
            prevIndex.push_back(st.top());
            st.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) {

        // sabse pahle nextsmaller elemnt ka index store karo
        vector<int> nextIndex;
        nextsmaller(heights,nextIndex);
        int n=heights.size();
        vector<int> prevIndex;
        prevsmaller(heights,prevIndex);
        // check kar lete hai hua hai ki nahi
        reverse(nextIndex.begin(),nextIndex.end());
        for(int i=0;i<nextIndex.size();i++){
            if(nextIndex[i]==-1){
                nextIndex[i]=n;
            }
        }
        for(int i: nextIndex){
            cout<<i <<" ";
        }cout<<endl;
        
        for(int i:prevIndex){
            cout<<i<<" ";
        }

        // ab area nikalo sare index ka
        vector<int> area;
        for(int i=0;i<nextIndex.size();i++){
            int width=nextIndex[i]-prevIndex[i]-1;
            int height=heights[i];
            int currarea=width*height;
            area.push_back(currarea);

        }
        // find max area in array
        int maxi=*max_element(area.begin(),area.end());
        return maxi;
        
    }
int main() {

return 0;
}