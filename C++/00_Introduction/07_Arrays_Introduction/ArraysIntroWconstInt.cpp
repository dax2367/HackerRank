#include <vector>
#include <iostream>

using namespace std;


int main() {
    int N;
	cin>> N;
	vector<int> array(N);
	for (int i = 0; i < N; i++) {
		cin>> array[i];
	}
	for (int i = N-1; i >=0; i--) {
		cout << array[i] << " ";
	}  
    return 0;
}