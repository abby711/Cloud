#include<stdio.h>
int main(){
int n,i,j,spaces,k;
printf("Enter the no of rows you want ");
scanf("%d",&n);
spaces=n-1;
i=1;
k=1;
while(i<=n){
for(j=0;j<spaces;j++)
	printf("  ");
for(j=0;j<k;j++)
	printf("* ");
for(j=0;j<spaces;j++)
	printf("  ");
i++;
spaces--;
k+=2;
printf("\n");
}

return 0;
}	
