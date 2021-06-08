#include<iostream.h>
#include<conio.h>

void  main(){
clrscr();
int n,a[1000];
cout<<"enter the number till where prime numbers should be found: ";
cin>>n;

for(int i=2;i<=n;i++){
a[i]=i;
}
for(int k=2;k<=n;k++){
if(a[k]!=0){
int j=k*k;
while(j<=n){
a[j]=0;
j=j+k;
}
}
}
cout<<"Prime numbers are\n";
for(int l=2;l<=n;l++){
	if(a[l]!=0){
cout<<a[l]<<" ";
}
}
   getch();
}
