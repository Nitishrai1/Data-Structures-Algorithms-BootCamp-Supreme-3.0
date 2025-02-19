#include<bits/stdc++.h>
#include "Bird.h"
using namespace std;

// yaha par call kar sakte hai bird wala class ka method 
void birdwork(Bird *&bird){
    bird->eat();
    bird->sleep();
    bird->fly();

}
int main() {
    Bird *bird=new Sparow();
    Bird *b2=new Eagle();
    birdwork(bird);
    birdwork(b2);


return 0;
}