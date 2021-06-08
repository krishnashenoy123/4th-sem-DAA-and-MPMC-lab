#include<iostream.h>
#include<conio.h>
#include<Timer.h>
class merge
{
  int low,high;
  public:
  void m_sort(int*,int,int);
  void s_merge(int*,int,int,int);
};
void merge::m_sort(int a[],int low,int high)
{
  if(low<high)
   {
      int mid=(low+high)/2;
      m_sort(a,low,mid);
      m_sort(a,mid+1,high);
      s_merge(a,low,mid,high);
   }
}
void merge::s_merge(int a[],int low,int mid,int high)
{
   int i=low;
   int j=mid+1;
   int k=low;
   int c[100];
   while(i<=mid&&j<=high)
      {
	 if(a[i]<a[j])
	   {
	       c[k]=a[i];
	       i=i+1;
	       k=k+1;
	   }
	 else
	   {
	     c[k]=a[j];
	     j=j+1;
	     k=k+1;
	   }
      }
      while(i<=mid)
	  c[k++]=a[i++];
      while(j<=high)
	  c[k++]=a[j++];
      for(i=low;i<=high;i++)
	  a[i]=c[i];
}
void main()
{
   int *a,n,i;
   Timer t;
   merge m;
   clrscr();
   cout<<"Enter the number of elements"<<endl;
   cin>>n;
   a=new int[n];
   cout<<"Enter the elements"<<endl;
   for(i=0;i<n;i++)
       cin>>a[i];
       t.start();
   m.m_sort(a,0,n-1);
   t.stop();
   cout<<"Sorted elements are"<<endl;
   for(i=0;i<n;i++)
     cout<<a[i]<<endl;
   cout<<"Time taken="<<t.time()<<"seconds"<<endl;
   getch();
}