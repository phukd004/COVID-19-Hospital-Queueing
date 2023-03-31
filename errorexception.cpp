#include <iostream>
#include<iomanip>
#include<exception>
#include <stdlib.h>
#include <cstdio>
#include <string>
using namespace std;
#include "hospital.h"
#include "function.h"

class my_cin : public exception{
  virtual const char* what() const throw(){
    cin.clear();
    cin.ignore(50,'\n');
    return "Exception"; 
  }
}my_cin;


int chk_exception_int(int x)
{
try{
  if (cin.fail()){
    x=8;
throw "Please Enter Number only";
}
if (x>5||x<0){
  x=8;
throw "This choice doesn't exist, Please try again";
}
}
catch(const char* my_cin){
cout << my_cin<<endl;
  cin.clear();
  cin.ignore(50,'\n');
  x=8;
}
catch (exception& e) {
        cout <<e.what()<< endl;
        x=8; 
        }
  return x;
}

int chk_exception_menu(int y){
  try{
    if(cin.fail()){
      throw "Please Enter Number only";
      y=4;
    }
    if(y>2||y<0){
      throw "This choice doesn't exist, Please try again";
      y=4;
    }
  }
  catch(const char* my_cin){
    cout <<my_cin<<endl;
    cin.clear();
    cin.ignore(50,'\n');
    y=4;
  }
  catch (exception& e){
    cout<<e.what()<<endl;
    y=4;
  }
  return y;
}