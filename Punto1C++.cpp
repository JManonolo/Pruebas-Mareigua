#include <iostream>
using namespace std;

int main(void){
    // Your code here!
int i;
 
for(i=1; i<=100; i++)
{
 
if(i % 5 ==0 && i% 3 ==0){
    printf("Mareigua\n");
}
else if(i%5==0){
    printf("Igua\n");
}

else if(i%3==0){
    printf("Mare\n");
}
else{
printf( "%d\n", i);
}
}
}
