#include <iostream>
using namespace std;

//class to show the implementation of list intitialization of data members
class LISTI {
 private:
  int datamember;
 
 public:
 //declaration of constructor
  LISTI( int );
  void getdatamember();
};

 LISTI :: LISTI( int x ): datamember{x} {}
 void LISTI :: getdatamember(){
  cout<<"The value of Datamember of class is "<<datamember<<endl;
 }

int main()
{
 LISTI obj(10);
 obj.getdatamember();
}
