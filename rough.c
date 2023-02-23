#include <stdio.h>

long int su(int n){
    if(n>1){
        return n*su(n-1);
    }
    else{
        return n*1;
    }
}
int main(){
    long int s=su(50);
    printf("%ld", s);
}