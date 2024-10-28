#include <stdio.h>
#include<stdlib.h>

int main()
{
    int option, input;
    int size;
    printf("Enter the required Size:");
    scanf("%d",&size);
    int top = -1;
   int *arr = (int*)malloc(size * sizeof(int));

    while (1)
    {

        printf("Enter option (1: Push, 2: Pop, 3: Display, 4: Exit):\n");
        scanf("%d", &option);

        if (option == 1)
        {
            if (top < size- 1)
            {
                printf("Input value to push: ");
                scanf("%d", &input);
                top++;
                arr[top] = input;
                printf("Input %d is pushed to stack.\n", input);
            }
            else
            {
                printf("Stack Overflow!\n");
            }
        }
        else if (option == 2)
        {
            if (top >= 0)
            {
                input = arr[top];
                top--;
                printf("Input %d is popped from stack.\n", input);
            }
            else
            {
                printf("Stack Underflow!\n");
            }
        }
        else if (option == 3)
        {
            if (top >= 0)
            {
                printf("Displaying Stack content:\n");
                for (int i = top; i >= 0; i--)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Stack is empty.\n");
            }
        }
        else if (option == 4)
        {
            printf("Exit\n");
            break;
        }
        else
        {
            printf("Invalid input. Please enter a valid option (1-4).\n");
        }
    }
    free(arr);

    return 0;
}
