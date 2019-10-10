
#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int a ; cin>> a ;
    if(a>=65 && a<=90)
    {
        cout << "capital" ;

    }
    else if(a>= 97 && a<= 122)
    {
        cout << "small" ;
    }
    else if(a>=48 && a<= 57)
    {
        cout << "number" ;
    }
        else if(a>127)
        {
            cout<< "ye to ni he apna" ;
        }
        else
        {
            cout << "speial symbol";
        }

return 0;
}
