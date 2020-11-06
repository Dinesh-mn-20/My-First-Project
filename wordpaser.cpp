#include<iostream>

using namespace std;
void spacechecker(char[600],int &no_space);
int main()
{
   char flag[600]="                                                                                                                                                                                                                                                                                                            ";
   cout<<"enter the paragraph"<<endl;
   cin.getline(flag,600);
   int no_space=0;
   spacechecker(flag,no_space);

   cout<<no_space<<"main";
}
void spacechecker(char chr[600],int &no_space)
{  
    int iden1=0;
    int iden2=0;
    char ch=(char)' ';
    for(int i=0;i<600;i++)
    {   
        if(chr[i]==ch)
        {   
            iden1=1;
            if(iden1==1&&iden2==1)
            {   cout<<chr[i]<<"break";
                break;
            }
          // cout<<chr[i]<<no_space<<"i="<<i<<"no space"<<endl;
            no_space++;
        }
        if(chr[i]!=ch)
        {
            iden1=0;
        }
        iden2=iden1;  
    }
}