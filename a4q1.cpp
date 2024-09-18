#include<iostream>
int main()
{
    //pointer to character
    char ch1 = 'A';
    char *ptrToChar = &ch1;
    
    //array of 10 integers
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //reference to array of 10 integers
    int (&refToArr)[10] = arr;
    
    //Pointer to an array of character strings
    const char *arr1[4] = {"Hello", "World", "C++", "Programming"};
    const char *(*ptrToArr1)[4] = &arr1;
    
    //Pointer to a pointer to a character:
    char ch2 = 'a';
    char *ptrToChar2 = &ch2;
    char **ptrToPtrToChar2 = &ptrToChar2;
    
    //Constant integer:
     const int cint = 100;
    
    //pointer to constant string
    const int *ptrToConstInt = &cint;
    
    //Constant pointer to an integer:
      int num = 5;
      int *const constPtrToInt = &num;
    
    //Constant pointer to a constant double:
      const double cdouble=65.7;
      const double *const ptrTodouble=&cdouble;
      return 0;
}   