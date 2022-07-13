#include <stdio.h>
#include <stdlib.h>

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
FILE * file
//opening file for writing IN APPEND MODE INSTEAD OF WRITING MODE because writing mode erases the file whenever you run the program again
=file = fopen("students-info-rnm.txt", "a");
//removed all file handling to see if it compiles and then reinserting file handling in different ways
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
//Storing to a variable ie secondmarks, use ( scanf("%f", &s[i].secondMarks); )
}
printf("Displaying Information:\n\n");
// displaying information
//current bug only diplaying second input, and displaying second input as first and second outputs. [fixed]
//FIXED OUTPUT BUG OF 2 INPUTS 1 DUPLICATED OUTPUT
// bug: cannot compile due to file handling issues
for (i = 0; i < 2; ++i) {
       fprintf(file,"\nRoll number: %d\n", i + 1);
       fprintf(file,"First name:\n");
        puts(s[i].firstStudent);
       printf("Marks: %.1f\n\n", s[i].firstMarks);
       fprintf(file,"\n");
       fprintf(file,"First name: \n");
        puts(s[i].secondStudent);
       printf("Marks: %.1f\n\n", s[i].secondMarks);
       fprintf(file,"\n");
fclose (file);    
}
    return 0;


}
/* for (i =0; i < 2; ++i){ (for loop looping twice)*/
//formatting notes? printf starts col9 | fprintf starts col8 basically anything to do with printing starts col8 or col9
