#include<iostream.h>
#include<conio.h>
#include<Timer.h>
void main()
{
int m,n;
Timer l;
clrscr();
cout<<"Enter two numbers";
cin>>m>>n;
l.start();
int t=m<=n?m:n;
int r=m%t;
int s=n%t;
while(r!=0||s!=0){
t--;
r=m%t;
s=n%t;
}
l.stop();
cout<<t<<endl<<"Time taken is "<<l.time()<<"sec"<<endl;
getch();
}