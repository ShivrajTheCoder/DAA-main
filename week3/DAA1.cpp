#include <iostream>

using namespace std;

void in_sort(int[], int);
void show(int[], int, int, int);

int main()
{
    int T;
    cout << "Enter number of smaple cases : ";
    cin >> T;
    while (T > 0)
    {
        int n;
        cout << "Enter the number of elements : ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        in_sort(arr, n);
        T--;
    }
    return 0;
}

void in_sort(int arr[], int n)
{
    int key, j, comp = 0, shift = 0;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            comp++;
            arr[j + 1] = arr[j];
            j = j - 1;
            shift++;
        }
        arr[j + 1] = key;
        shift++;
    }
    show(arr, n, comp, shift);
}

void show(int arr[], int n, int c, int s)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "comparision = " << c<<endl;
    cout << "shifts = " << s-1<<endl;
}