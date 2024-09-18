#include<iostream>
#include"a4q4_1.cpp"
int main()
{
   char str[]="India vs Pakistan ,Asia Cup 2023";//rectified
   str[6]='V';
   std::cout<<str<<std::endl;
   
   double darr[]={2.3,4.5,5.5};
   *(darr+3)=6.5;//adds 6.5 to the list
   for(int j=0;j<4;j++)
   std::cout<<darr[j]<<std::endl;
   
   extern float f;
   float g=f*100.5;//rectified 
   
   short int i=89;
   void *v=&i;
   short int *ip= static_cast<short int*>(v);//rectified
   std::cout<<"integer="<<*ip;
   return 0;
}

//Here in C++ the string literals are immutable as a result we cannot modify the string pointed by str in this case by str[7]='V'.to get correct result we need to define string array.

//Again in extern float f we get error as we are declaring f as float but not mentioning the file where it is defined.To get correct result we need to include the file where it is defined. 


//here i is defined as short int but typecasting to int leads to garbage value ,as in case of typecasting viod we need to typecast it into same datatype as the variable.