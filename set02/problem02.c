//2 Write a program to find if a triangle is scalene.
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
    int side1,side2,side3,isscalene;
   
    side1=input_side();
    side2=input_side();
    side3=input_side();
    isscalene=check_scalene(side1,side2,side3);
    output(side1,side2,side3,isscalene);
    return 0;
}
int input_side(){
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
    

