#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;

	char input[100];
	int i=0;
	char original[100];
	char find_word[100];
	int length;
	
	printf("original file : ");
	scanf("%s",original);
	printf(" word to find : ");
	scanf("%s",find_word);
	
	fp=fopen(original,"r");

	
	while (fgets(input,100,fp) !=NULL)
	{
		if(strncmp(input,find_word,strlen(find_word))==0)
		{
			printf("find a word : %s \n",input);
		 } 

	}

	printf(" \n Search done!");
	


	
	fclose(fp);

	
	return 0;
}
