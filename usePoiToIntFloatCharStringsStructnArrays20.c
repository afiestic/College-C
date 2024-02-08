#include <stdio.h>

int main()
{
    // Pointers to Integers
    int number = 42;
    int *ptrToInt = &number;

    // Pointers to Floats
    float value = 3.14;
    float *ptrToFloat = &value;

    // Pointers to Characters
    char character = 'A';
    char *ptrToChar = &character;

    // Pointers to Strings
    char str[] = "Hello, World!";
    char *ptrToStr = str;

    // Pointers to Structures
    struct Person
    {
        char name[50];
        int age;
    };

    struct Person individual = {"John Doe", 25};
    struct Person *ptrToPerson = &individual;

    // Pointers to Arrays
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptrToArray = numbers;

    // Displaying values using pointers
    printf("Original Integer: %d\n", number);
    printf("Pointer Value (Integer): %d\n", *ptrToInt);

    printf("\nOriginal Float: %.2f\n", value);
    printf("Pointer Value (Float): %.2f\n", *ptrToFloat);

    printf("\nOriginal Character: %c\n", character);
    printf("Pointer Value (Character): %c\n", *ptrToChar);

    printf("\nOriginal String: %s\n", str);
    printf("Pointer Value (String): %s\n", ptrToStr);

    printf("\nOriginal Person:\n");
    printf("Name: %s\n", individual.name);
    printf("Age: %d\n", individual.age);

    printf("\nPointer Value (Person):\n");
    printf("Name: %s\n", ptrToPerson->name);
    printf("Age: %d\n", ptrToPerson->age);

    printf("\nOriginal Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Pointer Values (Array): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptrToArray + i));
    }
    printf("\n");

    return 0;
}
