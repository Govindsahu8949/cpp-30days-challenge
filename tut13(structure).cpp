// // structure ,,,union ,,,enums 
// #include<iostream>
// using namespace std;


//  struct employe
//  {
//     /*data*/
//     int id;
//     char favchar;
//     float salary;

//  };
//  int main(){
//     struct employe gs ;
//      gs.id =1;
//      gs.favchar='c';
//      gs.salary = 1256000;
//      cout<<"the value of "<<gs.id<<endl;
//      cout<<"the value of "<<gs.favchar<<endl;
//      cout<<"the value of "<<gs.salary<<endl;
 

//     return 0;

//  }



// // # union  provide better memory managements like call only one so this will save managements/
 #include<iostream>
using namespace std;
union Money
 {
 int dallar ;
 char favchar;
 float rupees;
};

// enums = basically it is used to call a particular  items with index number;

int main(){
   enum meal{breakfast , lunch ,  dinner};
   // enums calling;
cout<<breakfast <<endl;
cout<<lunch <<endl;
cout<<dinner <<endl;

// union Money Govind;
// Govind.dallar = 1;
// Govind.favchar ='c';
// Govind.rupees = 100000.00;

// cout<<Govind.dallar<<endl;
// cout<<Govind.favchar<<endl;
// cout<<Govind.rupees<<endl;




 return 0;
}

