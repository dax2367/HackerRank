#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    // your code goes here
    if (n>9)
        cout<<"Greater than 9";
    else
      switch (n)
		{
          case 9:
            cout<<"nine";
            break;
          case 8:
            cout<<"eight";
            break;
          case 7:
            cout<<"seven";
            break;
          case 6:
            cout<<"six";
            break;
          case 5:
            cout<<"five";
            break;
          case 4:
            cout<<"four";
            break;
          case 3:
            cout<<"three";
            break;
          case 2:
            cout<<"two";
            break;
          case 1:
            cout<<"one";
            break;
          default:
            cout<<"The input is less than one";
            break;
        }

		//keep console window open when ran in GUI
	cin.ignore();
	cin.get();
        
    return 0;


}
