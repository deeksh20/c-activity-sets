//2 Write a program to find if a triangle is scalene.
#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
    int a,b,c,isscalene;
   
    a=input_side();
   b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
int input_side() {
    int side;
    printf("enter the length of side");
    scanf("%d",&side);
    return side;
}
int check_scalene(int a, int b, int c){
    return (a!=b && b!=c && c!=a);
}
void output(int a, int b, int c, int isscalene){
    printf("the triangle with side %d,%d and %d is scalene\n",a,b,c);
}
    

