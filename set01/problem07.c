 //7.Write a C program to find sum of all natural numbers until _n_

#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int input_n() {
    int n;
    printf("enter the number");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n) {
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
}
void output(int n, int sum) {
    printf("the sum of natural numbers is %d",n,sum);
}
int main(){
    int n;
    int sum =sum_n_nos(n);
    output(n,sum);
    return 0;
}