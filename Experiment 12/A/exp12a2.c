#include<stdio.h>
#include <time.h>
int main(void){
	clock_t start, end;
	double cpu_time_used;
	start = clock();
    	printf("Hello\n");
    	printf("Hello\n");
    	printf("Hello\n");
    	printf("Hello\n");
    	printf("Hello\n");
  	end = clock();
  	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; 
  	printf("Time taken: %f\n", cpu_time_used);
    return 0;
}

