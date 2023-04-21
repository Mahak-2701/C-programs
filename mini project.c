
//create a menu driven program to perform the follwing task.
/*
1 insert student record.
2 display all student records.
3 display rercord by roll no.
4 update student record.
5 delete student record.
6 exit
in this program you have to maintain the following student information roll no ,name,branch,and marks using structure.
*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct student{
	int roll_no;
	char name[30];
	char branch[20];
	int marks;
};
int main(){
	int choice,index=0,i,roll,flag,select;
	struct student s1[100];
	while(1){
	system("cls");
	printf("\t\tstudent record management system\n");
	printf("\tEnter 1 for insert student record\n");
	printf("\tEnter 2 for display  all student record\n");
	printf("\tEnter 3 for display selected student record\n");
	printf("\tEnter 4 to update student record\n");
	printf("\tEnter 5 to delete student record\n");
	printf("\tEnter 6 for exit from student record\n");
	printf("\tEnter choice : ");
	scanf("%d",&choice);
	switch(choice)
	
	{
		case 1:
			printf("Enter roll_no: ");
			scanf("%d", &s1[index].roll_no);
			fflush(stdin);
			printf("Enter student  Name : ");
			gets(s1[index].name);
			printf("Enter student branch : ");
			gets(s1[index].branch);
			printf("Enter student marks: ");
			scanf("%d", &s1[index].marks);
			printf("\n");
			index++;
			printf("Record Inserted !!\n");
			break;
		case 2:
			if(index == 0)
				printf("No Record Available !!\n");
			else
				printf("\t\t Students Record\n");
				printf("\troll_no. \tname \t\t\tbranch \t\tmarks\n");
				for(i=0; i<index; i++){
					printf("\t%d \t\t%s \t\t%s \t\t%d\n", s1[i].roll_no,s1[i].name,s1[i].branch,s1[i].marks);
			    }
			break;
		case 3:
			printf("enter roll_number:");
			scanf("%d",&roll);
			flag=0;
			for(i=0;i<index;i++)
			{
				if (roll==s1[i].roll_no)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			    printf("%d \t %s \t %s \t %d\n", s1[i].roll_no,s1[i].name,s1[i].branch,s1[i].marks);
			else
				printf("invalid roll_number!!!\n");
			break;
		case 4:
			printf("enter roll_number:");
			scanf("%d",&roll);
			flag==0;
			for(i=0;i<index;i++)
			{
				if (roll==s1[i].roll_no)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				printf("update your record\n");
				printf("enter 1 for update student roll no.\n");
				printf("enter 2 for update student name\n");
				printf("enter 3 for update student branch \n");
				printf("enter 4 for update student  marks\n");
				printf("enter 5 for update all student record\n");
				printf("enter choice");
				scanf("%d",&select);
	
			switch(select)
		    {
			 	case 1:
			    	printf("Enter roll_no: ");
			    	scanf("%d", &s1[i].roll_no);
			    	printf("roll_number updated!");
				 	 break;
				case 2:
		       		printf("Enter student  Name : ");
		    		gets(s1[i].name);
		    		printf("name updated");
					break;
				case 3:
		    		printf("Enter student branch : ");
			    	gets(s1[i].branch);
			    	printf("branch updated!");
					break;
				case 4:
					printf("Enter student marks: ");
					scanf("%d", &s1[i].marks);
					printf("marks updated!");
					break;
				case 5:
					printf("Enter roll_no: ");
					scanf("%d", &s1[i].roll_no);
					fflush(stdin);
					printf("Enter student  Name : ");
					gets(s1[i].name);
					printf("Enter student branch : ");
					gets(s1[i].branch);
					printf("Enter student marks: ");
					scanf("%d", &s1[i].marks);
					printf("\n");
					printf(" All Record updated!!!\n");
		    		break;
		}	}
	    	else 
			    printf("invalid roll no !!\n record not found!!\n");
		break;
		case 5:
			printf("\t\tDelete the record\n");
			printf("Enter the roll_no:");
			scanf("%d",&roll);
			flag=0;
				for(i=0;i<index;i++)
			{
				if (flag==0 && roll==s1[i].roll_no)
				{
					flag=1;
					//break;
				}
			}
			if(flag==1)
				{
				    index--;
				    printf("\nRecord deleted\n");
			    }
			    else
				printf("\nrecord not found and invalid roll_no.");
		break;
		case 6:
			exit(1);
	}
	system("pause");
}
	
	return 0;

}
