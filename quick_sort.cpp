#include<bits/stdc++.h>
using namespace std;
vector<int>quickSort(vector<int>a){
    if(a.size() <= 1){
        return a;
    }
    int pivot = a.size()-1;
    vector<int>b,c;
    for (int i = 0; i <a.size(); i++)
    {
        if(i == pivot){
            continue;
        }
        if(a[i]<= a[pivot]){
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
        
    }
    vector<int>sorted_b = quickSort(b);
    vector<int>sorted_c = quickSort(c);
    vector<int>sorted_a;
    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);
    for (int i = 0; i < sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
    
}
   
int main(){
vector<int>v{5,9,6,8,7,4};
vector<int>c = quickSort(v);
for (int i = 0; i < v.size(); i++)
{
    cout<<c[i]<<"  ";
}

}