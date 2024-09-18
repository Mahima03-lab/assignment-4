#include <iostream>
int main()
{
const char* str1 = "We love C++ programming\n";
char str2[100];
char *p = str2;/*name of an array is implicitly converted
to pointer to the first element.*/
while(*p++ = *str1++){}
std::cout << str2;
}
//Here srt1 is pointer to the constant string "We love C++ programming" , str2 is an array of 100 characters and pointer p points to the start of array str2.
// In while loop *p++ = *str1++ copies the current pointed character of str1 to str2 via p.
//*p dereferences the pointer p ,pointing to str2,and p++ advances the pointer to the next position.
//Similarly *str1 dereferences str1 and str1++ advances the pointer to the next position.
//The post-increment operator is used here such that pointers are incremented after assignment.
//The while loop continues until the null character ('\0') is copied from str1 to str2.
//Hence through this loop the whole string of str1 is copied to str2.
//Thus as output where we print str2 we get "We love C++ programming".