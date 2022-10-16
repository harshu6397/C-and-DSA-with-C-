/*
Coder : Harsh Kumar
Pattern 16:
for n = 4
   *
  **
 ***
****
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
            if(j < n-i+1){
                cout << " ";
            }else{
                cout << "*";
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}