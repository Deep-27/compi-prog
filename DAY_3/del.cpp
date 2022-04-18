#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[20];
    int n, i, j, temp;
 
    
    cout<<"Enter size of array: ";
    cin>>n;
 
    
    cout<<"Enter elements in array: ";
    for(i=0; i<=n; i++)
    {
        cin>>arr[i];
    }
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"smallest Elements :"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}