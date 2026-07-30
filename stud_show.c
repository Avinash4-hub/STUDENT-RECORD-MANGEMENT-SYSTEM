#include "student.h"
void stud_show(ST *ptr)
{
    if(ptr == 0)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    printf("\n +----------+----------------------+------------+\n");
    printf(" | Roll No  | Name                 | Percentage |\n");
    printf(" +----------+----------------------+------------+\n");
    while(ptr!=NULL)
    {
        printf(" | %-8d | %-20s | %10.2f |\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr = ptr->next;
    }

    printf(" +----------+----------------------+------------+\n");
}
