/*You have been given two sorted integer arrays of size m and n. Design an algorithm and
implement it using a program to find list of elements which are common to both. (Time
Complexity = O(m+n))*/
#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter value of m,n :";
    cin>>m>>n;
    int a[m],b[n];
    cout<<" Enter element of array 1:";
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
        int i=0,j=0;
    while(i<m && j < n)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i] < b[j])
        {
            i++;
        }
        else
            j++;
    }
    return 0;
}
