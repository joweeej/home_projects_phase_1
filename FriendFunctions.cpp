#include<iostream>
#include<list>

class EquilateralTriangle{
float a;
float circumfrence;
float area;

public:
void setA(float length){
   a = length;
   circumfrence = a+a+a;
   area =( 1.73 * a * a)/4;

}
//friend void printResults(EquilateralTriangle);
friend class Homework;
};
class HomeWork{

public:
  void printResults(EquilateralTriangle et){//This function is now a member of the created class.
  cout<<"circumfrence = "<<et.circumfrence<<endl;
  cout<<"area = "<<et.area<<endl;
  }
};
 
int main()
{


EquilateralTriangle et;
et.setA(3);
Homework h;
h.printResults(et);















    return 0;
}