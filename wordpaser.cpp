#include<iostream>
#include<string.h>
#include<iomanip> 
 using namespace std;
 int main()
{  int k,m=0;                 //m is the number of spaces and k is number of character present
   char flag[600];
   cout<<"Enter the paragraph:"<<endl;
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
    cout<<"Number of words in your paragraph is "<<m+1<<endl;
    cout<<"Number of letters in your paragraph is "<<k-m<<endl;
    float d;
    d=(float)(k-m)/(m+1);
    cout<<"On an average no. of letters in the word is "<<setprecision(3)<<d<<endl;
}