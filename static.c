// static

#include <stdio.h>

int main() {

/*VARIABLE - refernce of memory
STATIC VARIABLE - hold their value (memory allocation is static every time same memory allocated)*/

//without static
fun(); 
fun();

//with static
func();
func();

rfun(10);
}



void fun(){
int num = 0;
num++;
printf("%d\n",num);
}

void func(){
static int num = 0; //hold old value
num++;
printf("%d\n",num);
}

int rfun(int n){
static int i=0;
if(i<=n){return i*2;}
i++;
rfun(n);
}