
#include<iostream>

using namespace std;

  
   class Demo 
   {
      public:
          int i = ;
            const int j  ;

           const int k;
           //parametriesed constructor  
           Demo (int a, int b, int c): J(b),k(c) 
           { 

            i = a;
           // j = b;
           // k = c;

           }


   };



int main () 
{
    Demo obj (11,21,51); 
      cout<<"Value of i :"<<obj.i<<.i<<"\n"; 
      cout<<"Value of j : "<<obj.j<<"\n";
      cout<<"Value of k : "<<obj.k <<"\n";

      obj.i++;
      obj.j++;
      obj.k++;

    return 0;
}
