#include<iostream.h>
#include<conio.h>
#include<timer.h>

class selection
{
    int pos,temp;
    public: void sel(int *,int);
};

void selection::sel(int a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[pos])
            pos=j;
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;

    }
}
void main()
{
    int *a,i,n,key;
    clrscr();
    Timer T;
    selection s;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    a=new int[n];
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    T.start();
    s.sel(a,n);
    T.stop();
    cout<<"sorted elements are"<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    cout<<"Time taken="<<T.time()<<" Seconds"<<endl;
    cout<<"Space consumed="<<sizeof(n)+n*sizeof(a)+sizeof(i)+sizeof(s)<<"bytes";
    getch();
}
