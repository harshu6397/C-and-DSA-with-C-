/*
Coder : Harsh Kumar
Pattern 01:
for n = 4
1
22
333
4444
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
        while(j<=i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}