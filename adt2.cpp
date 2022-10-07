
//abstract data structure
#include<iostream>
using namespace std;
class red
{ 
    public:
    int total_size;
        int total_use;
         int *ptr;
    red()
    {
        int total_size;
        int total_use;
        int *ptr;
    }
void create(red *a,int tsize,int tuse);
void set(red *a);
void show(red *a);
};
void red:: create(red *a,int tsize,int tuse)
{
a->total_size=tsize;
a->total_use=tuse;
a->ptr=new int[tsize]; 
}
void red::set(red *a)
{
int n;
cout<<"enter the value";
for(int i=0;i<a->total_use;i++)
{
    cin>>n;
    (a->ptr)[i]=n;
}
}
void red::show(red *a)
{
     for(int i=0;i<a->total_use;i++)
     {
        cout<< (a->ptr)[i]<<" ";
     }
}

int main()
{
 red s;
 s.create(&s,10,5);
 s.set(&s);
 s.show(&s);
    return (0);
}

/*
****----output-----****
enter the value
1
2
3
4
5
1 2 3 4 5 
*/