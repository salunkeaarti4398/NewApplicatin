#include<iostream>
using namespace std;

class Base
{
    public:
      int A,B;
      void fun(){   cout<<"Base fun\n";}
      virtual void gun(){   cout<<"Base gun\n";}
      void sun(){   cout<<"Base sun\n";}
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun(){   cout<<"Base gun\n";}
        void run(){   cout<<"Base run\n";}
        void mun(){   cout<<"Base mun\n";}

};

int main()
{
  cout<<"size of base class:"<<sizeof(Base)<<"\n";
  cout<<"size of Derived class:"<<sizeof(Derived)<<"\n";
  return 0;
}