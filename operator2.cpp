
#include<iostream>
using namespace std;



 
    class Demo 
    {
        public:
          int i,j;
          Demo(int a = 10, int b = 20)
          {
             i = a ;
             j = b;


          }
          
    };
     
Demo operator + (Demo op1,Demo op2)
{
    cout<<"Inside opearator overloaded funtion \n";
    return Demo (op1.i+op2.i,op1.j+op2.j);

} 
int main () 
{
    Demo obj1(11,21);   
    Demo obj2(5,6);
    Demo obj3(0,0);

    obj = obj1 + obj2;   //obj1 user define class che member ahe 
    
 cout<<obj.i<<"\n";
 cout<<obj.j<<"\n";


 return 0;

}