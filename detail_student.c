// enquiring details of student

#include<stdio.h>
int main()
{
// declaring char for variables provides memory for one letter in a word  declare 
// by declaring array provides space for group of letters

	char name[40],rollnum[50],branch[30],college[20];
	printf("Enter Student Name:");
	
	// already u allocated memory in declaration u no need to write as &name for providing memory
	
	scanf("%s",name);
	printf("Enter RollNumber:");
	scanf("%s",rollnum);
	printf("Enter branch:");
	scanf("%s",branch);
	printf("Enter college:");
	scanf("%s",college);
	printf("\t\t\t\t___STUDENT DETAILS___\n");
	printf("Name:%s\n",name);
	printf("RollNumber:%s\n",rollnum);
	printf("Branch:%s\n",branch);
	printf("College:%s\n",college);
	return 0;
	
}
