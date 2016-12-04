#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){

int t,i,j,n=0;
char *s;
char *string;
s=(char *)malloc(10);
	
	 
string=(char *)malloc(1000000);

printf("Enter the input of t:under 100:");
scanf("%d",&t);
if(t<=100)
{
	for(int k=0;k<t;k++){
		printf("Enter the string");
	gets(s);
	gets(s);
	  
		 unsigned  int g=1000000/strlen(s);
		 printf("%d",g);
		  
		  for(int l=0;l<g;l++){
		  	strcat(string,s);
		  	
		  }
		  printf("%s",string);
		  
		  	
          printf("Enter the i and jth value:");
          scanf("%d%d",&i,&j);
          for(int h=i;h<=j;h++){
          	
          	if(string[h]=='B')
          	n++;
          	
        
          	
          	
          }
          
            realloc(string,0);
            string=(char *)malloc(1000000);
          
	printf("%d \n",n);


	
		
		
	}

	
}
else{
	
printf("T limit exceed");	
}















}




