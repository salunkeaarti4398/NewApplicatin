#include<iostream>
using namespace std;
class overloading
{
 public:
   int Add(int a, int b)
   {

      cout<<"Addition of 2 Integers\n";

    }
   float Add(float a, float b)
   {

      cout<<"Addition of floats\n";

    }
   double Add(double a, double b)
   
   {

      cout<<"Addition of doubles\n";

    }
   int Add(int a, int b, int c)
   {

      cout<<"Addition of 3 Integers\n";
     
    }
   void fun(int a, float b)
   {}
   void fun(float x, int y)
   {}
  

};
int main()
{
 overloading obj;

 obj.Add(11,21);
 obj.Add(11,21,51);
 obj.Add(10.9f,89.5f);
 obj.Add(10.9,80.5);
 return 0;

}