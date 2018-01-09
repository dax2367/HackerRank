#include <bits/stdc++.h>

using namespace std;

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    int suma=0, sumb=0;
        
    if(a0>b0){
        suma++;
    } else if (b0>a0){
        sumb++;
   }
    
   if(a1>b1){
        suma++;
    } else if (b1>a1){
        sumb++;
   }
    
   if(a2>b2){
        suma++;
    } else if (b2>a2){
        sumb++;
   }
   
    cout << suma << " " << sumb;
    
    }