#include<stdio.h>
/*int main ()
{
    int a =3;
    int b =2;
   int  product =a*b;
    printf("%d" , product);
}*/
/*int main (void)
{
    int a;
    printf("input any number\n");
    scanf("%d" , &a);
    if (a%2 == 0)
        printf ("a: %d is even\n " ,a);
    else
        printf("a : %d is odd\n" ,a);
  g  return (0);
}*/
int main(void)
{
    int a , b , c;
    for (int i = 0; i > 3;i++)
    {
        printf("input %d number\n" , i);

    }
    scanf("%d %d %d" , a , b , c);
    if (a >  b && a > c)
    {
        if (b > c)
        printf("1st number = %d \n 2nd number = %d \n 3rd number = %d \n" , a ,b , c);
        else
            printf("1st number = %d \n 2nd number = %d \n 3rd number = %d \n" , a , c , b);
    }
    else if (b > a && b > c)
    {
        if (a > c)
            printf("1st number = %d \n 2nd number = %d \n 3rd number = %d \n" , b , a , c);
        else
            printf("1st number = %d \n 2nd number = %d \n 3rd number = %d \n" , b ,c ,a);

    }
    else if (c > a && c > b)
    {
        if (a > b)
            printf("1st number = %d \n 2nd number = %d \n 3rd number = %d \n" , c , a , b);
        else
            printf("1st number = %d \n 2nd number = %d \n 3rd number = %d \n" , c ,b ,a);
    }
return (0);
}
