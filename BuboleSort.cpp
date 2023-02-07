#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int pass = 0; pass < n; pass++)
    {
        int last = n-1-pass;
        bool sorted = false;
        for (int i = 0; i < last; i++)
        {
            if(a[i] > a[i+1]){
                // swap(a[i],a[i+1]);
                int tmp = a[i+1];
                a[i+1]=a[i];
                a[i]=tmp;
            }
        }
        
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}