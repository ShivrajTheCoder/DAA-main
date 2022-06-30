/*
   Given a sorted array of positive integers containing few duplicate elements, design an algorithm
   and implement it using a program to find whether the given key element is present in the array or
   not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))

   Input format: The first line contains number of test cases, T. For each test case, there will be three
   input lines. First line contains n (the size of array). Second line contains space-separated integers
   describing array. Third line contains the key element that need to be searched in the array.
   Output format: The output will have T number of lines. For each test case T, output will be the key
   element and its number of copies in the array if the key element is present in the array otherwise
   print “ Key not present”.
*/
#include <iostream>
using namespace std;

int check(int[], int, int, int);
int c = 0;
int main()
{
    int op;
    cout << "Enter the total number of test cases : ";
    cin >> op;
    while (op > 0)
    {
        c = 0;
        int n, key, l = 0, h;
        cout << "Enter the number of elements : ";
        cin >> n;
        h = n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter the key element : ";
        cin >> key;
        check(arr, key, l, h);
        op--;
        cout << key << " - " << c << endl;
    }
}
int check(int arr[], int key, int l, int h)
{
    int mid = l + (h - l) / 2;
    if (arr[mid] == key && l <= h)
    {
        c++;
    }
    if (l < h)
    {
        check(arr, key, mid + 1, h);
        check(arr, key, l, mid - 1);
    }
}