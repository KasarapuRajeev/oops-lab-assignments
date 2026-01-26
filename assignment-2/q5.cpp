#include<iostream>
using namespace std;
class complex{
  float a;
  float b;
  public:
  void setcomplex();
  void displaycomplex();
  void display();


};
void complex::setcomplex(){
  cout<<"enter the a and b: " <<endl;
  cin>>a>>b;

}
void complex::displaycomplex(){
  cout<<a<<"+"<<b<<"i"<<endl;
}
void complex :: display(){
  int c[3], d[3],e=0,f=0;
  for (int i=0;i<3;i++){
  cin>>c[i]>>d[i]; // extra if we want to take. for adding many complex numbers
  e=e+c[i];
  f=f+d[i];
}
cout<<"sum "<<a+e<<"+"<<b+f<<"i"<<endl;
}



int main(){
  complex r1;
  r1.setcomplex();
  r1.displaycomplex();
  r1.display();
  


}
