#include "student.h"
void sort_name(ST *hptr)
{
    ST *arr[100];
    ST *temp;
    int i = 0, j;
    ST *swap;

    if(hptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    temp = hptr;

    while(temp != NULL)
    {
        arr[i++] = temp;
        temp = temp->next;
    }

    for(j = 0; j < i-1; j++)
    {
        for(int k = 0; k < i-j-1; k++)
        {
            if(strcmp(arr[k]->name, arr[k+1]->name) > 0)
            {
                swap = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = swap;
            }
        }
    }

    printf("----------------------------------------\n");
    printf("%-10s%-20s%-10s\n","RollNo","Name","Percentage");
    printf("----------------------------------------\n");

    for(j = 0; j < i; j++)
    {
        printf("%-10d%-20s%-10.2f\n",
                arr[j]->rollno,
                arr[j]->name,
                arr[j]->percentage);
    }

    printf("----------------------------------------\n");
}
void sort_perc(ST *hptr)
{
    ST *arr[100];
    ST *temp;
    int i = 0, j;
    ST *swap;

    if(hptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    temp = hptr;

    while(temp != NULL)
    {
        arr[i++] = temp;
        temp = temp->next;
    }

    for(j = 0; j < i-1; j++)
    {
        for(int k = 0; k < i-j-1; k++)
        {
	    if(arr[k]->percentage > arr[k+1]->percentage)
            {
                swap = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = swap;
            }
        }
    }

    printf("----------------------------------------\n");
    printf("%-10s%-20s%-10s\n","RollNo","Name","Percentage");
    printf("----------------------------------------\n");

    for(j = 0; j < i; j++)
    {
        printf("%-10d%-20s%-10.2f\n",
                arr[j]->rollno,
                arr[j]->name,
                arr[j]->percentage);
    }

    printf("----------------------------------------\n");
}
