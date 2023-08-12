%{
#include<stdio.h>
int n;
%}
%%
[0-9]+ {n=atoi(yytext);
	if(n%2==0) 
		printf("Even");
	else 
		printf("Odd");}
.+ printf("Invalid Input");
%%
int main(){
	printf("Enter a Number : ");
	yylex();
	return 0;
}
