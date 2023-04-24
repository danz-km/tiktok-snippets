//code by @csbuddyph
//Fibonacci Series using Recursion C++
//
//
//instruct pre-processor to include directives to headers
#include <iostream>

//allows us to assign names for objects and variables from standard library
using namespace std;

//start of the fibonacci function
//create a function for the fibonacci sequence
//always declare function above the main function 
int fibonacci (int x)
{
    //if-else statements
    //if statement
    if ((x==1)||(x==0))
    {
        //return to main
        return(x);
    }

    //else statement
    //recursion occurs
    else
    {
        //return to main
        return(fibonacci(x-1)+fibonacci(x-2));
    }

}
//end of the fibonacci function

//start of the main function
int main()
{
    //initialise the variables
    int x, i=0;

    //print the output of the question to enter the series for readibility
    cout<<"Enter the number of terms of the series: ";

    //receive the input from the console
    cin>>x;

    //prints the output of the answer for readibility
    cout<<"\nFibonacci series: ";

    //while loop
    //ends when i becomes less than x
    while(i<x)
    {
        cout<<" "<<fibonacci(i);

        //increment by 1
        i++;

    }

    //end the program successfully
    return 0;
}
//end of the main function
