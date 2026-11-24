#include <stdio.h>

int calculateChecksum(int n) {
    if(n<10){
        return n;
    }
    int sum=0;
    while(n>10){
        sum= sum+ (n%10);
    }
    return calculateChecksum(sum);

    }
int main(){
    int id = 9875; 
    
    
    int result = calculateChecksum(id); 

    printf("Transaction ID: %d\n", id);
    printf("Single-Digit Checksum: %d\n", result);

    return 0;
} 