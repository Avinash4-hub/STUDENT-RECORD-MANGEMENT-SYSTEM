#include"student.h"
int main()
{
	ST*hptr=NULL;
	char op;
	char ch;
	do{
	     printf("|---------------------------------|\n");
             printf("*  **** STUDENT RECORD MENU ****  *\n");
	     printf("|---------------------------------|\n");
	     printf("*     A/a : Add New Record        *\n");
	     printf("|---------------------------------|\n");
             printf("*     D/d : Delete a Record       *\n");
	     printf("|---------------------------------|\n");
             printf("*     S/s : Show the List         *\n");
	     printf("|---------------------------------|\n");
	     printf("*     M/m : Modify a Record       *\n");
	     printf("|---------------------------------|\n");
	     printf("*     V/v : Save                  *\n");
	     printf("|---------------------------------|\n");
             printf("*     T/t : Sort the List         *\n");
	     printf("|---------------------------------|\n");
	     printf("*     E/e : Exit                  *\n");
	     printf("|---------------------------------|\n");
	     printf("Enter Your Choice :");
	     scanf(" %c",&op);
	     switch(op)
	     {
		     case'A':
		     case'a': 
                             printf("Add option is selected\n");
			     stud_add(&hptr);
			     break;
		     case'D':
		     case'd':
			      printf("Delete option is selected\n");
			      printf("R/r : Delete using Roll Number\n");
                              printf("N/n : Delete using Name\n");
                              printf("Enter Your Choice:\n");
			      scanf(" %c",&ch);
		             switch(ch)
			    {	     
                             case'R':
                             case'r':
				     stud_del(&hptr);
			             break;
		             case'N':
			     case'n':
			             printf("delete using name\n");
				     stud_del_name(&hptr);
			             break;
			     default:
			            printf("invalid option\n");
		                    break;
			
			    }	    
			     break;
		     case'S':
		     case's':
			     printf("showing the list\n");
			     stud_show(hptr);
			     break;
		     case'M':
		     case'm':
			     printf("Modify Record is Selected\n");
       			     printf("R/r : Modify using Roll Number\n");
        		     printf("N/n : Modify using Name\n");
        		     printf("P/p : Modify using Percentage\n");
       			     printf("Enter Your Choice: ");
        		     scanf(" %c",&ch);
			     switch(ch)
        		     {
            		      case 'R':
           		      case 'r':
				      printf("modify using rollno\n");
                    		      stud_mod_roll(&hptr);
                   		      break;
            		      case 'N':
            		      case 'n':
				      printf("modify using name\n");
                    		       stud_mod_name(&hptr);
                    		       break;
            		      case 'P':
           		      case 'p':
				       printf("modify using percentage\n");
                   		       stud_mod_perc(&hptr);
                   		       break;
			      default:
				      printf("invalid choice\n");
			              break;
			     }
			     break;

		     case'V':
		     case'v':
			     printf("save option is selected\n");
			     stud_save(hptr);
			     break;
		     case'T':
		     case't':
			     printf("sort option is selected\n");
			     printf("N/n:Sort by name\n");
			     printf("P/p:Sort by percentage\n");
			     printf("enter your choice\n");
			     scanf(" %c",&ch);
			     switch(ch)
			     {
				     case'N':
			             case'n':
					     printf("sort using name\n");
					     sort_name(hptr);
					     break;
				     case'P':
			             case'p':
					     printf("sort using percentage\n");
					     sort_perc(hptr);
					     break;
			     }	     
			     break;
		     case'E':
		     case'e':
			     printf("exit option is selected\n");
			     printf("S/s:Save and exit\n");
			     printf("E/e:exit without saving\n");
			     printf("Enter your choice:\n");
			     scanf(" %c",&ch);
			     switch(ch)
			     {
				     case'S':
			             case's':
					     stud_save(hptr);
					     printf("Thank you\n");
					     break;
				     case'E':
				     case'e':
					     printf("exit without saving\n");
					     printf("Thank you\n");
					     break;
			            default:
					     printf("invalid choice\n");
					     break;

			    }
			     break;
	             default:
			     printf("invalid option\n");
			     break;
	     }
	}while((op!='E')&&(op!='e'));
	
}
	
