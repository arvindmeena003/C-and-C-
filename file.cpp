#include<stdio.h> 
#include<string.h> 
int main( )  
{  
FILE *fp ;  
char s[60] ;  
fp = fopen("file_handle.text","w") ;  
 
scanf("%s",&s);
fputs(s,fp); 
fclose (fp ) ;  
return 0;
}  
