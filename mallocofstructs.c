#include <stdio.h>
#include <stdlib.h>

struct classGrades {
    char name[100];
    float grade;
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_students>\n", argv[0]);
        return 1;
    }

    int num_students = atoi(argv[1]);
    struct classGrades* myArray = (struct classGrades*)malloc(num_students * sizeof(struct classGrades));

    printf("\n\nPlease enter information for %d students. Enter:\n\n", num_students);
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", myArray[i].name);
        printf("Grade: ");
        scanf("%f", &myArray[i].grade);
        printf("\n\nYou entered: '%s', '%.2f' and this was put in the struct at index %d of the allocated memory\n\n", 
                myArray[i].name, myArray[i].grade, i);
    }

    // Print out all the structs in the array
    printf("\nHere is the data in all of the students in the allocated memory:\n");
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent at Index %d:\n", i);
        printf("Name: %s\n", myArray[i].name);
        printf("Grade: %.2f\n", myArray[i].grade);
    }

    printf("\n");

    free(myArray);
    return 0;
}


/*

WHAT TO DO

MODIFY THIS CODE

Instead of a stupid example structure (really this is the best you could think of Joe - "myStruct", "myInt", come on man)

Update this code to do something more...real world.

For examle:

Maybe create a structure like this:

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

Example data might be (remember we're just making stuff up here)  Here title is some made-up title.  A made up inventory number.  A made up number of pages (not a very big book...).

bookTitle - Joe's Life
bookNumber - 1234
bookPages - 23


*/