#include<bits/stdc++.h>
using namespace std;
void sort012(int a[], int);

int main()
{
  int t;
  cin >> t;
  
  while(t--)
  {
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n-1; i++)
    {
      cin >> a[i];
    }
    
    sort012(a, n);
    
    for(int i = 0; i < n-1; i++)
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
  return 0;
}

void sort012(int a[], int n)
{
    int tmp, left, mid, right;
    left = mid = 0;
    right = n-1;
    
    while(mid <= right)
    {
        if(a[mid] == 0)
        {
            tmp = a[mid];
            a[mid] = a[left];
            a[left] = tmp;
            mid++;
            left++;
        }
        else if(a[mid] == 2)
        {
            tmp = a[mid];
            a[mid] = a[right];
            a[right] = tmp;
            right--;
        }
        else
        {
            mid++;
        }
    }
}
