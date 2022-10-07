//insertion of element in array 
#include<iostream>
using namespace std;
int main()
{
    int n,i,p,e;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[n];
        for(i=0;i<n;i++)
        {
          cin>>a[i];
        }
        cout<<"array before insertion"<<endl;
        for(i=0;i<n;i++)
{
    cout<<a[i];
}
cout<<"\nenter the position"<<endl;
cin>>p;
cout<<"enter the element"<<endl;
cin>>e;
if(p>n)
{
    cout<<"insertion not succesful";
}
    else
    {
      for(i=n;i>=p;i--)
    {
      a[i+1]=a[i];
    }
    a[p]=e;
    cout<<"insertion succesful"<<endl;
 for(i=0;i<=n;i++)
{
    cout<<a[i];
}
}
n++;
 return(0);
}

/*****-----output------*****
enter size of array
4
1
3
4
5
array before insertion
1345
enter the position
1
enter the element
2
insertion succesful
12345  */