#include<bits/stdc++.h>
using namespace std;
vector<int>mergeSort(vector<int>a){
    if(a.size() <= 1){
        return a;
    }
    int mid = a.size()/2;
    vector<int>b,c;
    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sorted_b = mergeSort(b);
    vector<int>sorted_c = mergeSort(c);
    vector<int> sorted_a;
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1]> sorted_c[idx2])
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
    }
    return sorted_a;
    
    
    
}
int main(){
vector<int>v{5,9,6,8,7,4};
vector<int>c = mergeSort(v);
for (int i = 0; i < v.size(); i++)
{
    cout<<c[i]<<"  ";
}

}