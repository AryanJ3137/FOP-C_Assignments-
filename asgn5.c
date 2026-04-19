#include <stdio.h>

int main() {
    int a[10][10], b[10][10], i, j, r, c, choice;

    printf("Enter rows and columns: ");
    fflush(stdout);
    scanf("%d %d", &r, &c);

    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    printf("\n1.Addition\n2.Saddle Point\n3.Inverse (2x2)\n4.Magic Square\n");
    printf("Enter choice: ");
    fflush(stdout);
    scanf("%d",&choice);

    if(choice==1){
        printf("\nAddition:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d ", a[i][j]+b[i][j]);
            }
            printf("\n");
        }
    }

    else if(choice==2){
        int min, col, k, found=0;
        for(i=0;i<r;i++){
            min=a[i][0]; col=0;
            for(j=1;j<c;j++){
                if(a[i][j]<min){
                    min=a[i][j];
                    col=j;
                }
            }
            for(k=0;k<r;k++){
                if(a[k][col]>min)
                    break;
            }
            if(k==r){
                printf("Saddle Point = %d\n",min);
                found=1;
            }
        }
        if(found==0)
            printf("No Saddle Point\n");
    }

    else if(choice==3){
        int det;
        if(r==2 && c==2){
            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

            if(det==0)
                printf("No Inverse\n");
            else{
                printf("Inverse:\n");
                printf("%f %f\n",(float)a[1][1]/det,(float)-a[0][1]/det);
                printf("%f %f\n",(float)-a[1][0]/det,(float)a[0][0]/det);
            }
        } else {
            printf("Only for 2x2\n");
        }
    }

    else if(choice==4){
        int sum=0, temp, flag=1;

        for(j=0;j<c;j++)
            sum += a[0][j];

        for(i=1;i<r;i++){
            temp=0;
            for(j=0;j<c;j++)
                temp+=a[i][j];
            if(temp!=sum)
                flag=0;
        }

        for(j=0;j<c;j++){
            temp=0;
            for(i=0;i<r;i++)
                temp+=a[i][j];
            if(temp!=sum)
                flag=0;
        }

        if(flag==1)
            printf("Magic Square\n");
        else
            printf("Not Magic Square\n");
    }

    else{
        printf("Invalid choice\n");
    }

    return 0;
}