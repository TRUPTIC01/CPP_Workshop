#include<iostream>
using namespace std;
int main()
{
        int orignl_dig,rem,rev=0;
        cout<<"Enter a original number\t";                 
        cin>>orignl_dig;
        while(orignl_dig!=0)
        {                                                  
                rem= orignl_dig%10;
                rev=rev*10+rem;
                orignl_dig/=10;                            
        }
        cout<<"The reverse number is:"<<rev;               
        return 0;
}

