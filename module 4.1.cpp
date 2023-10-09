  // 1. WAP to print "Hello World" using C++
  
#include<iostream>
using namespace std;
class student{           //  class name student
	public:                //  access specifier
	   void print()         //method
	   {
	   	cout<<"Hello World";
		 }
};
int main()
{
	student s1;    // class name student  and s1 is object
	s1.print();
}
