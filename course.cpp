#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //Making a simple Calculator

    //initializing the variables
    double sum , subtract , multiply , divide;
    double num1,num2;
    int val;

    //dislpaying menu
    cout<<"enter number to calculate"<<endl;
    cout<<"enter 1 to add two values "<<endl;
    cout<<"enter 2 to subtract two values "<<endl;
    cout<<"enter 3 to  multiply two values "<<endl;
    cout<<"enter 4 to divide two values"<<endl;
    cout<<"enter any other number to quit the calculation"<<endl;
    cin>>val;



    //calculations
    if(val==1)
    {
        cout<<"enter the values you want to add ";
        cin>>num1 >>num2;
        cout<<"num1 = "<<num1<<endl;
        cout<<"num2 = "<<num2<<endl;
        sum=num1+num2;
        cout<<"sum = "<<num1 <<"+ "<<num2<<"= "<<sum<<endl;
    }
    
return 0;
}