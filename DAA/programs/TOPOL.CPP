#include<iostream.h>
#include<conio.h>

class topo
{
    int n,a[10][10],indegree[10];
    public: void read_data();
    void find_indegree();
    void topological_sort();
};
void topo::read_data()
{
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    cout<<"enter the adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
}
void topo::find_indegree()
{
    for(int j=0;j<n;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
            sum=sum+a[i][j];
        indegree[j]=sum;
    }

}
void topo::topological_sort()
{
    int u,v,t[10],s[10];
    find_indegree();
    int top=-1;
    int k=0;
    for(int i=0;i<n;i++)
        if(indegree[i]==0)
        s[++top]=i;
    while(top!=-1)
    {
        u=s[top--];
        t[k++]=u;
        for(v=0;v<n;v++)
        {
            if(a[u][v]==1)
            {
                indegree[v]--;
                if(indegree[v]==0)
                    s[++top]=v;
            }
        }
    }
    cout<<"the topological ordering sequence is"<<endl;
    for(i=0;i<n;i++)
        cout<<t[i]<<" ";
}
void main()
{
 topo t;
 clrscr();
 t.read_data();
 t.topological_sort();
 getch();
}
