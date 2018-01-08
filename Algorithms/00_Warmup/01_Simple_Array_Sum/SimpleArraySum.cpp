#include <iostream>
using namespace std;

int simpleArraySum(int n, int ary[]) {
    // Complete this function
        int sum=0;
        for(int i=0; i<n; i++){
            sum += ary[i];
        }
        return sum;
}

int main() {
    int n;
    cin >> n;
    int ary[n];
    for(int i = 0; i < n; i++){
       cin >> ary[i];
    }
    int result = simpleArraySum(n, ary);
    cout << result << endl;
    return 0;
}