#include <iostream>  
using namespace std;  
  
class Rectangle { // created a class Rectangle  
private:  
    int length; // data member as length of rectangle  
    int breadth; // data member as breadth of rectangle  
  
};  
  
void fun() // the function to indicate the problem with normal pointer   
{  
      
    Rectangle* p = new Rectangle(); // Create a dynamic object p   
}  
  
int main()  
{  
    // Infinite Loop  
    while (1) { // Run an infinite loop that will allocate p   
        fun();  
    }  
}  
