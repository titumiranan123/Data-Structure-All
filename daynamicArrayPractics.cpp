#include <bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *arr;
    int cap;
    int sz;
    void increase_size()
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
            increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    void Print_info()
    {
        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    void pop_back()
    {
        sz = sz - 1;
    }
    void erase(int pos)
    {
        if (pos >= sz)
        {
            cout << "Position doesnot Exist";
        }
        for (int i = pos; i < sz; i++)
        {
            arr[i] = arr[i + 1];
        }
        sz--;
    }
    void insert(int pos, int x)
    {
        if (sz == cap)
        {
            increase_size();
        }
        for (int i = sz - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
};
int main()
{
    Array t;
    t.push_back(12);
    t.push_back(13);
    t.push_back(14);
    t.push_back(15);
    t.push_back(16);
    t.push_back(17);
    t.push_back(18);
    t.Print_info();

    t.pop_back();
    t.Print_info();
    t.erase(3);
    t.Print_info();
    t.insert(3,345);
    t.Print_info();

}