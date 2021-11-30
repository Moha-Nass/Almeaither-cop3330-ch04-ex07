/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mohammed Almeaither
 */

#include<iostream>
#include<string>
using namespace std;
int main()
{
    char operation;
    double a,b, result;
    cout<<"Enter first operand: ";
    cin>>a;
    cout<<"Enter second operand: ";
    cin>>b;
    cout<<"Enter opeation: ";
    cin>>operation;


    if(operation=='+')
    {
        result = a+b;
        cout<<"The sum of "<<(int)a<<" and "<<(int)b<<" is "<<(int)result<<endl;
    }
    else if(operation=='-')
    {
        result = a-b;
        cout<<"The difference of "<<(int)a<<" and "<<(int)b<<" is "<<(int)result<<endl;
    }
    else if(operation=='/')
    {
        result = a/b;
        cout<<"The division of "<<(int)a<<" and "<<(int)b<<" is "<<(int)result<<endl;
    }
    else if(operation=='*')
    {
        result = a*b;
        cout<<"The multiplication of "<<(int)a<<" and "<<(int)b<<" is "<<(int)result<<endl;
    }
    else
    {
        cout<<"invalid operation"<<endl;
    }
    return 0;
}
