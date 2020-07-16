#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include "sum.h"

int main(int argc, char* argv[]){
	FILE *src1, *src2;;
	int i=0, j=0;

	src1=fopen(argv[1], "rb");
	fread(&i, sizeof(int), 1, src1);
	
	src2=fopen(argv[2], "rb");
	fread(&j, sizeof(int), 1, src2);

	byte_order_sum(i, j);
	
	fclose(src1);
	fclose(src2);
	return 0;
}
