#include <stdio.h>
struct student {
int roll;
char firstStudent[50];
float firstMarks;
char secondStudent[50];
float secondMarks;
} s[5];
/*THIS PROGRAM TAKES THE INFORMATION OF STUDENTS, IE THEIR NAME AND MARKS FOR DIFFERENT ROLL CLASSES. THERE ARE CURRENTLY 5 ROLLS AND TWO STUDENTS PER ROLL*/
int main () {
int i;
//below is opening file handling stuff to write the outputs to a file as well instead of just displaying it
FILE *fptr;
//opening file for writing IN APPEND MODE INSTEAD OF WRITING MODE because writing mode erases the file whenever you run the program again
 fptr = fopen("studentsinformation(r/n/m).txt", "a");
        printf ("Enter information of students:\n");
// FOR LOOP BELOW CHANGES FOR DEVELOPMENT AND TESTING ADJUST AS NEEDED DEFAULT WHEN SENT OUT IS 5|THIS CONTROLS THE AMOUNT OF ROLLS NOT THE STUDENTS
//changed second info store/displays variable to [o] from [i] edit:found that o is not a recognised variable and therefore does not work, bug still occurs bug:storing twice but not displaying twice [fixed]
 // storing information
for (i =0; i < 2; ++i) {
s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstStudent);
        printf("Enter marks: ");
        scanf("%f", &s[i].firstMarks);
        printf("Enter first name: ");
        scanf("%s", s[i].secondStudent);
        printf("Enter marks: ");
        scanf("%f", &s[i].secondMarks);
}
printf("Displaying Information:\n\n");
// displaying information
//current bug only diplaying second input, and displaying second input as first and second outputs. [fixed]
//FIXED OUTPUT BUG OF 2 INPUTS 1 DUPLICATED OUTPUT
for (i = 0; i < 2; ++i) {
       fprintf(*"\n*Roll number: %d\n", i + 1);
       fprintf(fptr,"First name:"firstStudent);
        puts(s[i].firstStudent);
        printf("Marks: %.1f", s[i].firstMarks);
        printf("\n");
       fprintf(fptr, "First name: "secondStudent);
        puts(s[i].secondStudent);
       fprintf(fptr, "Marks: %.1f", s[i].secondMarks);
       fprintf("\n");
    }
    return 0;
fptr;
fclose;
}
/* for (i =0; i < 2; ++i){ (for loop looping twice)*/
//formatting notes? printf starts col9 | fprintf starts col8 basically anything to do with printing starts col8 or col9
