#include <stdio.h>

/*
- This is a practice on using array of structures
*/

typedef unsigned char u8;
typedef unsigned short int u16;

typedef struct
{
    u8 ID;
    u16 Math;
    u16 Lang;
    u16 Physics;
    u16 Science;
} Student;

void main(void)
{
    // Array of 10 Students
    Student student[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter student %hu data: \n", i + 1);
        printf("Enter student %hu ID: ", i + 1);
        scanf("%hhu", &student[i].ID);
        printf("Enter student number %hu grade in math: ", i + 1);
        scanf("%hu", &student[i].Math);
        printf("Enter student number %hu grade in lang: ", i + 1);
        scanf("%hu", &student[i].Lang);
        printf("Enter student number %hu grade in physics: ", i + 1);
        scanf("%hu", &student[i].Physics);
        printf("Enter student number %hu grade in science: ", i + 1);
        scanf("%hu", &student[i].Science);
    }

    while (1)
    {
        u8 ID, found = 0;
        printf("Enter student's ID: ");
        scanf("%hhu", &ID);

        if (ID == 0)
            break;

        for (int i = 0; i < 4; i++)
        {
            if (ID == student[i].ID)
            {
                found = 1;
                printf("Math grade: %hu\n", student[i].Math);
                printf("Lang grade: %hu\n", student[i].Lang);
                printf("Physics grade: %hu\n", student[i].Physics);
                printf("Science grade: %hu\n", student[i].Science);
            }
        }

        if (!found)
        {
            printf("Sorry, no student found\n");
        }
    };
}