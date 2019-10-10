#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout << "ENTER 5 DIGIT NO: " ;
    int a ; cin>> a ;
    int b=a/10000 ; int l=b ;

    int c= (a)%10000 ; int m= c/1000 ;

    int f= (c)%1000; int x=f/100 ;

    int r=(f)%100 ; int x2 =r/10 ;

    int lo=(r)%10 ;

    int sum = l+m+x+x2+lo ;
    cout << endl ;
    if(l==lo && m==x2)
    {
        cout << "palindrome" ;
    }
    else
    {
        cout<< "ghanta" ;
    }
}
