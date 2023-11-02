#include<stdio.h>
#include<string.h>
int main()
{
	char word[6]={"tennis"};
	char b='_';
	char d[10];
	int i,count=0,w=0;
	printf("*********************************************************************************\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("\t\t\tHANGMAN GAME\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("*********************************************************************************\n");
	printf("You have only 5 guesses\n");
	for(i=0;i<6;++i){
		printf(" %c ",b);
		d[i]=b;
	}
		char a;
	while(count<5){
		int n=0;
		printf("\nGuess the letter ");
		a=getche();
		printf("\n");
		for(i=0;i<6;++i){
		if(a==word[i])
		{
			d[i]=a;
			++n;
			++w;
		}
	}
    printf("\n");
		printf("##########################################\n");
	for(i=0;i<6;++i){
		printf(" %c ",d[i]);
	}
		printf("\n##########################################\n");
		if(n<1){
			printf("\nYou have %d more guesses",4-count);
		}
		++count;
	}
if(w>5){
	printf("\nHurray!\n");
	printf("You guessed the word.\n");
	printf("You won.\n");
	printf(">   <");
	printf("\n  U  ");
}
else{
	printf("\n");
	printf(" |\n");
	printf(" O\n");
	printf(" |\n");
	printf("^ ^ \n");
		printf("\n");
	printf("\nBetter luck next time.\n");
	printf(">     <\n");
    printf("..    ..\n");
	printf(".   -  .\n");
}
}