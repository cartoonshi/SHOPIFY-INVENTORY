#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BRAND_LEN 50
#define MAX_SIZE_LEN 3
#define MAX_COLOR_LEN 10
#define MAX_PRICE_LEN 10
#define MAX_ITEMS 100

struct Item {
    char brand[MAX_BRAND_LEN];
    char size[MAX_SIZE_LEN];
    char color[MAX_COLOR_LEN];
    int price;
};

struct Item *read_item() {
    struct Item *item = malloc(sizeof(struct Item));

    printf("Enter the brand: ");
    scanf("%s", item->brand);

    printf("Enter the size: ");
    scanf("%s", item->size);

    printf("Enter the color: ");
    scanf("%s", item->color);

    printf("Enter the price: ");
    if (scanf("%d", &item->price) != 1) {
        fprintf(stderr, "Error: Invalid price\n");
        exit(1);
    }

    return item;
}

void print_item(struct Item item) {
    printf("Brand: %s, Size: %s, Color: %s, Price: %d\n",
           item.brand, item.size, item.color, item.price);
}

int main() {
    int choice, num_items, i;
    struct Item *items[MAX_ITEMS];

    printf("Press 1 to update shoes\n");
    printf("Press 2 to update pants\n");
    printf("Press 3 to update shirts\n");
    printf("Press 4 to update sweaters\n");

    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        fprintf(stderr, "Error: Invalid choice\n");
        exit(1);
    }

    printf("Enter the number of items you wish to record: ");
    if (scanf("%d", &num_items) != 1) {
        fprintf(stderr, "Error: Invalid number of items\n");
        exit(1);
    }

    for (i = 0; i < num_items; i++) {
        items[i] = read_item();
    }

    printf("%d items recorded:\n", num_items);
    for (i = 0; i < num_items; i++) {
        print_item(*items[i]);
    }

    return 0;
}