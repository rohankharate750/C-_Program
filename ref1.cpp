

#include <iostream>
using namespace std;

int main() 
{  
    int no = 11;
    int &ref = no;
    int &x=no;     

    int *p = &no;
    int *(&q) = p;

    cout<<no<<"\n";//11
    cout<<ref<<"\n";//11

    cout<<&no<<"\n";//100 addresss 
    cout<<&ref<<"\n";//100

    cout<<*p<<"\n";//11  fakt dusar name dile ahe ..
    cout<<*q<<"\n";//11

    return 0; 
}
//11 
//11
//ox16