// function -- it is block of code thats perform some operation 
// do one time (use forerver)
// #include<iostream>
// using namespace std;
// int sum (int a , int b){
//     int c= a +b;
//     return c;
// }
// int main(){
// int num1 , num2 ;
// cout<<"the num1 ki value"<<endl;
// cin>>num1;
// cout<<"the num1 ki value"<<endl;
// cin>>num2;
// cout<<sum(num1 ,num2);


// return 0;
// }




// function prototype 
// means you write  a function anywhere the give messge to a compiler thats aagey he bhai at previous;
#include<iostream>
using namespace std;

// prototype define
// type function-name (arguments);
int sum (int a,int b);
int main(){
int num1 , num2 ;
cout<<"the num1 ki value"<<endl;
cin>>num1;
cout<<"the num1 ki value"<<endl;
cin>>num2;
cout<<sum(num1 ,num2);



return 0;
}

int sum (int a , int b){
    int c= a +b;
    return c;
}




//  1  --actual parameter ::NUM1 & NUM2 are actual parameter which is take value;
// jisme value dali jati H
//  2 -- formal parameter ::  (a & b) like those take value from actual parameter 
// jo ki bus leta hey