#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	FILE *fc;
	char input;
	int i=0;
	char original[100];
	char copy[100];
	
	printf("original file : ");
	scanf("%s",original);
	printf(" copy file : ");
	scanf("%s",copy);
	
	fp=fopen(original,"r");
	fc=fopen(copy,"w");
	
	while ((input=fgetc(fp)) !=EOF)
	{
		fputc(input,fc);
		i++;
	}
	printf("Copy succeed %i byte  copied",i);

	
	fclose(fp);
	fclose(fc);
	
	return 0;
}
