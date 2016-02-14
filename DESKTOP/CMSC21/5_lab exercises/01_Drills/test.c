#include <stdio.h>

int main(){

    //char ch = 'B';
    //int c = ( ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) ) && !((ch != 'A' || ch != 'S' || ch != 'D' || ch != 'F'));
    //char a[15] = {'J','u','a','n',' ','d','e','l','a',' ','C','r','u','z','\0'};
    //char ch = 'e';
    //char c = ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    //char c = (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <='Z')) && ((ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') && (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')));
    //char ch = 'e';
    //int c = ((ch>='a' && ch <= 'z') || (ch>= 'A' && ch <= 'Z')) && ch!= 'a' && ch != 'A' && ch != 'e' && ch != 'E' && ch != 'i' && ch != 'I' && ch != 'o' && ch != 'u' && ch != 'U';
    //char a [15] = "Juan dela cruz";
    //char ch = '9';
    //int a = (ch >= '0' && ch <= '9');
    //int a [10 ] = {87, 88, 78, 92, 85, 86, 83, 80, 98, 99} ; 
    //char a = {B};
    //char a[5] = {'A', 'F', 'B', 'B', 'C'};
    //int a [10] = {87, 88, 78, 92, 85, 86, 83, 80, 98, 99} ;
    //float x = 2.4;
    //float y = 2.5;
    //printf("%f==%f\n", 2 * y - y / 2 * x - x, 1.041667);
    //char a[5] = {'A', 'F', 'B', 'B', 'C'};
    //return 1;
    //char ch = 'A';
    //int c = (ch>='A' && ch<='Z');
    //char a[15] = "Juan dela Cruz";
    //char a[15] = "Juan dela Cruz";
    //char ch = 'a';
    //int c = ch>=65 && ch<=90;
    //int c = ch>=48 && ch<=57;
    //int c = (ch>='A'&&ch<='Z');
    //int c = ( ch >= 'A' && ch <= 'Z');
    //int c = (!(ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z'));
    //int c = ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') && (ch != 'a' || ch != 'e' || ch != 'i' || ch != 'o' || ch!= 'u' || ch != 'A' || ch != 'E' || ch != 'O' || ch !== 'U'));
    //int a[] = {87, 88, 78, 92, 85, 86, 83,80,98, 99};
    //int b[10] = {87,88,78, 92, 85, 86, 83,80,98, 99};
    //char a[] = "Juan dela Cruz";
    //char b[15] = "Juan dela Cruz";
    //char a[] = {'A', 'F', 'B', 'B', 'C'};
    //char b[5] = {'A', 'F', 'B', 'B', 'C'};
    //printf("%c", a[4]);
    //printf("%c", b[4]);
    char ch = 'D';
    //int c = ( ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) ) && !((ch == 'A' || ch == 'S' || ch == 'D' || ch == 'F'));
    //int c = ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    int c = ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    printf("%d", c);
}
