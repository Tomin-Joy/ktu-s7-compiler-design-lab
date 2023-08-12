
%{
#include<stdio.h>
#include<string.h>
int count_key=0;
int count_numbers=0;
int count_identifier=0;
%}

%%
void |
int | 
float | 
char | 
double | 
switch | 
if | 
while | 
do  { count_key++;};
[0-9]* { count_numbers++;};
[a-zA-Z_][0-9a-zA-Z_]* { count_identifier++;};
.|\n   {;}
%%

int main ( int argc,char *argv[] )
{
	if(argc==2)
		yyin=fopen(argv[1],"r");
	else
	{
		printf("\nEnter the input:\n");
		yyin=stdin;
	}
	yylex();
	printf("\nNumber of keywords = %d\n",count_key);
    	printf("\nNumber of numbers = %d\n",count_numbers);
    	printf("\nNumber of identifier = %d\n",count_identifier);
}

int yywrap( )
{
	return 1;
}

