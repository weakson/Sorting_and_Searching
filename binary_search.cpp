#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, target;
    cin >> n >> target;
    int arr[100];
    
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort (arr, arr + n);

    int l = 0, r = n;

    while (l < r){
        int mid = (l + r) / 2;
        if (arr[mid] > target){
            r = mid;
        }
        else if (arr[mid] < target){
            l = mid + 1;
        }
        else{
            l = mid;
            break;
        }
    }

    if (arr[l] != target) cout << "Not found\n";
    else cout << target << " is inside the array\n";
}
