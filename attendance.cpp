#include<iostream>
using namespace std;
int main()
{
        int classes_held=300, classes_attended;
        float attendance;
                                                           
        cout<<"Enter the number of classes attended by the Student"<<endl;
        cin>>classes_attended;
        attendance= (float)classes_attended/classes_held*100;
        cout<<"Attendance of student is:"<<attendance<<endl
;
        if(attendance>=75)
        cout<<"Student is allowed to sit in exams";
        else
        cout<<"Student is not allowed to sit in exams";
        return 0;
}

