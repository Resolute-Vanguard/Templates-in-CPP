//class Template
#include<iostream>
using namespace std;

template <class T>
class Maths
{
    T a,b;
    T input(T a1,T b1)
    {
        a=a1;
        b=b1;
    }
    T operation()
    {
        int n;
        T r;
        cout << "Enter 1 for addition\n2for subtraction\n3 for multiplication\n4 for division\n" ;
        cin >> n;
        switch (n)
        {
        case 1:
                r=a+b;    
                break;
        case 2:
                r=a-b;
                break;
        case 3:
                r=a*b;
                break;
        case 4:
                r=a/b;
                break;
        default:
                cout << "Wrong Input\n";
                break;
        }
        if(n==1||n==2||n==3||n==4)
            result(r);
    }
    T result(T r)
    {
        cout << "Result: " << r << endl;
    }
};

int main()
{
    Maths<float> input(2.6,3.8);
    Maths<float> operation(); 
    return 0;
}