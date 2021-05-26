#include<iostream>
using namespace std;
int main ()
{                                                                             
    int arr[10], n, i, max, min;
    double sum=0,avg=0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    for (i = 0; i < n; i++)
    {                                                                         
        cout << " arr [ " << i << " ] = " << arr[i] << endl;
        sum += arr[i];
    }                                                                         

    avg = sum/n;
    cout << "Largest element : " << max<<endl;                                
    cout << "Smallest element : " << min<<endl;
    cout << " Sum of the Elements of the Array is : " << sum <<endl;          
                                                                              
    cout << " Average of the Elements of the Array is : " << avg <<endl;      
                                                                              
    return 0;
}
