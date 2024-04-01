#include<iostream>
using namespace std;
//define the value of pi in this code so i don't need to write many times
#define pi 3.14
//macros(#) locks the value and makes it unchangeable


/* it prevents extra storage in the memory for declaring a new variable.
Using macros, we have specified that the value we are using is a 
part of the compiler code, hence no need to create any extra memory.*/


/*advantages of global variable
when we want to use the same variable with modified value 
in each of them then we can use global variables as the changes 
done in one function are visible in all the others.

It saves time for passing the values by reference in the functions.
*/
