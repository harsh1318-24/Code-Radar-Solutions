#include <stdio.h>


int main() {
    char a[100];
    char c[100];
    int b;
    scanf("%s",&a);
    scanf("%d",&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);

    return 0;
}