#include<stdio.h>
int main(){
int r,c,i,j;
printf("Enter no of rows ");
scanf("%d",&r);
printf("Enter no of columns ");
scanf("%d",&c);
int arr[r][c];
int transpose[c][r];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("Enter the value :");
scanf("%d",&arr[i][j]);
transpose[j][i]=arr[i][j];
}}

printf("Original Matrix\n");
for(i=0;i<r;i++){
printf("\n");
for(j=0;jc;j++)
printf("%d",arr[i][j]);
}
printf("Transpose Matrix\n");
for(i=0;i<c;i++){
printf("\n");
for(j=0;j<r;j++)
printf("%d",transpose[i][j]);

}
return 0;
}

