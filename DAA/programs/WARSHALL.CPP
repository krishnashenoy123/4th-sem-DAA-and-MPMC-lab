#include<iostream.h>
#include<Timer.h>
#include<conio.h>

class warshall
{
			int n, a[10][10];
		public: void read();
				void write();
				void path();
};

void warshall :: read()
{
	int i,j;
	cout<<"enter number of nodes:";
	cin>>n;
	cout<<"enter adjacency matrix:"<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
}

void warshall ::path()
{
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				if(a[i][k]==1&&a[k][j]==1)
					a[i][j]=1;
}

void warshall::write()
{
	cout<<"the path matrix is shown below:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;	
	}
}


int main()
{
	clrscr();
	Timer t;
	warshall w;
	w.read();
	t.start();
	w.path();
	t.stop();
	w.write();
	cout<<"Time taken is "<<t.time()<<"sec"<<endl;
	return 0;
}
