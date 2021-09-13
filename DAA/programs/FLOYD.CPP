#include<iostream.h>
#include<conio.h>
#include<Timer.h>

class floyd
{
			int n, c[10][10];
		public: void read();
				void write();
				void dist();
};

int min(int a,int b)
{
	return a<b?a:b;
}
void floyd :: read()
{
	int i,j;
	cout<<"enter number of nodes:";
	cin>>n;
	cout<<"enter the cost matrix:"<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>c[i][j];
}

void floyd ::dist()
{
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
}

void floyd::write()
{
	cout<<"the distance matrix is shown below:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<c[i][j]<<"\t";
		cout<<endl;	
	}
}


void main()
{
	clrscr();
	floyd f;
	Timer t;
	f.read();
	t.start();
	f.dist();
	t.stop();
	f.write();
	cout<<"Time taken is "<<t.time()<<"sec"<<endl;
	getch();
}
