#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int n2;
    printf("Enter a two-digit integer: ");
    n = getchar();
    n2 = getchar();
    printf("You entered: ");
    switch(n) {
        case '1':
            switch(n2) {
                case '1':
                    printf("eleven\n");
                    exit(1);
                    break;
                case '2':
                    printf("twelve\n");
                    exit(1);
                    break;
                case '3':
                    printf("thirteen\n");
                    exit(1);
                    break;
                case '4':
                    printf("fourteen\n");
                    exit(1);
                    break;
                case '5':
                    printf("fifteen\n");
                    exit(1);
                    break;
                case '6':
                    printf("sixteen\n");
                    exit(1);
                    break;
                case '7':
                    printf("seventeen\n");
                    exit(1);
                    break;
                case '8':
                    printf("eighteen\n");
                    exit(1);
                    break;
                case '9':
                    printf("nineteen\n");
                    exit(1);
                    break;
                case '0':
                    printf("ten\n");
                    exit(1);
                    break;
                default:
                    printf("Error; Impossible case reached!\n");
                    exit(1);
            }
            break;
        case '2':
            printf("twenty ");
            break;
        case '3':
            printf("thirty ");
            break;
        case '4':
            printf("fourty ");
            break;
        case '5':
            printf("fifty ");
            break;
        case '6':
            printf("sixty ");
            break;
        case '7':
            printf("seventy ");
            break;
        case '8':
            printf("eighty ");
            break;
        case '9':
            printf("ninety ");
            break;
        case '0':
            printf("Number should be at least 10!\n");
            exit(1);
        default:
            printf("Error; Impossible case reached!\n");
            exit(1);
    }

    switch(n2) {
        case '1':
            printf("one\n");
            break;
        case '2':
            printf("two\n");
            break;
        case '3':
            printf("three\n");
            break;
        case '4':
            printf("four\n");
            break;
        case '5':
            printf("five\n");
            break;
        case '6':
            printf("six\n");
            break;
        case '7':
            printf("seven\n");
            break;
        case '8':
            printf("eight\n");
            break;
        case '9':
            printf("nine\n");
            break;
        case '0':
            printf("\n");
            break;
        default:
            printf("Error; Impossible case reached!\n");
            exit(1);
    }
    return 0;
}