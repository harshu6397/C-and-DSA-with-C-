/*
Coder : Harsh Kumar
Pattern 01:
for n = 4
A A A A 
B B B B 
C C C C 
D D D D
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;
    // char count = 65;
    int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << count << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     count++;
    //     i++;
    // }

    // Another Approach
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}