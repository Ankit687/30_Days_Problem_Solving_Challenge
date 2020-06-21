#include <iostream>
using namespace std;

void reverse(int arr[], int n);

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    reverse(arr, n);
	    
	    for(int i = 0; i < n; i++)
	    {
	        cout << arr[i] << " ";
	    }
	    
	    cout << endl;
	}
	return 0;
}

void reverse(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    
    while(left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
