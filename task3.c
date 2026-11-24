#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
   
    struct Item warehouse[5];
    float totalInventoryValue = 0;
    int searchID, found = 0;

    
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Item %d:\n", i + 1);
        printf("Item ID: ");
        scanf("%d", &warehouse[i].id);
        
        printf("Item Name (single word): ");
        scanf("%s", warehouse[i].name);
        
        printf("Quantity: ");
        scanf("%d", &warehouse[i].quantity);
        
        printf("Unit Price: ");
        scanf("%f", &warehouse[i].unitPrice);

        
        totalInventoryValue += (warehouse[i].quantity * warehouse[i].unitPrice);
    }

    printf("\nTotal Warehouse Inventory Value: %.2f\n", totalInventoryValue);

    
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < 5; i++) {
        if (warehouse[i].id == searchID) {
            printf("\n--- Item Found --\n");
            printf("ID: %d\n", warehouse[i].id);
            printf("Name: %s\n", warehouse[i].name);
            printf("Quantity: %d\n", warehouse[i].quantity);
            printf("Unit Price: %.2f\n", warehouse[i].unitPrice);
            found = 1 ;
            break;
        }
    }

    if (found == 0) {
        printf("Item with ID %d not found.\n", searchID);
    }

    return 0;
}