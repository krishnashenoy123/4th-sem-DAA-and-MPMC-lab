#include<iostream.h>
#include<conio.h>
#include<Timer.h>
class merge
{
public:
    int low, high;
    void mergesort(int*, int, int);
    void sort(int*, int, int, int);
};
void merge::mergesort(int a[], int low, int high)
{
    if(low<high){
        int mid = (low+high)/2;
   mergesort(a, low, mid);
   mergesort(a, mid+1, high);
   sort(a, low, mid, high);
    }
}
void merge::sort(int a[], int low, int mid, int high)
{
    int i=low, k=low, j=mid+1, c[100];
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j]){
            c[k] = a[i];
            i++; k++;
        }
        else{
            c[k] = a[j];
            j++; k++;
        }
    }
    while(i<=mid)
        c[k++]=a[i++];
    while(j<=high)
        c[k++]=a[j++];
    for(i=low; i<=high; i++)
      a[i] = c[i];
}
void main()
{
    Timer t;
    merge m;
    clrscr();
    cout << "Enter the number of elements: ";
    int n,i; cin >> n;
    int* a = new int[n];
    cout << "Enter the numbers:\n";
    for(i=0; i<n; i++)
        cin >> a[i];
    t.start();
    m.mergesort(a, 0, n-1);
    t.stop();
    cout << "The array after sorting is:\n";
    for(i=0; i<n; i++)
        cout << a[i] << ' ';
    cout <<"\nThe time taken is " << t.time() << " seconds";
    getch();
}