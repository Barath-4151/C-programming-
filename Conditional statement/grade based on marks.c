#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 50) {
        printf("You passed the exam.\n");
    } else {
        printf("You failed the exam.\n");
    }

    return 0;
}
