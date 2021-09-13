#include <conio.h>
#include <iostream.h>
#include<timer.h>
class heap
{
  public: void sort(int*,int);
	    void heapify(int*,int);
	    void adjust(int*,int,int);
};

void heap::sort(int a[],int n)
 {
    int i,temp;
    heapify(a,n);
    for(i=n-1;i>0;i--)
    {
	temp=a[0];
	a[0]=a[i];
	a[i]=temp;
	adjust(a,i,0);
    }
 }
 void heap::heapify(int a[],int n)
 {
    int i,j,k,p;
    for(i=1;i<n;i++)
    {
	k=a[i];
	j=i;
	p=(j-1)/2;
	while(j>0&&k>a[p])
	{
	    a[j]=a[p];
	    j=p;
	    p=(j-1)/2;
	}
	a[j]=k;
    }
 }


void heap::adjust(int a[],int n,int p)
{
    int i,item;
  item=a[p];
  i=2*p+1;
  while(i<n)
  {
	if(i+1<n)
	    if(a[i]<a[i+1])
		i++;
	if(item<a[i])
	{
	    a[p]=a[i];
	    p=i;
	    i=2*p+1;
	}
	else
	    break;
  }
  a[p]=item;
}

void main()
{
  int *a,n,i;
    heap h;
    Timer t;
    clrscr();
    cout<<"enter the number of elements:";
    cin>>n;
    a=new int[n];
    cout<<"enter elements:"<<endl;
    for(i=0;i<n;i++)
	cin>>a[i];
    t.start();
    h.sort(a,n);
    t.stop();
    cout<<"the sorted elements are"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    cout<<"time taken="<<t.time()<<"seconds"<<endl;
    cout<<"space consumed="<<sizeof(n)+n*sizeof(i)+sizeof(h)<<"bytes"<<endl;
    getch();
    }