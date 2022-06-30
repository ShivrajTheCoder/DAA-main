/*
Given a sorted array of positive integers, design an algorithm and implement it using a program
to find three indices i, j, k such that arr[i] + arr[j] = arr[k].

Input format: The first line contains number of test cases, T. For each test case, there will be two
input lines. First line contains n (the size of array). Second line contains space-separated integers
describing array.

Output: The output will have T number of lines. For each test case T, print the value of i, j and k, if
found else print “No sequence found”.
*/

#include <iostream>
using namespace std;

void check_seq(int arr[], int n)
{
    int f = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < n - 1; j++)
        {
            sum = arr[i] + arr[j];
            for (int k = j + 1; k < n; k++)
            {
                if (sum == arr[k])
                {
                    cout << i + 1 << "," << j + 1 << "," << k + 1 << "," << endl;
                    f = 1;
                }
            }
        }
    }
    if (f == 0)
        cout << "No sequence found" << endl;
}

int main()
{
    int T;
    cout << "Enter number of test cases : ";
    cin >> T;
    while (T-- > 0)
    {
        int n, num;
        cout << "Enter the number of elements : ";
        cin >> n;
        int arr[n];
        cout << "Enter the numbers : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        check_seq(arr, n);

        /*
        for (int i = 0; i < vect.size(); i++)
        {
            for (int j = 0; j < vect[i].size(); j++)
            {
                cout << vect[i][j] << " ";
            }
            cout << endl;
        }
        */
    }
}