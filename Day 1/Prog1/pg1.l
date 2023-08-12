acc 0(0|1)*1
%%
{acc} printf("String Accepted ");
.+ printf("String not Accepted");
%%
void main(){
printf("Enter the string:");
yylex();
}
