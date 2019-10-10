#include<iostream>
using namespace std;
int main()
{ string health;cout<< "Enter Health(excellent/poor): " ;   cin>> health;
int age ; cout << "Enter Age: " ; cin>> age;
char locality ; cout << "ENter locality(c=city/v=village): " ; cin>> locality;
char gender ; cout << "enter gender (m=male, f=female): " ; cin >> gender ;
if ((health== "excellent") && (age>=25 && age<=35) && (locality=='c') && (gender== 'm') )
{
    cout <<endl << "premium= 4000" << endl << "policy amount= 200,000"<< endl ;
}
else if((health== "excellent") && (age>=25 && age<=35) && (locality=='c') && (gender== 'f') )
{
    cout <<endl << "premium=3000" << endl << "policy amount= 100,000" << endl ;
}
else if ((health== "poor") && (age>=35 && age<=50) && (locality=='v') && (gender== 'm') )
{
    cout << endl << "premium=6000" << endl << "policy amount=20,000" << endl ;
}
else
{
   cout << "insurance not granted" ;
}

return 0;
}



