// Write a program to taking input from user i.e. name,age,gender(single character),weight
// and display the output of the same.

#include<iostream>
using namespace std;

int main(){
    
    string name;
    int age;
    char gender;
    float weight;

    cout<<"Hello!"<<endl;
    cout<<"Enter your name:- ";
    cin>>name;
    cout<<"Enter your age:- ";
    cin>>age;
    cout<<"Enter your gender (M/F):- ";
    cin>>gender;
    cout<<"Enter your weight in Kgs:- ";
    cin>>weight;
    
    cout<<endl;
    cout<<"Your output is here:- "<<endl;
    cout<<endl;

    cout<<"Your name is:- "<<name<<endl;
    cout<<"Your age is:- "<<age<<endl;
    cout<<"Your gender is:- "<<gender<<endl;
    cout<<"Your weight is:- "<<weight<<" Kgs "<<endl;


    return 0;
}
