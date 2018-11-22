#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[100]="Programming course";

	int j;
	
	while ( src[j]!='\0')
	{
		j++;
	}

	
	
	printf(" %s의 개수는!!! : %i \n",src,j);
	printf("%i", strlen(src));
	//strcpy(dst,src);
	return 0;
}
