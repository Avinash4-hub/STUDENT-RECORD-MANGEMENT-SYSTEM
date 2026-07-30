#include"student.h"
void stud_mod_roll(ST**hptr)
{
    int num,new_rollno;
    ST*temp=*hptr;

    if(*hptr==NULL)
    {
        printf("no records available\n");
        return ;
    }
    printf("enter the rollno\n");
    scanf("%d",&num);
    while((temp!=NULL)&&(temp->rollno!=num))
    temp=temp->next;
    if(temp==NULL)
    {
    printf("rollno is not found\n");
    return;
    }
    printf("enter the new rollno\n");
    scanf("%d",&new_rollno);
    ST*last=*hptr;
    while((last!=NULL)&&(last->rollno!=new_rollno))
    {
        last=last->next;
    }
    if((last!=NULL)&&(last!=temp))
    {
     printf("rollno is alredy exists you cannot use tha same rollno again\n");
     return;
    }
    temp->rollno=new_rollno;
    
}
void stud_mod_name(ST**hptr)
{
    char name[20];
    int found=0;
    ST*match=NULL;
    ST*temp=*hptr;
    if(*hptr==NULL)
    {
        printf("no records found\n");
        return;
    }
    printf("enter the name for checking\n");
    scanf("%s",name);
    printf("----------------------------------------\n");
    printf("%-10s%-20s%-10s\n","RollNo","Name","Percentage");
    printf("----------------------------------------\n");
    while(temp!=NULL)
    {
    if(strcmp(temp->name,name)==0)
    {
        printf("%-10d%-20s%-10.2f\n",temp->rollno,temp->name,temp->percentage);
        found++;
	match=temp;
    }
    temp=temp->next;
    }
    printf("----------------------------------------\n");
    if(found==0)
    printf("name is not available\n");
    else
{
    char ch;
    char new_name[20];
    float new_percentage;
    if(found > 1)
    {
        int rollno;

        printf("Enter the Roll Number: ");
        scanf("%d",&rollno);

        temp = *hptr;

        while(temp != NULL)
        {
         if(temp->rollno == rollno && strcmp(temp->name,(char*)name)==0)
        break;
            temp = temp->next;
         }

        if(temp == NULL)
        {
            printf("Roll Number not found\n");
            return;
        }
    }
else
    {
        temp = match;
    }

    printf("N/n : Modify Name\n");
    printf("P/p : Modify Percentage\n");
    printf("Enter Your Choice: ");
    scanf(" %c",&ch);

    switch(ch)
    {
        case 'N':
        case 'n':
            printf("Enter New Name: ");
            scanf("%s",new_name);
            strcpy(temp->name,new_name);
            break;

        case 'P':
        case 'p':
            printf("Enter New Percentage: ");
            scanf("%f",&new_percentage);
            temp->percentage = new_percentage;
            break;

        default:
            printf("Invalid Choice\n");
	    break;
    }
}
}  
void stud_mod_perc(ST**hptr)
{
    float percentage;
    int found=0;
    ST*temp=*hptr;
    ST*match=NULL;
    if(*hptr==NULL)
    {
        printf("no records found\n");
        return;
    }
    printf("enter the percentage for checking\n");
    scanf("%f",&percentage);
    printf("----------------------------------------\n");
    printf("%-10s%-20s%-10s\n","RollNo","Name","Percentage");
    printf("----------------------------------------\n");
    while(temp!=NULL)
    {
    if(temp->percentage==percentage)
    {
        printf("%-10d%-20s%-10.2f\n",temp->rollno,temp->name,temp->percentage);
        found++;
	match = temp;
    }
    temp=temp->next;
    }
    printf("----------------------------------------\n");
    if(found==0)
    printf("percentage is not available\n");
else
{
    char ch;
    char new_name[20];
    float new_percentage;
    if(found > 1)
    {
        int rollno;

        printf("Enter the Roll Number: ");
        scanf("%d",&rollno);

        temp = *hptr;

        while(temp != NULL)
	{	
	 if(temp->rollno == rollno && temp->percentage==percentage)
        break;
            temp = temp->next;
	 }

        if(temp == NULL)
        {
            printf("Roll Number not found\n");
            return;
        }
    }
    else
    {
        temp = match;
    }

    printf("N/n : Modify Name\n");
    printf("P/p : Modify Percentage\n");
    printf("Enter Your Choice: ");
    scanf(" %c",&ch);

    switch(ch)
    {
        case 'N':
        case 'n':
            printf("Enter New Name: ");
            scanf("%s",new_name);
            strcpy(temp->name,new_name);
            break;

        case 'P':
        case 'p':
            printf("Enter New Percentage: ");
            scanf("%f",&new_percentage);
            temp->percentage = new_percentage;
            break;

        default:
            printf("Invalid Choice\n");
	    break;
    }
}      
}
