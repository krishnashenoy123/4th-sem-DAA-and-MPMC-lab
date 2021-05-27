#include<iostream.h>
#include<conio.h>
#include<time.h>

class linear
{
    int loc;
    public:
    void ln(int*, int, int);
};

class binary
{
    int loc, low, mid, high;
    public:
    void bs(int*, int, int);
};

void linear :: ln(int a[], int n, int key)
{
    loc = -1;
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            loc = i;
            break;
        }
    }
    if(loc>=0)
        cout << "Element found at position " << loc+1 << endl;
    else
        cout << "Element not found" << endl;
}

void binary :: bs(int a[], int n, int key)
{
    low = 0;
    high = n-1;
    loc = -1;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(a[mid] == key)
        {
            loc = mid;
            break;
        }
        if(a[mid] > key)
            high = mid - 1;
        else
            low = mid+1;
    }
    if(loc >= 0)
        cout << "Element found at position " << loc+1 << endl;
    else
        cout << "Element not found" << endl;
}

void main()
{
    int *a, n, key, choice;
    clock_t start, stop;
    clrscr();
    cout << "1. Linear Search" << endl << "2. Binary Search" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice)
    {
        case 1: linear l;
                cout << "Enter the number of elements: ";
                cin >> n;
                a = new int[n];
                cout << "Enter the elements:" << endl;
                for(int i=0; i<n; i++)
                    cin >> a[i];
                cout<< "Enter the element to be searched: ";
                cin >> key;
                
                start = clock();
                l.ln(a, n, key);
                stop = clock();
                
                cout << "Time taken = " << (stop-start)/CLK_TCK << " Seconds" << endl;
                cout << "Space Consumed = " << sizeof(n)+n*sizeof(a)+sizeof(i)+sizeof(key)+sizeof(l) << " bytes" << endl;
                break;
        
        case 2: binary b;
                cout << "Enter the number of elements: ";
                cin >> n;
                a = new int[n];
                cout << "Enter the elements:" << endl;
		for(i=0; i<n; i++)
                    cin >> a[i];
                cout<< "Enter the element to be searched: ";
                cin >> key;
                
                start = clock();
                b.bs(a, n, key);
                stop = clock();

                cout << "Time taken = " << (stop-start)/CLK_TCK << " Seconds" << endl;
                cout << "Space Consumed = " << sizeof(n)+n*sizeof(a)+sizeof(i)+sizeof(key)+sizeof(b) << " bytes" << endl;
                break;
        
        default: cout << "Invalid Choice" << endl;
    }
    getch();
}
