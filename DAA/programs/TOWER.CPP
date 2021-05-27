#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<timer.h>
#include<iostream.h>
//using namespace std;

class TOH
{
    public:
        int read();
        void move_disk(char src, char aux, char dest, int n);
        void running_time();
        void move_disk_rt(char src, char aux, char dest, int n);
};

int TOH :: read()
{
    int n;
    cout << "Enter the number of disk: ";
    cin >> n;
    cout << endl;
    return (n);
}

void TOH :: move_disk(char src, char aux, char dest, int n)
{
    if(n==1)
    {
        cout << "Move Disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    else
    {
        move_disk(src, dest, aux, n-1);
        cout << "Move Disk " << n << " from " << src << " to " << dest << endl;
        move_disk(aux, src, dest, n-1);
    }
}

void TOH :: move_disk_rt(char src, char aux, char dest, int n)
{
    if(n==1)
        return;
    else
        move_disk_rt(src, dest, aux, n-1);
        move_disk_rt(aux, src, dest, n-1);
}

void TOH :: running_time()
{
    int disk;
    Timer T;
    clrscr();
    cout << "\n\nOrder of Growth of tower of Hanoi ";
    cout << "\n\nNumber of Disk\t\tRunning time";
    for(disk=1; disk<=10; disk++)
    {
        T.start();
        move_disk_rt('S', 'T', 'D', disk);
        T.stop();
        cout << "\n\t" << disk << "\t\t" << T.time() << " Seconds";
    }
}

void main()
{
    int disk;
    Timer T;
    TOH hanoi;
    clrscr();
    disk = hanoi.read();
    T.start();
    hanoi.move_disk('S', 'T', 'D', disk);
    T.stop();
    cout << "\nThe time taken is " << T.time() << " Seconds";
    getch();
    hanoi.running_time();
    getch();
    exit(0);
}