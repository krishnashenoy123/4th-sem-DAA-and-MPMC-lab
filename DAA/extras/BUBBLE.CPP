#include<iostream.h>
#include<conio.h>
#include<Timer.h>


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

    for (j = 0; j < n-i-1; j++)
	if (arr[j] > arr[j+1])
	    swap(&arr[j], &arr[j+1]);
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
	cout << arr[i] << " ";
    cout << endl;
}


void main()
{
    clrscr();
    int n,*arr;
    Timer t;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
	    t.start();
    bubbleSort(arr, n);
    t.stop();
    cout<<"Sorted array: \n"<<endl;
    printArray(arr, n);
    cout<<"Time taken :"<<t.time()<<"sec"<<endl;
    getch();
}
