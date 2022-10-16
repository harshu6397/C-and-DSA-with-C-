/*
Coder : Harsh Kumar
Pattern 01:
for n = 4
A B C D
B C D E
C D E F
D E F G
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
            char ch = 'A'+j+i-2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}