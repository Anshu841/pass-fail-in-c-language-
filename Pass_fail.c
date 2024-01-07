#include <stdio.h>
int main()
{
//code writen by Anshu
    int class;
    int hindi, english, math, science, sanskrit, history, computer, gk;
    float total_marks;
    printf("In which class you're studying:\n");
    printf("Please Enter your class: "); // Enter your class
    scanf("%d", &class);                 // scan input by user

    if (class <= 8) // 1 to 8 class find total marks and pass/fail
    {
        printf("You're studying in class : %d\n", class);
        printf("Note: You have to write the marks of your subject line by line.\n");

        printf("Enter Hindi marks   :"); // Hindi marks
        scanf("%d", &hindi);

        printf("Enter English marks :"); // English marks
        scanf("%d", &english);

        printf("Enter Math marks    :"); // Math marks
        scanf("%d", &math);

        printf("Enter Science marks :"); // Science marks
        scanf("%d", &science);

        printf("Enter Sanskrit marks:"); // Sanskrit marks
        scanf("%d", &sanskrit);

        printf("Enter History marks :"); // History marks
        scanf("%d", &history);

        printf("Enter Computer marks:"); // computer marks
        scanf("%d", &computer);

        printf("Enter GK marks      :"); // GK marks
        scanf("%d", &gk);

        printf("-----------------------\n");

        total_marks = hindi + english + math + science + sanskrit + history + computer + gk;
        printf("Total marks:%.2f\n", total_marks);              // printf total marks all subjects
        printf("Your percentage is:%.2f\n\n", total_marks / 8); // calculate percentage

        if (total_marks >= 240 && hindi > 33 && english > 33 && math > 33 && science > 33 && sanskrit > 33 && history > 33 && computer > 33 && gk > 33)
        {
            printf("Congratulations,You have passed in %d class\n", class); // print pass
        }
        else
        {
            printf("You have failed in %d class\n", class); // print fail
            printf("Because you have less than 33 marks in one/more subjects\n\n");
            printf("Don't worry, you are a very smart student in your class.");
        }
    }

    if (class >= 9 && class <= 10) // 9 to 10 classes find total marks and pass/fail
    {

        printf("You're studying in class : %d\n", class);

        printf("Note: You have to write the marks of your subject line by line.\n");

        printf("Enter Hindi marks   :"); // Hindi marks
        scanf("%d", &hindi);

        printf("Enter English marks :"); // English marks
        scanf("%d", &english);

        printf("Enter Math marks    :"); // Math marks
        scanf("%d", &math);

        printf("Enter Science marks :"); // Science marks
        scanf("%d", &science);

        printf("Enter History marks :"); // History marks
        scanf("%d", &history);

        printf("Enter Computer marks:"); // Computer marks
        scanf("%d", &computer);

        printf("-----------------------\n");

        total_marks = hindi + english + math + science + history + computer;
        printf("Total marks:%.2f\n", total_marks);              // print total marks
        printf("Your percentage is:%.2f\n\n", total_marks / 6); // calcutale percentage

        if (total_marks >= 180 && hindi > 33 && english > 33 && math > 33 && science > 33 && history > 33 && computer > 33)
        {
            printf("Congratulations,You have passed in %d class\n", class); // pass
        }
        else
        {
            printf("You have failed in %d class\n", class); // fail
            printf("Because you have less than 33 marks in one/more subjects\n\n");
            printf("Don't worry, you are a very smart student in your class");
        }
    }

    if (class >= 11 && class <= 12) // 11 to 12 classes find total marks and pass/fail
    {

        printf("You're studying in class : %d\n", class);
        printf("Note: You have to write the marks of your subject line by line.\n");

        printf("Enter Hindi marks   :"); // Hindi marks
        scanf("%d", &hindi);

        printf("Enter English marks :"); // English marks
        scanf("%d", &english);

        printf("Enter Math marks    :"); // Math marks
        scanf("%d", &math);

        printf("Enter Science marks :"); // Science marks
        scanf("%d", &science);

        printf("Enter Computer marks:"); // Computer marks
        scanf("%d", &computer);

        printf("-----------------------\n");

        total_marks = hindi + english + math + science + computer;
        printf("Total marks:%.2f\n", total_marks);              // print total marks
        printf("Your percentage is:%.2f\n\n", total_marks / 5); // calcutale percentage

        if (total_marks >= 180 && hindi > 33 && english > 33 && math > 33 && science > 33 && computer > 33)
        {
            printf("Congratulations,You have passed in %d class\n", class); // pass
        }
        else
        {
            printf("You have failed in %d class\n", class); // fail
            printf("Because you have less than 33 marks in one/more subjects\n\n");
            printf("Don't worry, you are a very smart student in your class");
        }
    }
    if (class > 12)
    {
        printf("syntax error\n"); // you enter number greter than 12  printf this line
        printf("Please Enter your class currectly 1 to 12\n");
    }

    return 0;
}