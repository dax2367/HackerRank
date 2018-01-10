#include <vector>
#include <iostream>
using namespace std;

long veryBigSum(int n, vector <long> ary) {
    // Complete this function
        long sum=0;
        for(int i=0; i<n; i++){
            sum += ary[i];
        }
        return sum;
}

int main() {
    int n;
    cin >> n;
    vector <long> ary(n);
    for(int i = 0; i < n; i++){
       cin >> ary[i];
    }
    long result = veryBigSum(n, ary);
    cout << result;

    return 0;
}