/*
linear search
Author: https://github.com/dev-lovedeep
Date: 10 October, 2021
*/

// one of the very basic searching technique
// time complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    //taking the size of array
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];

    //inputing the data
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<":";
        cin>>arr[i];
    }
    //asking for key
    int key;
    cout<<"enter element to find:";
    cin>>key;

    //searching into array
    int pos = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos = i+1;
            break;
        }
    }
    if(pos==-1)
        cout<<"element not found\n";
    else
        cout<<"element found at position:"<<pos<<endl;

    return 0;

}
