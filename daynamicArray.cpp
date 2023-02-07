#include <bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *arr;
    int cap;
    int sz;
    void Increase_size()
    {
        cap = cap * 2;
        int *tmp = new int[cap];
        for (int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    void push_back(int x)
    {
        if (cap == sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    void print_info()
    {
        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    int getSize()
    {
        return sz;
    }
    int getElement(int idx)
    {
        if (idx >= sz)
        {
            cout << 'Error' << idx;
            return -1;
        }
        return arr[idx];
    }
    int insert(int pos, int x){
        if (cap == sz)
        {
            Increase_size();
        }
        for (int i = sz-1; i >= pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    void deletion(int pos){
        if(pos>=sz){
            cout<<"Position doesnot Exist";
        }
        for (int i = pos+1; i < sz; i++)
        {
            arr[i-1] = arr[i];
        }
        
        sz--;
    }
    void pop(){
        if(sz==0){
            cout<<"current size 0";
            return;
        }
        arr[sz-1]=0;

        sz = sz -1;
    }
};
int main()
{
    Array st;
    st.push_back(12);
    st.push_back(13);
    st.push_back(14);
    st.push_back(15);
    st.print_info();
    cout<<st.getElement(3)<<"\n";
    cout<<st.getSize()<<"\n";
    st.insert(2,258);
    st.print_info();
    st.deletion(2);
    st.print_info();
    st.pop();
    st.print_info();


}

/*
space memory complexity 

*/