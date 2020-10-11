#include <bits/stdc++.h>
using namespace std;

int binarySearch(int num[], int l, int r, int x){
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (num[mid] == x)
			return mid;

		if (num[mid] > x)
			return binarySearch(num, l, mid - 1, x);

		return binarySearch(num, mid + 1, r, x);
	}

	return -1;
}

int main(){
    int n;
    cin>>n;
	int num[n];
    for(int i=0;i<n;i++)
        cin>>num[i];
	int x;
	int ans = binarySearch(num, 0, n - 1, x);
	if(ans == -1)
        cout << "Element is not present in array";
	else
        cout << "Element is present at index " << ans;
	return 0;
}
