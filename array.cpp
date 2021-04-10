#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    
    cin >> n;
    n -= 1;
    int ar[n];

    for(int cnt = 0; cnt <= n; cnt++){
        cin >> ar[cnt];
    }

    int arrSize = (sizeof(ar)/sizeof(*ar));
    int revert_arr[n];
    for (int cnt =0; cnt <= arrSize; cnt++){
        revert_arr[arrSize-cnt] = ar[cnt];
    }

    for (int cnt =0; cnt <= arrSize; cnt++){
        printf("%d ",revert_arr[cnt]);
    }
    
    return 0;
}
