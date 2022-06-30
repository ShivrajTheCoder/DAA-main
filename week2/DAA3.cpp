/*
Given an array of non negative integers, design an algorithm and a program to count the number
of pairs of integers such that their difference is equal to a given key, K.

Input format: The first line contains number of test cases, T. For each test case, there will be three
input lines. First line contains n (the size of array). Second line contains space-separated integers
describing array. Third line contains the key element.

Output format: The output will have T number of lines. For each test case T, output will be the total
count i.e. number of times such pair exists.
*/

#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    int diff_count(int arr[], int n, int key)
    {
        int c = 0;
        for(int i = 0;i<n;i++)
            for(int j=0;j<n;j++)
                if(arr[i]-arr[j] == key)
                    c++;
        return c;
    }
    void show(int c)
    {
        cout<<c<<endl;
    }
};

int main()
{
    int T;
    cout << "Enter the number of test cases : ";
    cin >> T;
    while (T-- > 0)
    {
        int n, num, key;

        cout << "Enter the number of elements : ";
        cin >> n;

        int arr[n];

        cout<<"Enter the numbers : "<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        cout<<"Enter the key : ";
        cin>>key;
        solution s1;

        int count = s1.diff_count(arr,n,key);
        s1.show(count);
    }
}