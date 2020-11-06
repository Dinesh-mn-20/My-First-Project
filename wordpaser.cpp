#include<iostream>

using namespace std;
int spacechecker(char[600],int &);
int main()
{
   char flag[600];
   cout<<"enter the paragraph"<<endl;
   cin.getline(flag,600);

 

    
}
int spacechecker(char chr[600],&no_space)
{
    int iden1=0;
    int iden2=0;
    for(int i=0;i<500;i++)
    {   
        if(chr[i]=='/0')
        {   
            iden1=1;
            no_space++;
        }
        if(chr[i]!='\0')
        {
            iden1=0;
        }
        if(iden1==1&&iden2==1)
        {
            break;
        }
        iden2=iden1;
      
    }return no_space;

}