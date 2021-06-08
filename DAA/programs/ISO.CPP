#include<iostream.h>
#include<conio.h>
#include<Timer.h>
class is{
	public:
		void sort(int[],int);
};
void is::sort(int a[],int n )
{
	for(int i=0;i<n;i++){
	int v=a[i];
	int j=i-1;
	while(j>=0&&a[j]>v){
	a[j+1]=a[j];
	j=j-1;
	a[j+1]=v;
	}
	}
}

void main()
{
	clrscr();
	Timer t;
	is s;
	int n,a[100];
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	t.start();
	s.sort(a,n);
	t.stop();
	for(int j=0;j<n;j++){
       cout<<a[j]<<endl;
}	cout<<"time taken is "<<t.time()<<"sec";
	getch();
}
