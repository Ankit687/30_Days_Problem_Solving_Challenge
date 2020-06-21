#include <iostream>
using namespace std;
#define ll long long

void rotate(ll arr[], ll l, ll r);

int main() {
	ll T;
	cin >> T;
	
	while(T--)
	{
	    ll n, d;
	    cin >> n >> d;
	    
	    ll arr[n];
	    
	    for(ll i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    rotate(arr, 0, d-1);
	    rotate(arr, d, n-1);
	    rotate(arr, 0, n-1);
	    
	    for(ll i = 0; i < n; i++)
	    {
	        cout << arr[i] << " ";    
	    }
	    
	    cout << endl;
	}
	
	return 0;
}

void rotate(ll arr[], ll l, ll r)
{
    while(l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}
