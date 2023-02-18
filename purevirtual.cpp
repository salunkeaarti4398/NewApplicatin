#include<iostream>
using namespace std;

class circle
{
   public:

      float PI;
      float Radius;

      circle()
      {
         PI = 3.14;
         Radius = 0.0;

      }

      circle(float A,float B)
      {
           PI = A;
           Radius = B;
      }
      void Disply()
      {
          cout<<"Value of radius is :"<<Radius<<"\n";
      }
      virtual float Area() = 0;                //Abstract function
      virtual float Circumfarance() = 0;      //Abstract function

};

class marvellous : public circle
{
    public:
      marvellous() : circle()
      {
      }
      marvellous(float X,float Y) : circle(X,Y)
      {
      }
      float Area()
      {
          float Ans = PI * Radius * Radius;
          return Ans;
      }
      float Circumfarance()
      {
          float Ans = 0.0;
          Ans = 2 * PI * Radius;
          return Ans;
      }

};

int main()
{
  marvellous mobj1;
  marvellous mobj2(3.14,10.89);

  float fret = 0.0;

  fret = mobj2.Area();
  cout<<"Area is : "<<fret<<"\n";

  fret = mobj2.Circumfarance();
  cout<<"Circumfarance is : "<<fret<<"\n";
  return 0;
}