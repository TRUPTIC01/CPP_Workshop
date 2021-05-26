#include<iostream>
using namespace std;
int main()
{
        int age;
        char martial_status,gender;
        cout<<"Enter details of employee";
        cin>>age;                                          
        cin>>martial_status>>gender;
        if(gender=='F')
        {                                                  
        cout<<"Employee is female"<<endl;
        cout<<"She will work only in urban areas"<<endl;   
        }
        else if(gender=='M' && age>=20 && age<40)
        {
        cout<<"Employee is male"<<endl;
        cout<<"He may work anywhere"<<endl;
        }
        else if(gender =='M' && age>=40 &&age<60)
        {
                cout<<"Employee is male\t" "He will work inurban areas"<<endl;                                       
        }                                                  
        else
        cout<<"ERROR";
        return 0;                                          
}

