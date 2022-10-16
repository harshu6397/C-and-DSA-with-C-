/*
Coder : Harsh Kumar
Pattern 01:
for n = 4
A 
B B
C C C 
D D D D
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
            char ch = 'A'+i-1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}