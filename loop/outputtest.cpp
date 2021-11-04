/*
#include<stdio.h>
int main()
{
int a = 5;
a = 1, 2, 3;
printf("%d", a);
return 0;
}
Ans. 1
(Priority for the values assigned to any variable is given from left to
right)*/

/*
#include<stdio.h>
int main()
{
int a;
a = (1, 2, 3);
printf("%d", a);
return 0;
}

Ans. 3
(Priority for the values inside a brackets () assigned to any variable is
given from right to left.)

*/

/*

3.
#include<stdio.h>
int main()
{
int x = 2;
(x & 1) ? printf("true") : printf("false");
return 0;
}
Ans. False
(As & is a unary operator we have to assume all decimal values to
binary(0's and 1's)
210 = 000000102
Now we go for condition (00000010 & 00000001)
Clearly, condition false as it leads to 0 when multiplied.)
4.
#include<stdio.h>
int main()
{
printf("%d",3 * 2--);
}
Ans. 6
(2-- stands meaningless)
5.
#include<stdio.h>
int main()
{
int i = 10;
i++;
i * i;
printf("%d\n",i);
return 0;
}
Ans. 11
(i++ alone store the result in variable i.)
6.
#include<stdio.h>
int main()
{
int a = 1, b = 3, c;
c = b << a;
b = c * (b * (++a)--);
a = a >> b;
printf("%d",b);
return 0;
}
Ans. 36
(c = 0011 << 1
c = 0110
b = 6* (3*(2)--)
b = 6*6
)

*/




