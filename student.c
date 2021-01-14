#include <stdio.h>



// student structure
//struct Student...
struct Student {
  char firstname[50];
  char lastname[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
printf("------Student------\n");
printf("First Name: %s\n", student->firstname);
printf("Last Name: %s\n", student->lastname);
printf("Age: %d\n", student->age);
printf("Student ID: %d\n", student->studentid);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
for (int i = 0; i < num; i++)
{
printStudent(students + i);
}
}


int main()
{

  // an array of students
  //xxx students;
struct Student students[7];
char input[256];

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    printf("Enter first name.\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &students[numStudents].firstname);
   
    printf("Enter last name.\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &students[numStudents].lastname);

    printf("Enter student age.\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &students[numStudents].age);

    printf("Enter student id.\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &students[numStudents].studentid);
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
