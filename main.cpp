#include <iostream>
#include<iomanip>
#include<exception>
#include <stdlib.h>
#include <cstdio>
#include <string>
using namespace std;
#include "hospital.h"
#include "function.h"
#include "errorexception.h"

int main() 
{
  int a,i,j,pA=1,pB=1,pC=1,pD=1,pE=1,age,banana,menu=0;
  string n,sn;
  cout<<"====================================================="<<endl;
  cout<<"                   Boosting Program"<<endl;
  cout<<"====================================================="<<endl;
  hospital A("Siriraj Hospital"),B("Vajira Hospital"),C("Ramathibodi Hospital"),D("Burapha University Hospital"),E("Thammasat University Hospital");
  cout<<"====================================================="<<endl;
  cout<<endl<<"                    -press Enter-"<<endl;
  cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

system("clear");
display_firstopen();
  do{
system("clear");
display_menu(pA,pB,pC,pD,pE);
do{
cout<<"Enter : ";
cin>>a;
a=chk_exception_int(a);
}while(a==8);


switch(a)
{
  case 1:
    {
    display_hospital(A.checkhosname());
    menu=0;
    do{
    cout<<"Enter : ";
    cin>>menu;
    menu=chk_exception_menu(menu);
    }while(menu==4);
    if(menu==2)
    {
      system("clear");
      secondchoice(A.checkhosname());
      secondchoicedisplay();
      banana=1;      
      for(i=0;i<pA-1;i++)
      {  
        cout<<banana<<".";
      for(j=0;j<i+2;j++)
      {
        if(j==i+1)
        {
          A.displaynameal(j);
          A.displaysural(j);
          A.displayageal(j);
          cout<<endl;
        }      
      }     
      banana++;    
      }
      cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }
    if(menu==1)
    {
      for(i=0;i<1;i++)
      {
        A.getinfo();
        pA++;
        --A;
      }
    }
    if(menu==0){
      break;
    }
    
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }break;
  case 2:
    {
    display_hospital(B.checkhosname());
    menu=0;
    do{
    cout<<"Enter : ";
    cin>>menu;
    menu=chk_exception_menu(menu);
    }while(menu==4);
    if(menu==2)
    {
      system("clear");
      secondchoice(B.checkhosname());
      secondchoicedisplay();
      banana=1;
      for(i=0;i<pB-1;i++)
      {  
        cout<<banana<<".";
      for(j=0;j<i+2;j++)
      {
        if(j==i+1)
        {
          B.displaynameal(j);
          B.displaysural(j);
          B.displayageal(j);
          cout<<endl;
        }      
      }     
      banana++;    
      }
      cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }
    if(menu==1)
    {
      for(i=0;i<1;i++)
      {
        B.getinfo();
        pB++;
        --B;
      }
    }
     if(menu==0){
      break;
    }
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }break;
  case 3:{
     display_hospital(C.checkhosname());
    menu=0;
    do{
    cout<<"Enter : ";
    cin>>menu;
    menu=chk_exception_menu(menu);
    }while(menu==4);
    if(menu==2)
    {
     system("clear");
     secondchoice(C.checkhosname());
     secondchoicedisplay();
     banana=1;
    for(i=0;i<pC-1;i++)
    {  
      cout<<banana<<".";
    for(j=0;j<i+2;j++)
    {
      if(j==i+1)
      {
        C.displaynameal(j);
        C.displaysural(j);
        C.displayageal(j);
        cout<<endl;
      }      
    }     
      banana++;    
    }

    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }
    if(menu==1){
    for(i=0;i<1;i++){
    C.getinfo();
    pC++;
    --C;
    };}
     if(menu==0){
      break;
    }
               cin.ignore(std::numeric_limits<streamsize>::max(),'\n');}break;
  case 4:
  {
    display_hospital(D.checkhosname());
    menu=0;
    do{
    cout<<"Enter : ";
    cin>>menu;
    menu=chk_exception_menu(menu);
    }while(menu==4);
    if(menu==2)
    {
      system("clear");
      secondchoice(D.checkhosname());
      secondchoicedisplay();
      banana=1;
      for(i=0;i<pD-1;i++)
      {  
        cout<<banana<<".";
        for(j=0;j<i+2;j++)
        {
          if(j==i+1)
          {
            D.displaynameal(j);
            D.displaysural(j);
            D.displayageal(j);
            cout<<endl;
          }      
        }     
      banana++;    
      }
      cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }
    if(menu==1)
    {
      for(i=0;i<1;i++)
      {
        D.getinfo();
        pD++;
        --D;
      }
    }
     if(menu==0){
      break;
    }
  
  cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
  }break;
    case 5:
    {
       display_hospital(E.checkhosname());
    menu=0;
    do{
    cout<<"Enter : ";
    cin>>menu;
    menu=chk_exception_menu(menu);
    }while(menu==4);
      if(menu==2)
      {
        system("clear");
        secondchoice(E.checkhosname());
        secondchoicedisplay();
        banana=1;
        for(i=0;i<pE-1;i++)
        {  
          cout<<banana<<".";
        for(j=0;j<i+2;j++)
        {
          if(j==i+1)
          {
            E.displaynameal(j);
            E.displaysural(j);
            E.displayageal(j);
            cout<<endl;
          }      
        }
      banana++;   
        }
      cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
      }
      if(menu==1)
      {
        for(i=0;i<1;i++)
        {
          E.getinfo();
          pE++;
          --E;
        }
      }
       if(menu==0){
      break;
    }
      cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    }break;
 case 6:
 {
   break;
 }break;
  default:{}break;
}
  }while(a!=0);
cout<<endl;
  exit_display();
  string name[50],sur[50],tempname[50],tempsurname[50];
  int ega[50],tempage[50];
  FILE *file;
  file = fopen("QueueAge.txt","w");
  fprintf(file,"Siriraj Hospital Queue\n");
  if(pA==1){
    fprintf(file,"No Queue\n");
  }
  for(i=1;i<pA;i++)
  {
    name[i]=A.returnnameal(i);
    sur[i]=A.returnsural(i);
    ega[i]=A.returnageal(i);
  }
  for(i=pA;i>0;i--){
   for(j=1;j<i;j++){
			if(ega[j]<ega[j+1]){
           tempage[j]=ega[j];
            ega[j]=ega[j+1];
            ega[j+1]=tempage[j];
           tempname[j]=name[j];
            name[j]=name[j+1];
            name[j+1]=tempname[j];
             tempsurname[j]=sur[j];
            sur[j]=sur[j+1];
            sur[j+1]=tempsurname[j];
       }
   }
   }
   for(i=1;i<pA;i++){
      fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
   }
   fprintf(file,"Vajira Hospital Queue\n");
  if(pB==1){
    fprintf(file,"No Queue\n");
  }
  for(i=1;i<pB;i++)
  {
    name[i]=B.returnnameal(i);
    sur[i]=B.returnsural(i);
    ega[i]=B.returnageal(i);
  }
  for(i=pB;i>0;i--){
   for(j=1;j<i;j++){
			if(ega[j]<ega[j+1]){
           tempage[j]=ega[j];
            ega[j]=ega[j+1];
            ega[j+1]=tempage[j];
           tempname[j]=name[j];
            name[j]=name[j+1];
            name[j+1]=tempname[j];
             tempsurname[j]=sur[j];
            sur[j]=sur[j+1];
            sur[j+1]=tempsurname[j];
       }
   }
   }
   for(i=1;i<pB;i++){
      fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
   }

   fprintf(file,"Ramathibodi Hospital Queue\n");
  if(pC==1){
    fprintf(file,"No Queue\n");
  }
  for(i=1;i<pC;i++)
  {
    name[i]=C.returnnameal(i);
    sur[i]=C.returnsural(i);
    ega[i]=C.returnageal(i);
  }
  for(i=pC;i>0;i--){
   for(j=1;j<i;j++){
			if(ega[j]<ega[j+1]){
           tempage[j]=ega[j];
            ega[j]=ega[j+1];
            ega[j+1]=tempage[j];
           tempname[j]=name[j];
            name[j]=name[j+1];
            name[j+1]=tempname[j];
             tempsurname[j]=sur[j];
            sur[j]=sur[j+1];
            sur[j+1]=tempsurname[j];
       }
   }
   }
   for(i=1;i<pC;i++){
      fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
   }
   fprintf(file,"Burapha University Hospital Queue\n");
  if(pD==1){
    fprintf(file,"No Queue\n");
  }
  for(i=1;i<pD;i++)
  {
    name[i]=D.returnnameal(i);
    sur[i]=D.returnsural(i);
    ega[i]=D.returnageal(i);
  }
  for(i=pD;i>0;i--){
   for(j=1;j<i;j++){
			if(ega[j]<ega[j+1]){
           tempage[j]=ega[j];
            ega[j]=ega[j+1];
            ega[j+1]=tempage[j];
           tempname[j]=name[j];
            name[j]=name[j+1];
            name[j+1]=tempname[j];
             tempsurname[j]=sur[j];
            sur[j]=sur[j+1];
            sur[j+1]=tempsurname[j];
       }
   }
   }
   for(i=1;i<pD;i++){
      fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
   }
   fprintf(file,"Thammasat University Hospital Queue\n");
  if(pE==1){
    fprintf(file,"No Queue\n");
  }
  for(i=1;i<pE;i++)
  {
    name[i]=E.returnnameal(i);
    sur[i]=E.returnsural(i);
    ega[i]=E.returnageal(i);
  }
  for(i=pE;i>0;i--){
   for(j=1;j<i;j++){
			if(ega[j]<ega[j+1]){
           tempage[j]=ega[j];
            ega[j]=ega[j+1];
            ega[j+1]=tempage[j];
           tempname[j]=name[j];
            name[j]=name[j+1];
            name[j+1]=tempname[j];
             tempsurname[j]=sur[j];
            sur[j]=sur[j+1];
            sur[j+1]=tempsurname[j];
       }
   }
   }
   for(i=1;i<pE;i++){
      fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
   }
   fclose(file);
//////////////////////////////////////////////////////////////////ก้อนคิวธรรมดา
file = fopen("Queue.txt","w");
fprintf(file,"Siriraj Hospital Queue\n");
  if(pA==1){
    fprintf(file,"No Queue\n");
  }
  for(i=1;i<pA;i++)
  {
    name[i]=A.returnnameal(i);
    sur[i]=A.returnsural(i);
    ega[i]=A.returnageal(i);
    fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
  }
  fprintf(file,"Vajira Hospital Queue\n");
  if(pB==1){
    fprintf(file,"No Queue\n");
  }
    for(i=1;i<pB;i++)
  {
    name[i]=B.returnnameal(i);
    sur[i]=B.returnsural(i);
    ega[i]=B.returnageal(i);
    fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
  }
  fprintf(file,"Ramathibodi Hospital Queue\n");
  if(pC==1){
    fprintf(file,"No Queue\n");
  }
   for(i=1;i<pC;i++)
  {
    name[i]=C.returnnameal(i);
    sur[i]=C.returnsural(i);
    ega[i]=C.returnageal(i);
    fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
  }
  fprintf(file,"Burapha University Hospital Queue\n");
  if(pD==1){
    fprintf(file,"No Queue\n");
  }
   for(i=1;i<pD;i++)
  {
    name[i]=D.returnnameal(i);
    sur[i]=D.returnsural(i);
    ega[i]=D.returnageal(i);
    fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
  }
  fprintf(file,"Thammasat University Hospital Queue\n"); 
  if(pE==1){
    fprintf(file,"No Queue\n");
  }
  for(i=1;i<pE;i++)
  {
    name[i]=E.returnnameal(i);
    sur[i]=E.returnsural(i);
    ega[i]=E.returnageal(i);
    fprintf(file,"%d.",i);
    fprintf(file," %s ",name[i].c_str());
    fprintf(file," %s ",sur[i].c_str());
    fprintf(file,"%d \n",ega[i]);
  }
  fclose(file);
  
}

