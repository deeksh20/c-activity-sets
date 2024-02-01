#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
float input(){
    float n;
    printf("enter number");
    scanf("%d",&n);
    return n;
}
float square_root(float n) {
  float x_old=1,x_new=n/2;
  float precision =0.000001;
  while(fabs(x_new-x_old)>precision)  
  {
    x_old=x_new;
    x_new=(x_old+n/x_old)/2;
  }
  return x_new;
}
void output(float n, float sqrroot) {
    printf("the squareroot of %f",n);
    printf("is %f",sqrroot);
}

