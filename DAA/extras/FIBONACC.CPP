#include<iostream.h>
#include<conio.h>
#include<Timer.h>
class f{
public:
void fib(int n);
void timec();
};
void f::fib(int n)
{
int k=0,l=1;
int t;
	     cout<<k<<" ";
t=k+l;
while(t<n){
cout<<t<<" ";
t=k+l;
k=l;
l=t;

}

}
void f::timec(){
Timer t;
for(int i=10;i<500;i+=10){
t.start();
fib(i);
t.stop();
cout<<"\n time required  is "<<t.time();
}
	    }
void main(){
int n;
clrscr();
cout<<"Enter the limit: ";
cin>>n;
Timer t;
f k;
t.start();
k.fib(n);
t.stop();
cout<<"\ntime: "<<t.time()<<" seconds";

getch();
}