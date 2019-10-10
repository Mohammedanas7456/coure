#include<iostream>
using namespace std;
int main()
{
    float a,b,c ;cout<< "enter no.1(a): "; cin>>a ;cout << "enter no. 2(b): " ; cin >>b ;cout << "enter no. 3(c): "; cin >>c ; cout << endl ;

    if(((a>b) && (a>c)) && (b>c))
    {
        cout << "a is greatest and c is samllest" << endl ;
    }
    else if (((a>b) && (a>c)) && (b<c))
    {
        cout << "a is greatest and b is smallest" << endl ;
    }
    else if(((b>a) && (b>c)) && (a>c))
    {
        cout << "b is greatest and  c is smallest" << endl ;
    }
    else if (((b>a) && (b>c)) && (c>a))
    {
        cout << " b is greatest and a is samllest" << endl ;
    }
    else if(((c>b) && (c>a)) && (a>b))
    {
        cout << " c is biggest and b is smallest"  << endl;
    }
    else if(((c>b) && (c>a)) && (b>a))
    {
        cout << "c is greatest and a is smallest"  << endl ;
    }
    else
    {
        cout<< "2 numbers are same therfore cant determine greatest and smallest "  << endl ;
    }

    return 0;
}
