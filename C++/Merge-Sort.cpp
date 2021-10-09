/* 
Merge Sort in C++
Author: Tanya Gupta
Date Modified: 9th October 2021
*/

#include <bits/stdc++.h>
using namespace std;

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Merge(int *a, int mid, int low, int high)
{
    int i = low, j = mid + 1, k = low, b[50];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }

    if (i > mid)
    {

        while (j <= high)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, mid, low, high);
    }
}

int main()
{
    int n, a[50];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    MergeSort(a, 0, n - 1);

    cout << "The sorted array is: ";
    display(a, n);

    return 0;
}