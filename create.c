struct create
{
    /* data */
    int id,qty;
    float price;
    char name[15],companny[15];
};

int create(int *arr, int size){
    struct create data;
    scanf("%d",&data.id);

    printf("\nEnter the product name: ");
    scanf("%s",data.name);

    printf("\nEnter the quantity: ");
    scanf("%d",&data.qty);

    printf("\nEnter the price: ");
    scanf("%f",&data.price);
}