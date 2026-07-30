#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
	int rollno;
	char name[30];
	float percentage;
	struct student *next;
}ST;
void stud_add(ST**);
void stud_show(ST*);
void stud_del(ST**hptr);
void stud_del_name(ST**hptr);
void stud_mod_roll(ST**hptr);
void stud_mod_name(ST**hptr);
void stud_mod_perc(ST**hptr);
void stud_save(ST*ptr);
void sort_name(ST *hptr);
void sort_perc(ST *hptr);





