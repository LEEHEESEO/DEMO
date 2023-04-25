#include <stdio.h>

int main()
{
    printf("this program shows the sum of two integers you input\n");
    int a,b;
    printf("please input the first integer\n-->");
    scanf("%d", &a);
    printf("please input the second inteher\n-->");
    scanf("%d", &b);

    int c = a + b; 

    printf("the sum of two integers you input is %d\n", c);

    return 0;

}