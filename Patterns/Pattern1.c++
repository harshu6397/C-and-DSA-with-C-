/*
Coder : Harsh Kumar
Pattern 01:
for n = 4
****
****
****
****
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}