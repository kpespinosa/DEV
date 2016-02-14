#include<stdio.h>
#include<math.h>


int main(){
	//int n = 2;
    //printf("%d==%d\n", n*(n-1)/2, 1);//1==1

    //M_PI is the variable name for PI constant
    //int r = 2;
    //printf("%f==%f\n", 4*M_PI*r*r, 50.265482);//50.265482==50.265482
    
    //The functions involved are: sqrt(x), sin(x), cos(x)
//    int a = 2;
//    int r = 2;
//    printf("%f==%f\n", sqrt((r*(cos(a))*(cos(a))) + (r*(sin(a))*(sin(a)))), 1.414214);

//    float x = 2.4;
//    float y = 2.5;
//
//    printf("%f==%f\n", (2*y-y)/(2*x-x), 1.041667);
//    
//	return 1;
    

//    printf("%d==%d\n", 5%2, 1);
    
//    int i = 7, j = 8, k = 9;
//    
//    printf("%d ", (i = 7) || (j = k));
//    printf("%d %d %d", i, j, k);
//    int a[2];
//    int b[2];
    char ch = 'A';
    char x = !((ch != 'A' || ch != 'S' || ch != 'D' || ch != 'F'));
    int b = ( ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) ) && !((ch != 'A' || ch != 'S' || ch != 'D' || ch != 'F')) ;
    printf("%d..%d", b, x);
}


