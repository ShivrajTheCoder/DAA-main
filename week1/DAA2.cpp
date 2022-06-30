/* Given an already sorted array of positive integers, design an algorithm and implement it using a
   program to find whether given key element is present in the array or not. Also, find total number
   of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input) */

// Recursion and iteration
#include <iostream>
using namespace std;
void binary_search(int[], int,int, int);

int main()
{
    int n, key;

    cout << "enter the number of element : ";
    cin >> n;
    int arr[n];

    cout << "Enter the element : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the key element : ";
    cin >> key;

    binary_search(arr,0, n-1,key);
}

void binary_search(int arr[], int l, int r, int key)
{
    int f = 0,c=0;
    while (l <= r) 
    {
        c++;
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == key)
        {
            cout<<"Present at "<<mid+1<<endl;
            f=1;
        }
        if (arr[mid] < key)
            l = mid + 1;
 
        else
            r = mid - 1;
    }
    if(f==0)
        cout<<"Not present"<<endl;
    cout<<"Total number od comparision : "<<c<<endl;
}
