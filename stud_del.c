#include"student.h"
void stud_del(ST**hptr)
{      
	ST*temp=*hptr;
	ST*prev=NULL;
	int num;
	printf("enter the rollno\n");
	scanf("%d",&num);
	while((temp!=NULL)&&(temp->rollno!=num))
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
	printf("rollno number is not found\n");
	return;
	}
	if(temp==*hptr)
	*hptr=temp->next;
	else
	    prev->next=temp->next;
	ST*last=temp;
	while(last!=NULL)
	{
		last->rollno=last->rollno-1;
		last=last->next;
	}

	free(temp);
	temp=NULL;
}
void stud_del_name(ST**hptr)
{
    char name[20];
    ST*temp=*hptr;
    int found=0;
	if(*hptr==NULL)
	{
		printf("No records found\n");
			return;
	}
	printf("enter the name\n");
	scanf("%s",name);
	 printf("\n +----------+----------------------+------------+\n");
         printf(" | Roll No  | Name                 | Percentage |\n");
         printf(" +----------+----------------------+------------+\n");
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0)
		{
		    printf(" | %-8d | %-20s | %10.2f |\n",temp->rollno,temp->name,temp->percentage);
		    found++;
		}
		temp=temp->next;
	}
	 printf(" +----------+----------------------+------------+\n");
	if(found==0)
		printf("name is not available\n");
	else
	stud_del(hptr);
}	




