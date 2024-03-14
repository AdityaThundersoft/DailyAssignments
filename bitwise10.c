//Write a C program to count trailing zeros in a binary number.
int main()
{
   int n;
   printf("enter n: ");
   scanf("%d",&n);
   int count=1;
   while(n>0 )
   {
       if(n&1)
       break;
       else
       {
        count++;
        n = n>>1;
       }
   }
   printf("%d no of trailing zeros are there",count-1);
}
// enter n: 10
// 1 no of trailing zeros are there