#include"student.h"
void stud_save(ST*ptr)
{

	FILE*fs=fopen("data.txt","w");
	if(fs==NULL)
	{
		printf("file is not available\n");
		return;
	}
	while(ptr!=NULL)
	{
		fprintf(fs,"%d %s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	printf("data is saved successfully\n");
	fclose(fs);


}

