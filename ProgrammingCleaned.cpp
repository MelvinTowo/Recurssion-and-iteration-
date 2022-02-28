//Melvin Towo
// 2/16/2022
#include <iostream>
#include <cmath>
#include <string>
#include <time.h>

using namespace std;

// recurssive g(n) function
int g(int n)
{
if(n > 1) // limiting to posititve integers
    {
        for (int i = 0; i < n; i++) // Condition to repeat only n times
        {
            cout << "Push " << n << endl;
            return g(n^3);
        }
    }
    
    cout << "Pop " << n << endl;
    
    return 0;
}

// Iterative g(n) function
int gi(int n)
{
    int z;
    int r;
    int x = 0;
    for ( int i = 0; i < n; i++)
    {
        r = n * n * n;
        z += r;
        cout << z << endl;

    }

    return 0; 
}

// Iterative fibonacci function
void fibi(int number)
{
 int x = 0, y = 1, z = 0;
    for (int i = 0; i < number;  i++)
    {
        cout << x << " ";
        z = x + y; 
        x = y;
        y = z;
    }

}

// Recurssive Fibonnacci function
int fib(int x)
{
   if((x == 1) || (x == 0))
    {
        return(x);
    }
    else    
     return(fib(x-1) + fib(x-2));
    

}


// Functions being called here
int main()
{
    clock_t  start, stop;
    double cpu_time;
    int variable;
    string p; 
    int x, i = 0;
    cout << "****Starting the program*****\n"
    "Please enter  'run' to start and anything else to terminate \n";
    cin >> p;


    while(p == "run")
    {
        cout << "\n";
    cout << "Enter a number to call a function \n"
    "(1) A recursive function g(n) elements\n"
    "(2) An iterative funciton g(n) elements\n"
    "(3) A recursive fibonacci function for n elements\n"
    "(4) An iterative fibonacci function for n elements\n";
    "(5) to cancel the program\n";
    cin >> x;

    switch(x)
    {
        case 1 :
        cout << "Running recurssive g(n) function\n";
        cout << "Please enter a number: \n";
        cin >> x; 
        start = clock();
        g(x);
        stop = clock();
        cpu_time = stop - start;
        cout << "Program runs in " << cpu_time << " cpu seconds\n";
        break;

        case 2 : 
        cout << "Running iterative g(n) function for n elements\n";

        break;

        case 3 : 
        cout << "Running Recursive fibonacci function for n elements\n";
        cout << "Please enter a number\n";
        cin >> x;
        start = clock();
        while(i < x)
        {
            cout << " " << fib(i) << endl;
            i++;
        }
        stop = clock();
        cpu_time = stop - start;
        cout << "Function runs in " << cpu_time << " cpu seconds\n";
        break;

        case 4 : 
        cout << "Running iterative fibonacci function for n elements\n";
        cout << "Please enter a number to find the fibonacci sequence iteratively \n";
        cin >> x;
        start = clock();
        fibi(x);
        stop = clock();
        cpu_time = stop - start;
        cout << "The program ran in time " << cpu_time << " cpu seconds\n";
        break;

        case 5 :
        cout << "Ending the program\n";
        return 0;
        break;

    }

}


    return 0;
}