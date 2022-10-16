/*
Coder : Harsh Kumar
Pattern 18:
for n = 4
****
 ***
  **
   *
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;
    int i = n;
    while(i>=1){
        int j = 1;
        while(j<=n){
            if(j <= n-i){
                cout << " ";
            }else{
                cout << "*";
            }
            j++;
        }
        i--;
        cout << endl;
    }
    return 0;
}