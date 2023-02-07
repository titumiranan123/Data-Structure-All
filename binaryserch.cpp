#include <bits/stdc++.h>
using namespace std;
int main()
{
    //binary serch er jonno arry obossoi sorted horte hobe
    int n, k;
    cin >> n >> k;
    vector<int> a(n); // memory complexity o(n)
    //time complexity  o(log n)
    /* 
    0 -> n = n/2^0
    1-> n/2 = n/2^1
    2-> (n/2)/2 = n/n^2
    3 ........
    k -> = n/n^k
    now n/n^k = 1
    n = 2^k //logarithomic rule use kore
    therefore o(logn)
    
    */
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0;
    int e = n - 1;
    for (int j = s; j < e; j++)
    {

        int mid = (s + e) / 2;
        cout<< s << " " << e<<" "<<'\n';
        if (a[mid] == k)
        {
            cout << mid;
            break;
        }
        else if (a[mid] < k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    sort(a.begin(),a.end()); // time complexity  O(Nlog(N))

    // int s = 0;
    // int e = n - 1;
    // while (s <= e)
    // {
    //     int mid = (s + e) / 2;
    //     if (a[mid] == k)
    //     {
    //         cout << mid;
    //         break;
    //     }
    //     else if (a[mid] < k)
    //     {
    //         e = mid - 1;
    //     }
    //     else
    //     {
    //         s = mid + 1;
    //     }
    // }
}