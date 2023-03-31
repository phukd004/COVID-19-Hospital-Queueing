#include <iostream>
#include<iomanip>
#include<exception>
#include <stdlib.h>
#include <cstdio>
#include <string>
using namespace std;
#include "hospital.h"
void secondchoicedisplay()
{
  cout<<"Queue List"<<endl;
  cout<<"NAME"<<setw(25)<<"SURNAME"<<setw(20)<<"AGE"<<endl;
  cout<<"====================================================="<<endl;
}
void secondchoice(string n)
{
  string y=n;
  cout<<endl<<"-----------------------------------------------------"<<endl;
  cout<<y;
  cout<<endl<<"-----------------------------------------------------"<<endl;
}
void display_firstopen(){ 
  cout<<endl;
  cout<<endl<<"====================================================="<<endl;
  cout<<endl<<endl<<"                      Welcome to"<<endl;
  cout<<"              Covid-19 Hospital Queueing"<<endl;  
  cout<<endl<<"                    -press Enter-"<<endl;
  cout<<endl<<"====================================================="<<endl;
  cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
  system("clear");
}

void display_menu(int pA,int pB,int pC,int pD,int pE){  // หน้าเลือกโรงพยาบาล
int a,b,c,d,e;
a = 51-pA;
b = 51-pB;
c = 51-pC;
d = 51-pD;
e = 51-pE;
  cout<<endl<<"====================================================="<<endl;
  cout<<endl<<"               Please Select Hospital."<<endl;
  cout<<endl<<"====================================================="<<endl;
  cout<<setw(25)<<"Hospital Name"<<setw(20)<<"In Queue";
  cout<<endl<<"-----------------------------------------------------"<<endl;
  cout<<"1)Siriraj Hospital "<<setw(20)<<"["<<50-a<<"/50]"<<endl;
  cout<<"2)Vajira Hospital "<<setw(21)<<"["<<50-b<<"/50]"<<endl;
  cout<<"3)Ramathibodi Hospital "<<setw(16)<<"["<<50-c<<"/50]"<<endl;
  cout<<"4)Burapha University Hospital "<<setw(9)<<"["<<50-d<<"/50]"<<endl;
  cout<<"5)Thammasat University Hospital "<<setw(7)<<"["<<50-e<<"/50]"<<endl;
  cout<<"0)Exit";
  cout<<endl<<"====================================================="<<endl;
}

void display_hospital(string n){
  system("clear");
  cout<<"=====================================================";
  cout<<endl<<""<<n;
  cout<<endl<<"====================================================="<<endl<<endl;
  cout<<"Please choose your option"<<endl;
  cout<<"1.Book a Queue"<<endl;
  cout<<"2.Queue List"<<endl;
  cout<<"0.Back to Menu"<<endl;
  cout<<endl<<"====================================================="<<endl;
}

void exit_display(){
  system("clear");
  cout<<endl;
  cout<<" _________________________________________ "<<endl;
  cout<<"|                                         |"<<endl;
  cout<<"|                                         |"<<endl;
  cout<<"|              ♥ Stay Save ♥              |"<<endl;
  cout<<"|             ♥ Wear a mask ♥             |"<<endl;
  cout<<"|          ♥ Social Distancing ♥          |"<<endl;
  cout<<"|   ♥ Wash your hands well and often ♥    |"<<endl;
  cout<<"|                                         |"<<endl;
  cout<<"|_________________________________________|"<<endl;
  cout<<endl<<endl;
  cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
}