#include <bits/stdc++.h>
using namespace std;
vector<int>Mergesort(vector<int> a)
{
    // jodi array ar size 1 or 1 er chooto hoi tahole oitai return korbe
    if (a.size() <= 1)
    {
        return a;
    }
    // array ke dui vage vag korar jonno mid poin ber korlam
    int mid = a.size() / 2;
    // duita array declar korlam
    vector<int> b;
    vector<int> c;
    // a array      gulo ke b o c array te vag kore dilam
    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    // fuction ke call korew abar b and c ke dui vage vag korlam
    vector<int> sorted_b = Mergesort(b);
    vector<int> sorted_c = Mergesort(c);
    // sorted array guloke sorted_a te rakhbo
    vector<int> sorted_a;
    // duita index niye nilam jate array gula ke call korte paeri
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
            
        }
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
            
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {

            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}
int main()
{
    vector<int> a ={8, 2 ,9, 10 ,15,5};
    // for (int i = 0; i < 7; i++)
    // {
    //     cin >> a[i];
    // }
    
    vector<int>ans = Mergesort(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}