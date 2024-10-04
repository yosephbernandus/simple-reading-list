#include <stdio.h>

struct book {
    char name;
    char author;
    int year;
};

int main(void) {
    char name[100];
    char author[100];
    int year;

    printf("Enter book name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter book author: ");
    fgets(author, sizeof(author), stdin);

    printf("Enter book year: ");
    fgets("%d", sizeof(year), stdin);

    printf("\n");
    printf("Book name: %s", name);
    printf("Book author: %s", author);
    printf("Book year: %d\n", year);

    return 0;
}
