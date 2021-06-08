#include<iostream.h>
#include<conio.h>
#include<Timer.h>
#include<stdlib.h>
class gcd
{
public:
	void calc();
	void calcu();
	void run();
};
void gcd::calc()
{
	int m,n,r;
	cout<<"enter any two numbers to find gcd";
	cin>>m>>n;

	while(n!=0){
	 r=m%n;
	m=n;
	n=r;
	}
	cout<<"the gcd is :"<<m;
}
void gcd::calcu()
{
	int m=(rand()%100)+1;
	int n=(rand()%100)+1;
	int r;
	cout<<m<<","<<n;
	while(n!=0){
	 r=m%n;
	m=n;
	n=r;
	}
	cout<<" "<<m<<" ";
}
void gcd::run()
{
	Timer t;
	cout<<"the time required is: ";
	cout<<"\n\n m,n \t\ttime";
	for(int i=1;i<10;i++){
	t.start();
	calcu();
	t.stop();
	cout<<"\t\t\t"<<t.time();
	cout<<"\n";
	}
}



void main()
{
	clrscr();
	gcd a;
	Timer t;
	t.start();
	a.calc();
	t.stop();
	getch();
	a.run();
	getch();
}

