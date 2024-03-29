//03.  Write a program find whether a number is a composite number
#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main(){
    int number,result;
    number=input_number();
    result=is_composite(number);
    output(number,result);
    return 0;
}
int input_number(){
    int num;
    printf("enter the composite number");
    scanf("%f",&num);
    return num;
}
int is_composite(int n){
    int i ,factors=0;
    for(i=1;i<=n;i++){
        if(n%i == 0){
            factors++;
        }
    }
    if (factors > 2){
        return 1;
    }
    return 0;
}
void output(int n, int result){
    if(result==1){
        printf("%d is a composite numbers\n",n);  
    }
    else{
        printf("%d is not a composite number\n",n);
    }
}
