//diff b/w loop

#include<stdio. h>
int main()
{

while(i<=9){
int i=0;
printf("%d ",i);
if(i==5){continue;} //continue = skip 1 itration, here skip i++  
i++
}

for(i=o; i<=9; i++){   // itaration do not depend on body, we khow how many times loop will exicute
if(i==5){continue;}
printf("%d ",i);
}

}