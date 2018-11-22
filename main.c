#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp=NULL;
	
	fp=fopen("sample.txt","w");
	int i;
	char input[100];
	for (i=0;i<3;i++)
	{
		printf("in put a word : ");
		scanf("%s",input);
		fprintf(fp, "%s\n", input);
	}
	
	fclose(fp);
	
	return 0;
}
