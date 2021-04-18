#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int generate_number(int n)
{
	srand(time(NULL));
	return rand()%n;
}
main()
{
	char name[20];
	int random,in,choose,player=1,computer=1;
	int i=1;
	clrscr();
	// getting name of player
	printf("What is your name?\n");
	scanf("%s",&name);

	//player turn

while (i<5)
{
	printf("%s turn:\n",name);
	printf("type 1 for rock ; 2 for scissors ; 3 for paper\n");
	scanf("%d",&choose);
	if (choose == 1)
	{
		printf("rock\n");
	}
	if (choose == 2)
	{
		printf("scissors\n");
	}
	if (choose == 3)
	{
		printf("paper\n");
	}

	// computer
	random = generate_number(1);
	printf("computer's turn:\n");
	if (random == 0)
	{
		printf("paper\n");
		in = 0;

	}
	if (random == 1)
	{
		printf("scissors\n");
		in = 1;
	}
	if (random == 2)
	{
		printf("rock\n");
		in = 2;
	}
	// paper
	if (in == 0 && choose == 1)
	{
		printf("computer wins\n");
		computer++;
	}
	if (in == 0 && choose == 2)
	{
		printf("%s wins\n",name);
		player++;
	}
	if (in == 0 && choose == 3)
	{
		printf("no one wins\n");
	}

	// scissor
	if (in == 1 && choose == 1)
	{
		printf("%s wins\n",name);
		player++;
	}
	if (in == 1 && choose == 2)
	{
		printf("no one wins\n");
	}
	if (in == 1 && choose == 3)
	{
		printf("computer wins\n");
		computer++;
	}
	// rock
	if (in == 2 && choose == 1)
	{
		printf("no one wins\n");
	}
	if (in == 2 && choose == 2)
	{
		printf("computer wins\n");
		computer++;
	}
	if (in == 2 && choose == 3)
	{
		printf("%s wins\n",name);
		player++;
	}
 i++;
}
	if (player==3)
	{
		clrscr();
		printf("%s wins the match!\n",name);
	}
	if (computer==3)
	{
		clrscr();
		printf("sorry, you lost the match");

	}
	getch();

}