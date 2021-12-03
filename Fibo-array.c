#include<stdio.h>
int main()
{
    int num;
    printf("Enter fibo series number : ");
    scanf("%d",&num);
    int a[num];
    a[0] =0;
    a[1] =1;
    for(int j = 2 ; j<num ;j++)
    {
        a[j] = a[j-1] + a[j-2];
    }
    printf("The fibbonacci series is : ");
    for(int k = 0 ;k<num ;k++)
    {
        printf("%d ",a[k]);
    }

    getch();
}
