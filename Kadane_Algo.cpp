#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define fi for(int i=0;i<n;i++)
#define fj for(int j=0;j<n;j++)

int kadane(int arr[], int n)
{

    int max1 = 0;
 
    // it will store the maximum sum of subarray ending at the current position
    int max_end = 0;
 
    fi{
        max_end = max_end + arr[i];

        max_end = max(max_end, 0);
 
        max1 = max(max1, max_end);
    }
 
    return max1;
}

int main() {

	int n;
	cin>>n;
    int arr[n];
	fi{
		cin>>arr[i];
	}
		
	cout<<kadane(arr, n)<<endl;

	return 0;
}