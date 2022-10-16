/*
Coder : Harsh Kumar
Pattern 16:
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
        while(j<=i){
            cout << "*";
            j++;
        }
        i--;
        cout << endl;
    }
    return 0;
}