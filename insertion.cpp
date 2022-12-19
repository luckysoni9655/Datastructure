#include<iostream>
using namespace std;

void  insert(int a[],int x)
{
    int i,j,temp;
for(i=1;i<x;i++)
{
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=temp;
}
}

int  main()
{
    int i,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     insert(arr,n);
 for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return(0);
}