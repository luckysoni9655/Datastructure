#include<iostream>
using namespace std;

void buble(int a[],int x)
{
    int  i,j,temp;
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
            }
        }cout<<endl;
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
     
      
 buble(arr,n);
 for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return(0);
}