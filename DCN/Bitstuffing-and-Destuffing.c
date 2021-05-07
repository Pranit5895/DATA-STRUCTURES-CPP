#include<stdio.h>
#include<string.h>
int main()
{
    int a[20],b[30],i,j,k,count,n;
    printf("Enter frame size (Example: 8):");
    scanf("%d",&n);
    printf("Enter the frame in the form of 0 and 1 :");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    i=0;
    count=1;
    j=0;
    while(i<n)
    {
        if(a[i]==1)
        {
            b[j]=a[i];
            for(k=i+1; a[k]==1 && k<n && count<5; k++)
            {
                j++;
                b[j]=a[k];
                count++;
                if(count==5)
                {
                    j++;
                    b[j]=0;
                }
                i=k;
            }
        }
        else
        {
            b[j]=a[i];
        }
        i++;
        j++;
    }
    printf("After Bit Stuffing :");
    for(i=0; i<j; i++)
        printf("%d",b[i]);
return 0;
} 

/*#include<stdio.h>
#define S 35
       int main()
       {      
      int i,j,n,k,c=0;
 int A[S];
 int bs[5];
 printf("\n Enter the no. of bits in data::");
 scanf("%d",&n);
 n+=16;
 printf("\n Enter the bitstream::");
 A[0]=0;A[1]=A[2]=A[3]=A[4]=A[5]=A[6]=1;A[7]=0;
 for(i=8;i<(n-8);i++)
 {     scanf("%d",&A[i]);
 }
 A[n-8]=0;A[n-7]=A[n-6]=A[n-5]=A[n-4]=A[n-3]=A[n-2]=1;A[n-1]=0;
 k=0;
 for(i=8;i<(n-8);i++)
 {      if(A[i]==1)
   c++;
  if(A[i]==0)
  { c=0;
  }
  if((c==6)&&A[i+1]==0)
  { n=n+1;
   for(j=n-1;j>=i;j--)
   { A[j+1]=A[j];
   }
   A[i]=0;
   bs[k]=i;
   k++;
   c=0;
       }
 }
 printf("\n After Byte stuffing....");
 for(i=0;i<n;i++)
 {    
        printf("%d",A[i]);
 }
 for(i=0;i<k;i++)
 {      
        n=n-1;
  
       for(j=(bs[i]-i);j<n;j++)
  { 
             A[j]=A[j+1];
  }
 }
 for(i=0;i<n;i++)
 A[i]=A[i+8];
 n=n-16;
 printf("\n After Byte destuffing....");
 for(i=0;i<n;i++)
 {     
       printf("%d",A[i]);
 }
 return 1;
} */