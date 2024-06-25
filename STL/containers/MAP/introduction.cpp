// map : it is the collection of the key value pair 
// allows efficient retrival and modification of values based on keys
// keys are uniqiure within the map
// Thier are two most used  types of map ordered_map() and unordered_map()

#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<int,string> um;  // opertaion is constant
    
// INsertion
    um[1]="India";
    um.insert(make_pair(2,"Nepal"));

    pair<int,string> p;
    p.first=3;
    p.second="Brazil";
    um.insert(p);
    cout<<um.size();
    for(auto  i:um){
        cout<<i.first<<" "<<i.second<<endl;  //this will print the key value of the map in random order
    }
    cout<<um.size();
    // um.erase(um.begin(),um.end()); erase the data of the map
    auto  f=um.find(1);
    if(f==um.end()) cout<<"Not found"<<endl;
    else{
        cout<<"Found"<<endl;
    }
    if(um.find(3)!=um.end()) cout<<"Found"<<endl; //returns the iterator pointing to the element in the map
    else cout<<"Not found"<<endl;

    // count function return the number of pair eith the key
    if(um.count(2)!=0){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    // MAP 
    cout<<"Map ->"<<endl;
    map<int,string> mp;    // insertion is done in log n time
    mp[1]="India";
    mp.insert(make_pair(2,"Nepal"));
    pair<int,string> p1;
    p1.first=3;
    p1.second="Brazil";
    mp.insert(p1);
   
    for(auto  i:mp){
        cout<<i.first<<" "<<i.second<<endl;  //this will print the key value of the map in random order
    }




return 0;
}
