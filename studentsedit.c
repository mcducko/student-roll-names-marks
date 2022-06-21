#include <stdio.h>
struct student {
char firstName[50];
int roll;
float marks;
} s[5];
/*THIS PROGRAM TAKES THE INFORMATION OF STUDENTS, IE THEIR NAME AND MARKS FOR DIFFERENT ROLL CLASSES. THERE ARE CURRENTLY 5 ROLLS AND TWO STUDENTS PER ROLL*/
int main () {
int i;
FILE *fptr;
//opening file for writing IN APPEND MODE INSTEAD OF WRITING MODE because writing mode erases the file whenever you run the program again
 fptr = fopen("studentsinformation(r/n/m).txt", "a");
printf ("Enter information of students:\n");
// FOR LOOP BELOW CHANGES FOR DEVELOPMENT AND TESTING ADJUST AS NEEDED DEFAULT WHEN SENT OUT IS 5|THIS CONTROLS THE AMOUNT OF ROLLS NOT THE STUDENTS
//changed second info store/displays variable to [o] from [i] edit:found that o is not a recognised variable and therefore does not work, bug still occurs bug:storing twice but not displaying twice
 // storing information
for (i =0; i < 2; ++i) {
s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
}
printf("Displaying Information:\n\n");
// displaying information
for (i = 0; i < 2; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
/* for (i =0; i < 2; ++i){ (for loop looping twice)*/
