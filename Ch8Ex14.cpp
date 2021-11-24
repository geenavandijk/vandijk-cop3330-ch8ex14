/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Geena-Maria van Dijk
 */

#include "std_lib_facilities.h"

//Can we declare a non-reference function argument const? 
        //yes
//What might that mean? 
        //A non-reference argument is an argument that is not passed by locaation but just value and constant means it is not changable within the function.
//Why might we want to do that?
        //We might want to use it when we pass a value into a function that is constant for specfic situations. For instance interest rates. Interest rates might change but we also might want to keep them constant during specific situations. 
//Why don't people do that often? 
        //Because you cant change the value and thus is only useful for calculations and printing information 


double simpleInterest (double, int, const double);
void displayInterest (const double);

int main ()
{
    int y;
    double r,p;

    cout<<"Enter your initial investment, the time in years, and the interest rate: "<<endl;
    cin>>p>>y>>r;

    double i = simpleInterest(p,y,r);

    displayInterest(i);

    return 0;
}

double simpleInterest (double principle, int year, const double r)
{
    
    return principle*year*(r/100);
    
}

void displayInterest (const double i)
{
    cout<<"The interest = "<<i<<endl;
}


////dont forget git commit and then push
///git remote -v  