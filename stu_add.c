#include"student.h"
void stud_add(ST**ptr)
{       int rollno;
	ST*temp=(ST*)malloc(sizeof(ST));
	printf("Enter the  name\n");
	scanf("%s",temp->name);
	printf("Enter the percentage\n");
	scanf("%f",&temp->percentage);
	temp->next=0;
	if(*ptr==NULL)
	{
	 *ptr=temp;
	 temp->rollno=1;
	}
	else
	{
		ST*last=*ptr;

	while(last->next!=NULL)
		last=last->next;
	temp->rollno=last->rollno+1;
        last->next=temp;

}
}
