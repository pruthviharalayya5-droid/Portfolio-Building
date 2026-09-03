#include<stdio.h>

void greet(const char *name){
    printf("Hello,%s! welcome to our Github portfolio.\n",name);
}

int main(){
    printf("Hello world\n");

    greet("Ada");

    return 0;
}