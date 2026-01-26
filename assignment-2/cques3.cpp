#include<iostream>
using namespace std;
class rectangle{
  int length;
  int breadth;
  void area();
  public:
  void getdetails();
  void calculate();

};
void  rectangle::getdetails(){
  cout<<"enter the length "<<endl;
  cin>>length;
  cout<<"enter the breadth"<<endl;
  cin>>breadth;

}
void  rectangle::calculate(){
  
  area();
}
void rectangle::area(){
  int A= length*breadth;
  cout<<"final ans "<<endl;
  cout<<A;
}
int main(){
 rectangle R;
 R.getdetails();
 R.calculate();


}
