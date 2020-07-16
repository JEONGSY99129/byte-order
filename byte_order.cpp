#include "sum.h"
#include<netinet/in.h>

void byte_order_sum(int n1, int n2){
	uint32_t num1=(uint32_t)n1;
	uint32_t num2=(uint32_t)n2;

	uint32_t fin1=ntohl(num1);
	uint32_t fin2=ntohl(num2);

	int dec1=(int)fin1;
	int dec2=(int)fin2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", dec1, fin1, dec2, fin2, dec1+dec2, fin1+fin2);

