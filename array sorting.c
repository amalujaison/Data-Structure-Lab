#include<stdio.h>
void main()
{
    int arr1[50],arr2[50],i,j,n1,n2,n3,temp,c[50],k;
    printf("enter the size of first array");
    scanf("%d",&n1);
    printf("enter the size of second array");
    scanf("%d",&n2);
    n3=n1+n2;
    printf("enter the number of arrays");

    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
        c[i]=arr1[i];
    }
    k=n1;
    printf("enter the number of arrays");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
        c[k]=arr2[i];
        k++;
    }
    printf("the merged array\n");
    for(i=0;i<n3;i++)
        printf("%d\n",c[i]);
    printf("after sorting\n");
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[j]>c[i])
            {
                temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
    }

    for(i=n3-1;i>=0;i--)
    {
        printf("%d\n",c[i]);
    }

}







