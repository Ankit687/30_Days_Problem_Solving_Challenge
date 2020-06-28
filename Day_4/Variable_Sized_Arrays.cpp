#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n, q;
    cin >> n >> q;
    
    long** a = new long*[n];

    long size;

    for (auto i = 0; i < n; i++) {       
        cin >> size;

        a[i] = new long[size];

        for(long j = 0; j < size; j++)
        {
            cin >> a[i][j];
        }
    }

    while(q--) {
        long arrayNumber, arrayIndex;
        cin >> arrayNumber >> arrayIndex;

        cout << a[arrayNumber][arrayIndex] << endl;
    }


    return 0;
}
