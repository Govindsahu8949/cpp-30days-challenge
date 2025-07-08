//Array;(Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.)
// syntex
//string cars[4];  
#include<iostream>
using namespace std;
int main(){
    //arrey expl 2 example
int marks[] = {11,22,33,44};
int mathmarks[4];

// mathmarks[0] = gs; //!wrong only single char g with chr(int no char yes)
mathmarks[0] = 1111;
mathmarks[1] = 22222;
mathmarks[2] = 333333;
mathmarks[3] = 4444444;


cout<<"These are maths marks"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;


cout<<"marks are"<<endl;

//we can change the value of an arry
// marks[2] = 45;//like this 2 value change

// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

// for ( int i = 0; i < 4 ; i++){
//     cout<<"the value of the marks" <<  i << "is" << marks[i]<<endl;
// }

// #pointer and arthimetic 


int*p = marks;
cout<<"The value of the marks[0]"<<*p<<endl;
cout<<"The value of the marks"<<(*p+1)<<endl;
cout<<"The value of the marks"<<(*p+2)<<endl;
cout<<"The value of the marks"<<(*p+3)<<endl;



return 0;




}