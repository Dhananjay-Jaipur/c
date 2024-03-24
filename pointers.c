//pointers - var stores address

#include<stdio. h>
int main()
{
int *ptr;
ptr = &a;
printf("%p\n",ptr);  //add of x
printf("%p\n",&ptr); //add of ptr
printf("%p\n",&x);   //add of x
printf("%d\n",*ptr);

int a[6] = {'a','bc','d'}; //character array
int a[6] = {"a","bc","d"}; //string array
}