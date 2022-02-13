#include<stdio.h>
#include <stdio.h>  

void input_string(char a)
{
  printf("enter a string :");
  fgets(a);
}
 void str_reverse(char a,char *reversea)
{  
   char temp;  
    int i, left, right, len;  
   
    scanf( "%s", &str);  
    len = strlen(str);
    left = 0;  
    right = len - 1;
    
    for (i = left; i <right; i++)  
    {  
        temp = str[i];  
        str[i] = str[right];  
        str[right] = temp;  
        right--;  
    }  
   
    char *reversea;
    printf("reversea value:");
    gets(reversea);
    if (*reversea=='y')  
    printf (" The reverse of the original string is: %s ", a);
}  
void output(char a,char *reversea)
{
  printf("reverse of a string is",a);
}
void main()
{
  char a[50],*reverse;
  input_string(a[50]);
  str_reverse(a[50]);
  output(a[50],str_reverse);

}