#include<stdio.h>
#include<string.h>
char revstr();
char concat();
char palidrom();
char strcopy();
char lenofstr();
char freqofstr();
char vowcon();
int spacedigit();

void main()
		
{
	char ch;
	
	do
	{
		printf("........WELCOME TO MAIN DROPBOX.......\n\n");
		printf("1. Reverse a string\n");
		printf("2. Concatenation\n");
		printf("3. Palindrome\n");
		printf("4. Copy a string\n");
		printf("5. Length of the string\n");
		printf("6. Frequency of character in string\n");
		printf("7. Find number of vowels and consonants\n");
		printf("8. Find number of blank spaces and digits\n");
		
		int i,j;
		
		printf("\nEnter your choice number : ");
		scanf("%d",&i);
			
	switch(i)
	{
		case 1 :	
			revstr();
			break;
			
		case 2 :
		  concat();
		  break;
		  
		case 3 :
			palidrom();
			break;
			
		case 4 :
			strcopy();
			break;
			
		case 5 :
			lenofstr();
			break;
			
		case 6 :
			freqofstr();
			break;
				
		case 7 :
			vowcon();
			break;
			
		case 8 :
    		spacedigit();
    		break;
    			
		default:
   			printf("enter the valid digit");		   		
    }
    printf("\nDo you want to continue pree (y & n) : ",ch);
    printf("\n");
    ch=getch();
	}
	while(ch == 'y'  || ch == 'Y');
}

	//reverse a string.......	

char revstr()
{
	char name[10];
	int i,j,l=0;
	
	printf("\n.....Enter the name and display this name in reverse.....\n");
		
	printf("\nenter name : ");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		l=l+1;
	}
	printf("Reverce this name is : ");
		for(i=i-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	
}
	// Concatenation.....
	
char concat()
{
	char name[10],surname[10];
	
	printf("\n\n.....Enter two names and display concatenation of those two names.....\n");
		
	printf("\nenter name : ");
	scanf("%s",name);
	
	printf("enter surname : ");
	scanf("%s",surname);
	
	printf("concatenation this name is : ");
	
	strcat(name,surname);
	
	printf("%s",name);	
}
	//	Palindrome..........
	
char palidrom()
{
	char name[10],d,c;
	int i,j,l=0;
	
	printf("\n\n.....Enter the name and display this name in reverce and check this name is Palindrome or not.....\n");
		
	printf("\nenter name : ");
	scanf("%s",name);
	
	printf("Check this word : ");
	
	for(i=0;name[i]!='\0';i++)
	{
		l=l+1;
		
		printf("%c",name[i]);
		d=name[i];
	}	
		for(i=i-1;i>=0;i--)
	{
		c=name[i];
	}
	if(d==c)
	{
		printf("\nWord is palidrome");
	}
	else
	{
		printf("\nWord is not palidrome");
	}
}

	// Copy a string.......
	
char strcopy()
{
	char name[10],sub[10];
	
	printf("\n\n.....Enter the name and display copy this name.....\n");
	
	printf("\nenter name : ");
	scanf("%s",name);
	
	printf("Copy this name : ");
	
	strcpy(sub,name);
	
	printf("%s",sub);	
}
	// Length of the string......
	
char lenofstr()
{
	char name[10];
	int l;
	
	printf("\n\n.....Enter the name and find the Length of this name.....\n");
	
	printf("\nenter the name : ");
	scanf("%s",&name);
		
	l=strlen(name);
	printf("length of this name is : %d",l);		
}
	// Frequency of character in s string....
	
char freqofstr()	
{
	char name[10],n;
	int i,j,k,count=0,repeat=0;
	
	printf("\n.....Enter the name and find the frequency of this name.....\n");
	
	printf("enter the name : ");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		
		count=0;
		n=name[i];
		
		for(j=0;name[j]!='\0';j++)
		{
			if(n==name[j])
			{
				count++;
			}
		}
		repeat=0;
		for(k=i;k>-1;k--)
		{
			if(name[k]==name[i])
			{
				repeat++;
			}
		}
		if(repeat>1)
		{
		}
		else
		{
			printf("\n %c = %d",n,count);
		}
	}
}

	//	Find number of vowels and consonants..........
	
char vowcon()
{
	char name[10];
	int i,c1=0,c2=0;
	
	printf("\n\n.....Enter the name and find out how many constants latter and how many vowels latter of this name.....\n");
	
	printf("\nenter the name : ");
	scanf("%s",&name);
	
	printf("check bellow latter");
	
	for(i=0;name[i]!='\0';i++)
	
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		{
			c1++;
			
		}
		else
		{
			c2++;
			
		}			
	}
	printf("\nvowels is %d",c1);
	printf("\nconstants is %d",c2);
}

	// Find number of blank spaces and digits....
	 
int spacedigit()
{
	char name[30];
	int i,d=0,c=0;
	
	printf("\n\n.....Enter the name and find out how many blank space and how many latter of this name.....\n");
	
	printf("\nenter the name : ");
	scanf("%s",&name);
	
	
	for(i=0;name[i]!='\0';i++)
	{
	
		if(name[i]==32)
		{
			c++;
		}
	}
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>'0' && name[i]<'9')
		{
			d++;
		}
	}
	printf("\nspace is %d",c);
	printf("\ndigit is %d",d);
	return 0;
}

