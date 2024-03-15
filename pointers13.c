//. Write a C program to multiply two matrix using pointers.
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter r1,c1: ");
    scanf("%d %d",&r1,&c1);
    printf("enter r2,c2: ");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1],b[r2][c2],mul[r1][c2];
    printf("enter the first matrix element=");    
    for(int i=0;i<r1;i++)    
    {    
           for(int j=0;j<c1;j++)    
           {    
             scanf("%d",&a[i][j]);    
           }    
    }  
    printf("\n");
    printf("enter the second matrix element=");    
    for(int i=0;i<r2;i++)    
    {    
           for(int j=0;j<c2;j++)    
           {    
             scanf("%d",&b[i][j]);    
           }    
    }   
    printf("\n");
    if(r2 == c1)
    {
        printf("multiplication is \n");    
        for(int i=0;i<r1;i++)    
        {    
           for(int j=0;j<c2;j++)    
           {    
                mul[i][j]=0;    
                for(int k=0;k<c1;k++)    
                {    
                  mul[i][j]+=*(*(a+i)+k) * *(*(b+k)+j);
                  
                }    
                printf("%d ",mul[i][j]);
           } 
           printf("\n");
        }    
    }
    else printf("multiplication not possible");
    return 0;
}
// enter r1,c1: 3 3
// enter r2,c2: 3 3
// enter the first matrix element=1 1 1
// 2 2 2
// 3 3 3

// enter the second matrix element=1 1 1
// 2 2 2
// 3 3 3

// multiplication is 
// 6 6 6 
// 12 12 12 
// 18 18 18 
