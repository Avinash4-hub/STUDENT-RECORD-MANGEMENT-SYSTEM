# STUDENT-RECORD-MANGEMENT-SYSTEM
Student Record Management System is a C programming project designed to organize student records in an efficient way. It provides features such as adding, displaying, searching, modifying, deleting, sorting, saving, and loading records. The project uses a singly linked list and file handling for effective record management.
Student Record Management System

1. Objectives
   ----------------------------------------------------------------
- To develop a Student Record Management System using C programming.
- To manage student records using singly linked lists.
- To implement adding, modifying, deleting, displaying, and sorting student records.
- To store student details in a file using file handling.
- To understand pointers, structures, and dynamic memory allocation.
- 
2.** Abstract**
  --------------------------------------------------------------------
The Student Record Management System is a menu-driven application developed using C. It uses singly linked lists to manage student records dynamically and file handling to save student information. The system supports adding, modifying, deleting, displaying, and sorting student records based on name and percentage. Each record contains a roll number, student name, and percentage. The project demonstrates the practical application of data structures, pointers, dynamic memory allocation, and file operations in C.

**3. Problem Identification**
   ------------------------------------------------------------------
- Manual student record management is time-consuming.
- Updating and deleting student records can be difficult when records are maintained manually.
- Sorting student records by name or percentage requires additional effort.
- Student information needs to be stored in a file for future reference.
- 
**4. Proposed Method**
  ------------------------------------------------------------------
- Develop a menu-driven application using C.
- Use singly linked lists to manage student records dynamically.
- Implement adding and deleting student records.
- Modify student details using roll number, name, or percentage.
- Display all student records in a tabular format.
- Sort student records by name or percentage.
- Save student information in data.txt using file handling.
  
- 
**5. Software Requirements**
  ----------------------------------------------------------------
- Programming Language: C
- Compiler: GCC
- Operating System: Linux or Windows
- Data Structure: Singly Linked List
- Storage: Text File
- Build Tool: Make file
- 
**6. System Architecture**

  ```text
             +------------------------+
             |    Start Application   |
             +------------------------+
                        |
                        v
             +------------------------+
             |       Main Menu        |
             +------------------------+
                        |
                        v
             +------------------------+
             |   Select Operation     |
             +------------------------+
                        |
       +----------------+----------------+
       |                |                |
       v                v                v
+--------------+ +--------------+ +--------------+
| Add Student  | | Modify       | | Delete       |
| Record       | | Student      | | Student      |
+--------------+ +--------------+ +--------------+
       |                |                |
       +----------------+----------------+
                        |
       +----------------+----------------+
       |                |                |
       v                v                v
+--------------+ +--------------+ +--------------+
| Show Records | | Sort Records | | Save Records |
|              | | By Name or   | |              |
|              | | Percentage   | |              |
+--------------+ +--------------+ +--------------+
       |                |                |
       +----------------+----------------+
                        |
                        v
             +------------------------+
             |    Singly Linked List  |
             +------------------------+
                        |
                        v
             +------------------------+
             |      File Handling     |
             +------------------------+
                        |
                        v
             +------------------------+
             |       data.txt         |
             +------------------------+
`

****7. Software Components****
----------------------------------------------------------------
- C Programming: Implements the application logic.
- Singly Linked Lists: Dynamically manage student records.
- Structures: Store roll number, name, percentage, and the next-node pointer.
- Pointers: Connect linked-list nodes and access student records.
- Dynamic Memory Allocation: Creates student nodes using malloc().
- File Handling: Saves student records to data.txt.
- Sorting Algorithms: Uses bubble sort to display records sorted by name or percentage.
- Makefile: Automates compilation using GCC.
- 
**8. Working Principle**
  ---------------------------------------------------------------
1. The application displays the main menu.
2. The user selects an operation.
3. Student records are created and managed using a singly linked list.
4. Records can be added, modified, deleted, and displayed.
5. Student records can be sorted by name or percentage.
6. The user can save the records to data.txt.
7. On exit, the user can choose to save the records or exit without saving.


9. Key Features****
    ------------------------------------------------------------
- Add new student records.
- Delete records using roll number or name.
- Modify records using roll number, name, or percentage.
- Display all student records.
- Sort student records alphabetically by name.
- Sort student records by percentage.
- Assign roll numbers automatically when adding new records.
- Save student details to a text file.

- **10. Advantages****
      ----------------------------------------------------
- Simple and user-friendly menu-driven interface.
- Dynamic management of student records.
- Easy modification and deletion of records.
- Sorting based on name and percentage.
- Reduced manual effort in record management.
- Demonstrates practical linked-list and file-handling concepts.
- 
  **11. Applications**
  ---------------------------------------------------------
- Student record management in educational institutions.
- Maintaining basic student academic information.
- Student data organization and sorting.
- Learning C programming and data structures.
- Understanding dynamic memory allocation and file operations.
- 
- 
  12. Future Scope**
  -------------------------------------------------------
- Automatically load saved records when the application starts.
- Add student search functionality.
- Implement stronger input validation.
- Support names containing spaces.
- Add academic performance reports.
- Implement record backup and recovery.
- Develop a graphical user interface.
- Integrate a database such as MySQL or SQLite.
- 
 ** 13. Conclusion**
  --------------------------------------------------------------
The Student Record Management System demonstrates the use of C programming, singly linked lists, pointers, dynamic memory allocation, sorting algorithms, and file handling. It provides essential operations for managing student information and serves as a foundation for developing more advanced student management applications.
