// Variable of the product
struct create
{
    /* data */
    int id,qty;
    float price;
    char name[15],companny[15];
};
int create(int *arr, int size);
int search(int *arr, int size, int target);
int edit(int *arr, int size, int target);
int del(int *arr, int size, int target);