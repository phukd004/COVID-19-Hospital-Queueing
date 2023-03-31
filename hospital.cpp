#include <iostream>
#include<iomanip>
#include<exception>
#include <stdlib.h>
#include <cstdio>
#include <string>
using namespace std;
#include "hospital.h"
//////////////////////////////////////////////////////////// surname
bool hospital::Surisempty()
{
  if(Surfront==NULL&&Surrear==NULL)
  return true;
  else
  return false;
}
void hospital::Surenqueue(string value)
{
  SurNode *ptr=new SurNode();
  ptr->data=value;
  ptr->Surlink=NULL;

  if(Surfront==NULL)
  {
    Surfront=ptr;
    Surrear=ptr;
  }
  else
  {
    Surrear->Surlink=ptr;
    Surrear=ptr;
  }
}
void hospital::Surshowfront()
{
  if(Surisempty())
  cout<<"Queue is empty";
}
void hospital::SurdisplayQueue()
{
  if(Surisempty())
  cout<<"Queue is empty";
  else
  {
    SurNode *ptr=Surfront;
    while(ptr!=NULL)
    {
      cout<<ptr->data<<" "<<" ";
      ptr=ptr->Surlink;
    }
  }
}
void hospital::displaysural(int x){
  int i,y;
  y=x;
  string a[50];
  SurNode *ptr=Surfront;
  for(i=0;i<x;i++)
  {
    a[i]=ptr->data;
    ptr=ptr->Surlink;
    if(i==x-1)
    {
      printf("\t\t  %-10s",a[i].c_str());
    }
  }
}
string hospital::returnsural(int x){
  int i,y;
  y=x;
  string a[50],sur;
  SurNode *ptr=Surfront;
  for(i=0;i<x;i++)
  {
    a[i]=ptr->data;
    ptr=ptr->Surlink;
      sur=a[i];
    
  }
  return sur;
}
//////////////////////////////////////////////////////////// name
bool hospital::isempty()
{
  if(front==NULL&&rear==NULL)
  return true;
  else
  return false;
}
void hospital::enqueue(string value)
{
  NameNode *ptr=new NameNode();
  ptr->data=value;
  ptr->link=NULL;

  if(front==NULL)
  {
    front=ptr;
    rear=ptr;
  }
  else
  {
    rear->link=ptr;
    rear=ptr;
  }
}
void hospital::showfront()
{
  if(isempty())
  cout<<"Queue is empty";
}
void hospital::displayQueue()
{
  if(isempty())
  cout<<"Queue is empty";
  else
  {
    NameNode *ptr=front;
    while(ptr!=NULL)
    {
      cout<<ptr->data<<" ";
      ptr=ptr->link;
    }
  }
}
 void hospital::displaynameal(int x){
int i,y;
  y=x;
  string a[50];
  NameNode *ptr=front;
  for(i=0;i<x;i++)
  {
    a[i]=ptr->data;
    ptr=ptr->link;
    if(i==x-1)
    {
      printf("%-11s",a[i].c_str());
    }
  }
 }
 string hospital::returnnameal(int x){
   int i,y;
  y=x;
  string a[50],name;
  NameNode *ptr=front;
  for(i=0;i<x;i++)
  {
    a[i]=ptr->data;
    ptr=ptr->link;
      name=a[i];
    
  }
  return name;
 }
//////////////////////////////////////////////////////////// age
bool hospital::Ageisempty()
{
  if(Agefront==NULL&&Agerear==NULL)
  return true;
  else
  return false;
}
void hospital::enqueue(int value)
{
  AgeNode *ptr=new AgeNode();
  ptr->data=value;
  ptr->Agelink=NULL;

  if(Agefront==NULL)
  {
    Agefront=ptr; 
    Agerear=ptr;
  }
  else
  {
    Agerear->Agelink=ptr;
    Agerear=ptr;
  }
}
void hospital::Ageshowfront()
{
  if(Ageisempty())
  cout<<"Queue is empty";
}
void hospital::AgedisplayQueue()
{
  if(Ageisempty())
  cout<<"Queue is empty";
  else
  {
    AgeNode *ptr=Agefront;
    while(ptr!=NULL)
    {
      cout<<ptr->data<<" "<<" ";
      ptr=ptr->Agelink;
    }
  }
}
 void hospital::displayageal(int x){
int i,y;
  y=x;
  int a[50];
  AgeNode *ptr=Agefront;
  for(i=0;i<x;i++)
  {
    a[i]=ptr->data;
    ptr=ptr->Agelink;
    if(i==x-1)
  {
    printf("\t\t\t  %-10d",a[i]);
  }
  }
 }
 int hospital::returnageal(int x){
   int i,b,a[50];
  AgeNode *ptr=Agefront;
  for(i=0;i<x;i++)
  {
    a[i]=ptr->data;
    ptr=ptr->Agelink;
      b=a[i];
    
  }
  return b;
 }
////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////// Normal FUNCTION HOSPITAL CLASS
void hospital::getinfo()
{
  string n,sn;
  int age;
  system("clear");
  cout<<"====================================================="<<endl;
  cout<<"Please complete your Information"<<endl;
  cout<<"====================================================="<<endl<<endl;
  cout<<"Name    : ";
  cin>>n;
  enqueue(n);
  cout<<"Surname : ";
  cin>>sn;
  Surenqueue(sn);
  cout<<"Age     : ";
  do{
    try{
  cin>>age;
  if(cin.fail()){
throw "Please Enter Number only";
  }
  if(age<=0){
throw "Your age should not be 0 or lower than 0";
  }
  if(age>=120){
    throw "Age Invalid";
  }
    }
    catch(const char* my_cin){
cout<<my_cin<<endl;
  cin.clear();
  cin.ignore(50,'\n');
  age=0;
    }
    catch(exception& e){
cout <<e.what()<< endl;
        age=0; 
    }
  }while(age==0);
  enqueue(age);
}
string hospital::checkhosname()
{
  return hosname;
}
void hospital::operator--(){
  leftnum--;
}
hospital::hospital(string x,int y)
{
  hosname = x;
  num = y;
  cout<<"Loading "<<checkhosname()<<endl;
}
hospital::~hospital(){
  cout<<"Deleting "<<checkhosname()<<endl;
}
