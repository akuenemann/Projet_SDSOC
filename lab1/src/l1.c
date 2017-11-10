#include <stdio.h>
#include <stdlib.h>

#define N 1024


int dma(int s[N], int d[N],int count)
{
	int i;
	for(i=0;i<count;i++)
		d[i]=s[i];
	return count;
}


int main(int argc, char *argv[])
{
	int *source;
	int *dest;
	int ret,i;

	source=(int*) malloc(sizeof(int)*N);
	dest =(int*) malloc(sizeof(int)*N);

	for(i=0;i<N;i++){
		source[i]=i;
	}
	ret=dma(source, dest,N);
	printf("DMA did %d transactions\n\r",ret);
	free(source);
	free(dest);
	return 0;
}
