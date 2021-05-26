#include<iostream>                                         
using namespace std;
int main()
{
             int  num,rem,odd=0,even=0,digit;
             cout<<"Enter an integer number:";
             cin>>num;                                     

               while(num>0){                               
                                                           
               digit = num % 10;                           
               num = num / 10;
               rem = digit % 2;
                                                           
               if(rem != 0)
                odd=odd+digit;
               else                                        
                even=even+digit;

               }

               cout<<"sum of Odd digits present:"<<odd<<endl;
              cout<<"Sum of even digits present: "<<even<<endl;                                                       
              return 0;

}                                                          

