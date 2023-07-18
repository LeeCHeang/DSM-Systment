#include "library.h"
#include <stdlib.h>
#include <string.h>

void add_good(int *arr, int size){
    struct create data;
    printf("\nEnter the id of the product: ");
    scanf("%d",&data.id);

    printf("\nEnter the product name: ");
    scanf("%s",data.name);

    printf("\nEnter the price: ");
    scanf("%f",&data.price);

    printf("\nEnter the quantity: ");
    scanf("%d",&data.qty);
}