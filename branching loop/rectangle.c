//draw rectangle using ASCII characters
int main(){
    int l, w , i , j;

    printf("Enter length: ");
    scanf("%d",&l);

    printf("Enter width: ");
    scanf("%d",&w);

    printf(" %c",218);
    
    for(i=1;i<w;i++){
        printf(" %c",196);
    }
    printf(" %c\n",191);

    for(i=1;i<=l;i++)
    {
        printf(" %c",179);
    
        for ( j = 1; j <= w; j++)
        {
            printf("  ");
        }
    printf(" %c\n",179);
    }

    printf(" %c",192);
    for(i=1;i<=w;i++){
        printf(" %c",196);
    }

    printf(" %c",217);

    return 0;
}