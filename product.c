
#include <stdio.h>

struct Product {
    int productId;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.productId);

    printf("Enter Product Name: ");
    scanf("%49s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    printf("\n--- Product Details ---\n");
    printf("Product ID: %d\n", p.productId);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Total Value: %.2f\n", p.quantity * p.price);

    return 0;
}
