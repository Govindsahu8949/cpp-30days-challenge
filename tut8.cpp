#switch statements 

#// selection control structure :
//switch statement :
#include<iostream>
using namespace std;
int main(){
int age ;
cout<<"tell me  your age "<<endl;
cin>>age;
 switch(age)
 {
    case 18:
    cout<<"wow you are 18";
    break;  //break is used to exdecute the crrt 
            //so next will never executed
 case 22:
    cout<<"wow you are 22";
    break;
     case 2:
    cout<<"wow you are 2";
    break;
    default:
    cout<<"No special case"<<endl;
    break;
 }
cout<<"wow mnan you are getting old";
 return 0;
}
