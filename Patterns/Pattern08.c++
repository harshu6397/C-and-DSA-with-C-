/*
Coder : Harsh Kumar
Pattern 01:
for n = 4
1
2 3
3 4 5 
4 5 6 7
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;
    int i = 1;
    // while(i<=n){
    //     int count = i;
    //     int j = 1;
    //     while(j<=i){
    //         cout << count << " ";
    //         j++;
    //         count++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Another Approach
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << j+i-1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}