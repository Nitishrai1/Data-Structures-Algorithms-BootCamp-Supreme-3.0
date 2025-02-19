// Macrops are the preprocess code snippet genrealy #define is used to create a macro
#include <bits/stdc++.h>
#define PI 3.14
#define MAX(x, y) ((x) > (y) ? (x) : (y)) 
using namespace std;

float circle(float r) {
    return PI * r * r;
}

int main() {
    cout << circle(1.6) << endl;
    
    int ans = MAX(4, 5);
    cout << ans << endl;

    return 0;
}
