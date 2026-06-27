//write a program to create student record management system.
#include<stdio.h>
#include<string.h>
#define MAX_STUDENTS 100
//define the student structure
struct student {
    int rollNumber;
    char name[50];
    float marks;

};
int main()
{
    struct student students[MAX_STUDENTS];
    int studentCount=0;
    int choice;
    while(1)
    {
        printf("\n===student record management system===\n");
        printf("1.add student record\n");
        printf("2.display all records\n");
        printf("3.search student by roll number\n");
        printf("4.exit\n");
        printf("enter your choice(1-4):");
        scanf("%d",&choice);
        if(choice==4){
            printf("exiting program.goodbye!\n");
            break;
        }
        switch(choice)
        {
            case 1://add student
            if("studentCount < MAX_STUDENTS")
            {
                printf("\nenter roll number:");
                scanf("%d",&students[studentCount].rollNumber);

                printf("enter name(no spaces):");
                scanf("%s",students[studentCount].name);

                printf("enter marks:");
                scanf("%f",&students[studentCount].marks);
                studentCount++;
                printf("record added successfully\n");
                }
                else
                {
                    printf("\nDatabase full! cannot add more students.\n");
                }
                break;
            case 2://display record
            if(studentCount==0)
            {
                printf("\nNo records found!\n");
            }
            else
            {
                printf("\n---Student records ---\n");
                printf("%-10s %-20s %-10s\n");
                for(int i=0;i<studentCount;i++)
                {
                    printf("%-10d %-20s %-10.2f\n",students[i].rollNumber,students[i].name,students[i].marks);
                }
            }
            break;
            case 3://search record
            if(studentCount==0)
            {
                printf("\nNo records available to search.\n");
            }
            else
            {
                int searchRoll;
                int found=0;
                printf("\nEnter roll number to search:");
                scanf("%d",&searchRoll);
                for(int i=0;i<studentCount;i++)
                {
                    if(students[i].rollNumber==searchRoll)
                    {
                        printf("\nRecord found!\n");
                        printf("Roll number:%d\n",students[i].rollNumber);
                        printf("Name:%s\n",students[i].name);
                        printf("Marks:%.2f\n",students[i].marks);
                        found=1;
                        break;

                    }
                }
                if(!found)
                {
                    printf("\nStudent with Roll number %d not found.\n",searchRoll);
                }
            }
            break;

            default:
            printf("\nInvalid choice!please enter a number between 1 and 4.\n");
        }


    }
    return 0;

}