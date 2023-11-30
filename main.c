#include<stdio.h>

// num, sum, i (1)
// if i == num then return sum
// sum += 1/i (switch + -) if for i
// return func(num, sum, i+1)




float summation(float num){
    float sum = 1;
    int i = 2.0;
    while(1){
        if(i-1 == num)return sum;
        if(i%2 == 1){
            sum = sum - (1.0/i);
            
        }
        if(i%2 == 0)sum = sum + (1.0/i);
        i= i+1.0;
    }}

int main(void){
    float num;
    scanf("%f", &num);
    if(num == 1) printf("1\n");
    else printf("%f\n", summation(num));
    return 0;
}
