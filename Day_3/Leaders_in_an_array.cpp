#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n, size;
	    
	    cin >> n;
	    
	    int arr[n];
	    stack <int> s;
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int max = arr[n - 1];
	    s.push(max);
	    
	    for(int i = n-2; i >= 0; i--)
	    {
	        if(max <= arr[i]) 
	        {
	            max = arr[i];
	            s.push(max);
	        }
	        
	    }
        
        size = s.size();
        
        while(size--)
        {
            cout << s.top() << " ";
            s.pop();
        }
        
        cout << endl;
	}
	
	return 0;
}
