#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    float x1,y1 ; cout << "enter point(x1): " ; cin>> x1 ; cout << "enter point(y1): " ; cin>> y1 ;
    float x2,y2 ; cout << "enter point (x2): " ; cin>> x2 ; cout << "enter point (y2): " ; cin>> y2 ;
    float x3 ,y3 ; cout << "enter cordinates of point to find(x3): " ; cin>> x3 ; cout << "point(y3): " ; cin>> y3 ;
    float d= y2-y1 ; float d1= x2-x1 ; float r= pow(d,2) + pow(d1,2) ; float rad= pow(r,0.5) ;
    float d2= y3-y1 ; float d3 = x3-x1 ; float l= pow(d2,2) + pow(d3,2); float point= pow(l,0.5) ;
    float k= point-rad ; cout << rad << endl << point << endl ;






    if(k>0)
    {
        cout << "outside the circle" ;
    }
    else if(k<0)
    {
        cout << "inside circle" ;
    }




    else
    {
        cout << "on circumference" ;
    }
    return 0 ;
}
