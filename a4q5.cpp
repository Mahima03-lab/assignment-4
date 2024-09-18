#include<iostream>
//using int* pointer
void swap1(int* a,int* b)
{
    int temp1=*a;
    *a=*b;
    *b=temp1;
}
//using int& reference
void swap2(int& a,int& b)
{
    int temp2=a;
    a=b;
    b=temp2;
}
int main()
{
    int x=5,y=6,p=7,q=8;
    std::cout<<"Before swap x="<<x<<" y="<<y<<"\n";
    swap1(&x,&y);
    std::cout<<"After swap x="<<x<<" y="<<y<<"\n";
    std::cout<<"Before swap p="<<p<<" q="<<q<<"\n";
    swap2(p,q);
    std::cout<<"After swap p="<<p<<" q="<<q<<"\n";
    return 0;
}