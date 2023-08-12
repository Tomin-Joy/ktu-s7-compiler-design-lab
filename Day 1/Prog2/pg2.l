%{
#include<stdio.h>
%}
ident ([a-z]|[A-Z])([0-9]|[a-z]|[A-Z])*
oper ([+]|[<=]|[>=]|[-]|[==]|[++]|[*]|[/])
%%
if |
else |
printf {printf("%s is a Keyword\n", yytext);}
[0-9]+	{printf("%s is an Number\n",yytext);}
{ident} {printf("%s is an Identifier\n",yytext);}
{oper} {printf("%s is an Operator\n",yytext);}
[;]+ {printf("%s is an Puncuation\n",yytext);}
[\n]+ {ECHO;}
.|\n+ {printf("%s is not a valid token\n",yytext);}
%%
void main()
{
	printf("\n Enter the string : ");
	yylex();
}

