#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input();


struct Shoes {
    char brand[50];
    char size[3];
    char color[10];
    char price[10];
};

struct Dress {
    char brand[50];
    char size[3];
    char color[10];
    int price;
};

struct Pants {
    char brand[50];
    char size[3];
    char color[10];
    int price;
};

struct Shirts {
    char brand[50];
    char size[3];
    char color[10];
    int price;
};

struct Sweaters {
    char brand[50];
    char size[3];
    char color[10];
    int price;
};

int main()
{
    
    int choice, num, i, j, k, l;

    printf("Press 1 to update shoes\n");
    printf("Press 2 to to update pants\n");
    printf("Press 3 to update shirts \n");
    printf("Press 4 to update sweaters \n");

    choice = input();

    switch (choice) {
        case 1: {
            int total = 0;
            printf("ENTER THE NUMBER OF SHOES YOU WISH TO RECORD\n");
            scanf("%d", &total);

            char *a[total], *b[total], *c[total], *d[total];

            printf("Enter the available brands\n");
            for (i = 0; i < total; i++) {
                a[i] = malloc(50 * sizeof(char));
                scanf("%s", a[i]);
            }

            printf("Enter the sizes\n");
            for (j = 0; j < total; j++) {
                b[j] = malloc(3 * sizeof(char));
                scanf("%s", b[j]);
            }

            printf("Enter the shoe color\n");
            for (k = 0; k < total; k++) {
                c[k] = malloc(10 * sizeof(char));
                scanf("%s", c[k]);
            }

            printf("Enter the shoe prices\n");
            for (l = 0; l < total; l++) {
                d[l] = malloc(10 * sizeof(char));
                scanf("%s", d[l]);
            }

            struct Shoes shoe[total];
            for (i = 0; i < total; i++) {
                strcpy(shoe[i].brand, a[i]);
                strcpy(shoe[i].size, b[i]);
                strcpy(shoe[i].color, c[i]);
                strcpy(shoe[i].price, d[i]);
            }

            for (i = 0; i < total; i++) {
                printf("Brand: %s, Size: %s, Color: %s, Price: %s\n", shoe[i].brand, shoe[i].size, shoe[i].color, shoe[i].price);
            }

            break;
        }
    case 2: {
         int total = 0;
            printf("ENTER THE NUMBER OF PANTS YOU WISH TO RECORD\n");
            scanf("%d", &total);

            char *a[total], *b[total], *c[total], *d[total];

            printf("Enter the available brands\n");
            for (i = 0; i < total; i++) {
                a[i] = malloc(50 * sizeof(char));
                scanf("%s", a[i]);
            }

            printf("Enter the sizes\n");
            for (j = 0; j < total; j++) {
                b[j] = malloc(3 * sizeof(char));
                scanf("%s", b[j]);
            }

            printf("Enter the pants color\n");
            for (k = 0; k < total; k++) {
                c[k] = malloc(10 * sizeof(char));
                scanf("%s", c[k]);
            }

            printf("Enter the pants prices\n");
            for (l = 0; l < total; l++) {
                d[l] = malloc(10 * sizeof(char));
                scanf("%s", d[l]);
            }

            struct Pants pant[total];
            for (i = 0; i < total; i++) {
                strcpy(pant[i].brand, a[i]);
                strcpy(pant[i].size, b[i]);
                strcpy(pant[i].color, c[i]);
                strcpy(pant[i].price, d[i]);
            }

            for (i = 0; i < total; i++) {
                printf("Brand: %s, Size: %s, Color: %s, Price: %s\n", pant[i].brand, pant[i].size, pant[i].color, pant[i].price);
            }

            break;
    }
    case 3:
    {
         int total = 0;
            printf("ENTER THE NUMBER OF SHIRTS YOU WISH TO RECORD\n");
            scanf("%d", &total);

            char *a[total], *b[total], *c[total], *d[total];

            printf("Enter the available brands\n");
            for (i = 0; i < total; i++) {
                a[i] = malloc(50 * sizeof(char));
                scanf("%s", a[i]);
            }

            printf("Enter the sizes\n");
            for (j = 0; j < total; j++) {
                b[j] = malloc(3 * sizeof(char));
                scanf("%s", b[j]);
            }

            printf("Enter the shirt color\n");
            for (k = 0; k < total; k++) {
                c[k] = malloc(10 * sizeof(char));
                scanf("%s", c[k]);
            }

            printf("Enter the shirt prices\n");
            for (l = 0; l < total; l++) {
                d[l] = malloc(10 * sizeof(char));
                scanf("%s", d[l]);
            }

            struct Shirts shirt[total];
            for (i = 0; i < total; i++) {
                strcpy(shirt[i].brand, a[i]);
                strcpy(shirt[i].size, b[i]);
                strcpy(shirt[i].color, c[i]);
                strcpy(shirt[i].price, d[i]);
            }

            for (i = 0; i < total; i++) {
                printf("Brand: %s, Size: %s, Color: %s, Price: %s\n", shirt[i].brand, shirt[i].size, shirt[i].color, shirt[i].price);
            }

            break;
    }
    case 4:
    {
         int total = 0;
            printf("ENTER THE NUMBER OF SWEATERS YOU WISH TO RECORD\n");
            scanf("%d", &total);

            char *a[total], *b[total], *c[total], *d[total];

            printf("Enter the available brands\n");
            for (i = 0; i < total; i++) {
                a[i] = malloc(50 * sizeof(char));
                scanf("%s", a[i]);
            }

            printf("Enter the sizes\n");
            for (j = 0; j < total; j++) {
                b[j] = malloc(3 * sizeof(char));
                scanf("%s", b[j]);
            }

            printf("Enter the sweater color\n");
            for (k = 0; k < total; k++) {
                c[k] = malloc(10 * sizeof(char));
                scanf("%s", c[k]);
            }

            printf("Enter the sweater prices\n");
            for (l = 0; l < total; l++) {
                d[l] = malloc(10 * sizeof(char));
                scanf("%s", d[l]);
            }

            struct Sweaters sweater[total];
            for (i = 0; i < total; i++) {
                strcpy(sweater[i].brand, a[i]);
                strcpy(sweater[i].size, b[i]);
                strcpy(sweater[i].color, c[i]);
                strcpy(sweater[i].price, d[i]);
            }

            for (i = 0; i < total; i++) {
                printf("Brand: %s, Size: %s, Color: %s, Price: %s\n", sweater[i].brand, sweater[i].size, sweater[i].color, sweater[i].price);
            }

            break;
    }
}
}
  
  int  input()
  {
     int number;
	scanf("%d", &number);
	return (number);
} 