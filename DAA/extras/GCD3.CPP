#include<iostream.h>
#include<conio.h>
#include<Timer.h>
void main()
{
clrscr();
Timer t;
cout<<"enter the two  numbers";
int m,n;
cin>>m>>n;
t.start();
while(m!=n){
if(m<n){
n-=m;
}else{
m-=n;
}
}
t.stop();
cout<<n<<endl<<"Time taken is "<<t.time()<<"sec"<<endl;
getch();
}

