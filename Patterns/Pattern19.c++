/*
Coder : Harsh Kumar
Pattern 19:
for n = 4
   *   
  ***
 *****
*******
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
        while(j<=n*2-1){
            if(j <= n-i || j >= n+i){
                cout << " ";
            }
            else{
                cout << i;
            }
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}