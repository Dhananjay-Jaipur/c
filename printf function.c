//printf function

#include<stdio.h>

int main()
{
//printf function return num of character
printf("%d\n",printf("hello world"));

int x=5;
int y=10;

// it print 5 spaces (*c return no. of ch) count number of character via spaces
printf("%*c\n",x,'$');

// add 2 no without using + operator
printf("%d\n",x-(-y));
printf("%d\n",x|y);
printf("%d\n",x-(-y));
printf("%d\n",printf("%*c",x,'_'));
printf("%d\n",printf("%*c %*c",x,y,'_','_'));
printf("%d\n",printf("%*c %*c",x,' ',y,' '));

}