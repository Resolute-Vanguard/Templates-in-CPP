//function template to perform sorting of n items of numerical data-type
#include<iostream>
using namespace std;
template <class T>
void sort(T a[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
    for(int i=0;i<n;i++)
        cout << a[i] << endl; 
}
int main()
{
    int a[5]={5,3,25,21,1};
    sort(a,sizeof(a)/sizeof(a[0]));
    cout << "Sorted array: " << endl;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
        cout << a[i] << endl;
    return 0;
}