#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
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
    return 0;
}
