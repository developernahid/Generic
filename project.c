#include <stdio.h>
#include <string.h>
//#include <conio.h>
#define MAX_STUDENTS 50

struct Student {
    char name[50];
    long long int id;
    float marks[5];
    float cg;
    int section;
    int attendence;
};

struct Student studentList[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        printf("  Error: Maximum number of students reached!\n");
        return;
    }

    struct Student newStudent;

    printf("  Enter the student's name: ");
    scanf("%s", newStudent.name);

    printf("  Enter the student's ID number: ");
    scanf("%lld", &newStudent.id);

    printf("  Enter the student's Section: ");
    scanf("%d",&newStudent.section);

    newStudent.attendence=0;

    studentList[numStudents++] = newStudent;

    printf("  Student record added successfully!\n");
}

//Teacher Option
void teacherOption(){
    long long int  op_id;
    printf("  Enter ID: ");
    scanf("%lld",&op_id);
     for (int i = 0; i < numStudents; i++) {
        if (op_id==studentList[i].id)
        {
            //printf("  Enter attendence %lld ID: ",studentList[i].id);
            //scanf("%d",&studentList[i].attendence);
            printf("  Enter CGPA %lld ID: ",studentList[i].id);
            scanf("%f",&studentList[i].cg);
        }
        else{
        printf("  ID %lld not found!! Please enter a correct ID \n",op_id);
        }
        break;
      }
//     printf("  Enter marks for 5 subjects:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("  Subject %d: ", i + 1);
//         scanf("%f", &studentList[i].marks[i]);
//     }

//     // Calculate CGPA as an average of marks for 5 subjects
//     Avg = 0;
//     for (int i = 0; i < 5; i++) {
//         studentList[i].marks[i]+= studentList[i].marks[i];
//     }
// Avg= studentList.marks[i]/5;

}

void displayStudents() {
    if (numStudents == 0) {
        printf("  No students in the record!\n");
        return;
    }

    printf("  Student List:\n");
    printf("  ============================================\n");
    printf("  Name\t\tID Number\tSection\t  CGPA\n");
    printf("  ---------------------------------------------\n");

    for (int i = 0; i < numStudents; i++) {
        printf("  %s\t\t%lld\t\t%d\t  %.2f\n",studentList[i].name,studentList[i].id,studentList[i].section,studentList[i].cg);
    }

printf("  ============================================\n");
}

void searchBySection(){
    int sec;
    printf("  Enter section:");
    scanf("%d:",&sec);
    printf("  ============================================\n");
    printf("  Name\t\tID Number\tSection\t  CGPA\n");
    printf("  --------------------------------------------\n");
    for (int i = 0; i < numStudents; i++) {
        if(sec==studentList[i].section){
        printf("  %s\t\t%lld\t\t%d\t  %.2f\n",studentList[i].name,studentList[i].id,studentList[i].section,studentList[i].cg);
    }
    }
    printf("  ============================================\n");
    }
void searchByID(){
        long long int sid;
    printf("  Enter ID:");
    scanf("%lld:",&sid);
    printf("  ===================================================\n");
    for (int i = 0; i < numStudents; i++)
    {
        if (sid==studentList[i].id)
        {
            printf("  Student name:  %s     Section:  %d   CGPA: %.2f \n",studentList[i].name,studentList[i].section,studentList[i].cg);
        }
    }
    printf("  ===================================================\n");
}


void deleteStudent() {
    long long int idToDelete;
    int found = 0;

    if (numStudents == 0) {
        printf("  No students in the record!\n");
        return;
    }

    printf("  Enter the ID number of the student to delete: ");
    scanf("%lld", &idToDelete);

    // Find the student with the given roll number
    for (int i = 0; i < numStudents; i++) {
        if (studentList[i].id == idToDelete) {
            // Shift the elements to the left to overwrite the student to delete
            for (int j = i; j < numStudents - 1; j++) {
                studentList[j] = studentList[j + 1];
            }
            found = 1;
            break;
        }
    }

    if (found) {
        numStudents--;
        printf("  Student with roll number %lld deleted successfully!\n",idToDelete);
    } else {
        printf("  Student with roll number %lld not found!\n", idToDelete);
    }
}


int main() {
    system("color 0B");
    int choice;

    printf("\n  Student Management System\n");
    printf("  =========================\n");

    do {
        printf("\n  Option:\n");
        printf("  1. Add Student\n");
        printf("  2. Display Students\n");
        printf("  3. Search Student by Section\n");
        printf("  4. Search Student by ID\n");
        printf("  5. Teacher Option\n");
        printf("  6. Delete Student\n");
        printf("  7. Exit\n");
        printf("  Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
            searchBySection();
             break;
               case 4:
                searchByID();
             break;
            case 5:
            teacherOption();
            break;
            case 6:
            deleteStudent();
            break;
            case 7:
                printf("  Exiting...\n");
                break;
            default:
                printf("  Invalid choice! Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}
