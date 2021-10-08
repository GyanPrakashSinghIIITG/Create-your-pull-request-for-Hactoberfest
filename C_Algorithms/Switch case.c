int main()
{
    char grade;
    printf("Enter your grade:\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Keep it up!\n\n");
            break;
        case 'C':
            printf("Well done\nbreak keyword takes execution to exit the switch case\n\n");
            break;
        case 'D':
            printf("You passed\n");
            break;
        case 'F':
            printf("Better luck next time\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    printf("Your grade is %c\n",grade);
    return 0;
}
