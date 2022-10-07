//element delete from array
#include<iostream>
using namespace std;
int main()
{
    int n,i,p;
cout<<"enter the size"<<endl;
cin>>n;
int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<"array before deletion"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
cout<<"\nente rthe position that have to delete "<<endl;
cin>>p;
//1.
    for(i=p;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
// we can use neither 1 or 2 logic for deletion 
//2.
// for(i=0;i<=p;i++)
// {
//     a[p]=a[i+1];}
    for(i=0;i<n-1;i++)
    {
        cout<<a[i];
    }
return(0);
} 
/* ****----output-----****
enter the size
3
1
2
3
array before deletion
123
ente rthe position that have to delete
2
12
*/