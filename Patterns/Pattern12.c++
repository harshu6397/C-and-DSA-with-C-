/*
Coder : Harsh Kumar
Pattern 01:
for n = 4
A B C D 
E F G H
I J K L
M N O P
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;
    int i = 1;
    char start = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << start << " ";
            j++;
            start++;
        }
        cout << endl;
        i++;
    }
    return 0;
}