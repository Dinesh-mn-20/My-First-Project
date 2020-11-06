#include<iostream>
#include<string.h>
#include<iomanip> 
 using namespace std;
 int main()
{  int k,m=0;
   char flag[600];
   cout<<"enter the paragraph"<<endl;
   cin.getline(flag,600);
   k=strlen(flag);
    for(int i=0;i<600;i++)
  {  
    if(flag[i]==' ')
      {   
         m++;
      }
    if(i==k)
      { 
         break;
      }
  }
    cout<<"the number of words in your paragraph is "<<m+1<<endl;
    cout<<"the number of letters in your paragraph is "<<k-m<<endl;
    float d;
    d=(float)(k-m)/(m+1);
    cout<<"average letters in the word is "<<setprecision(3)<<d<<endl;
}