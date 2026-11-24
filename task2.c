#include <stdio.h>


struct Product {
    int id;
    char name[50];
    char category[30];
    float price;
    int stockQuantity;
};


void displayProductDetails(struct Product p) {
    float discount = p.price * 0.05; 
    float finalPrice = p.price - discount;

    printf("\n--- Product Details ---\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Final Price (after 5%% discount): %.2f\n", finalPrice);
    printf("Available Stock: %d\n", p.stockQuantity);
}

int main() {
    
    struct Product prod1 = {101, "Wireless Mouse", "Electronics", 2000.0, 15};

    displayProductDetails(prod1);

    return 0;
} 