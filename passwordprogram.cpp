#include<stdio.h>
int main()
{
char * string = "Account";
char * string1 = "Instagram";
char *string3;
int length;
while(string[length]!= '\0'  || string1[length]!= '\0')
{
*string3 = *string + *string1;
++length;	
}
puts(string3);
return 0;
}
