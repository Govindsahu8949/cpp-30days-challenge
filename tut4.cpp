#include<iostream>
 using namespace std;

 int main (){
    int a=3, b=7;
  cout <<"operators in c++:"<<endl;
  cout <<"operators in C++ here types:"<<endl;
  //ARthimetic operators
  cout<<"the value of a + b is\n"<<a+b<<endl;
  cout<<"the value of a  - b is\n"<<a-b<<endl;
  cout<<"the value of a * b is\n"<<a*b<<endl;
  cout<<"the value of a / b is\n"<<a/b<<endl;
  cout<<"the value of a % b is\n"<<a%b<<endl;


  // asiment operators
    // int a=3 , b=7;
    // char d='d';

    // comparison operators 
 cout<<"the value of a==b is "<<(a==b)<<endl;
 cout<<"the value of a!=b is "<<(a!=b)<<endl;
 cout<<"the value of a>=b is "<<(a>=b)<<endl;
 cout<<"the value of a<=b is "<<(a<=b)<<endl;
 cout<<"the value of a>b is "<<(a>b)<<endl;


 // Logical operators
    cout << "The value of logical AND operator ((a == b) && (a < b)) is: " << ((a == b) && (a < b)) << endl; //this is run when both value is true
    cout << "The value of logical or operator ((a == b) OR (a < b)) is: " << ((a == b) || (a < b)) << endl; //not both but atlest one value may be true
    cout << "The value of logical or operator ((a == b) not (a < b)) is: " << (!(a == b)) << endl;          //Reverse the result, returns false if the result is true

    return 0;
    
    
 }
