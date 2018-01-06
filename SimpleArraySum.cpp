/*Given an array of  integers, can you find the sum of its elements?

Input Format:
The first line contains an integer, N, denoting the size of the array. 
The second line contains N space-separated integers representing the array's elements.

Output Format:
Print the sum of the array's elements as a single integer.

Sample Input:
6
1 2 3 4 10 11

Sample Output:
31

Explanation:
We print the sum of the array's elements, which is: 1 + 2 + 3 + 4 + 10 + 11 = 31 */

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
