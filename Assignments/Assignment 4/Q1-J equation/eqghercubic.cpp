#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a1,b1,c1,a2,b2,c2,a,b,c ;
    cout << "EQUATION SOLVER" << endl << endl ;
    cout << "1. Linear Equation (anX + bnY + c)" << endl ;
    cout << "2. Quadratic Equation (aX^2 + bX + c=0)" << endl << endl ;
    cout << "please enter your choice: "   ;
    float choice ; cin >> choice ;
    if(choice==1)
    {

        cout <<endl << "Linear Equation" <<endl ;
        cout << "enter a1: " ; cin >> a1 ;
        cout << "enter b1: " ; cin>> b1 ;
        cout << "enter c1: " ; cin >> c1 ;
        cout << "enter a2: " ; cin >> a2 ;
        cout << "enter b2: " ; cin>> b2 ;
        cout << "enter c2: " ; cin>> c2 ;
        float x=((b2*c1) -(b1*c2))/((b2*a1)-(b1*a2)) ;
        float y= ((a1*c2) -(a2*c1))/((b2*a1)-(b1*a2)) ;
        float cond= ((b2*a1)-(b1*a2)) ;
        if(cond==0)
        {
            cout <<endl << "solution not exist" ;
        }
        else
        {


        cout <<endl <<  "X = " << x << endl << "Y = " << y << endl ;
        }
    }
    else if(choice==2)
    {
        cout <<endl << "quadratic equation" << endl <<endl ;
        cout << "enter a: " ; cin>> a;
        cout << "enter b: " ; cin>> b ;
        cout << "enter c: " ; cin>> c;
        float m= (pow(b,2))-(4*a*c) ;
        float x1=(-b) +(pow(m,0.5))/(2*a); float x2=(-b) -(pow(m,0.5))/(2*a) ;
        cout << a << endl << b<< endl << c << endl;
        if (a==0)
        {
            cout << "solution doesnt exist" ;
        }
        else if(m<0)
        {
            cout << "solution dosent exist" ;
        }
        else
        {
            cout << "x1 = "; cout<< x1 << endl ;
            cout << "x2 = " ; cout << x2 << endl ;
        }
    }
        else
        {
            cout << "choice can only be 1 or 2" ;
        }
        return 0;

    }


