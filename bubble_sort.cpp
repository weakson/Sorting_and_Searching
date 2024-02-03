#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {4, 8, 7, 6, 3};
	int n = 5;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i; j++){
			if (arr[j] > arr[j + 1]){
				swap (arr[j], arr[j + 1]);
			}
		}
	}

	for (auto i : arr) cout << i << ' ';
}


