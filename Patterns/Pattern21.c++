/*
Coder : Harsh Kumar
Pattern 19:
for n = 4
*******
 *****
  ***
   *
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            if(j <= n-i){
                cout << " ";
            }
            j++;
        }

        while(j<=i){
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}