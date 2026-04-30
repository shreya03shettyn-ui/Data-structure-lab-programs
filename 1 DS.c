//Implement basic array operation:insertion,deletion,searching and traversal
#include<stdio.h>
int main()
{
int arr[100],n,i,pos,value,choice,found;
printf("Enter the number of elements:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
do{
printf("\n---MENU---\n");
printf("1.Traversal\n2.Insertion\n3.Deletion\n4.Searching\n5.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1://Traversal
printf("Array elements are:");
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
break;

case 2://Insertion
  printf("Enter the position and the value:");
  scanf("%d%d",&pos,&value);
  for(i=n;i>=pos;i--){
  arr[i]=arr[i-1];
  }
  arr[pos-1]=value;
  n++;
  for(i=0;i<n;i++)
    printf("%d",arr[i]);
  break;

case 3://Deletion
  printf("Enter the position to delete:");
  scanf("%d",&pos);
  for(i=pos-1;i<n-1;i++){
  arr[i]=arr[i+1];
  }
  n--;
  for(i=0;i<n;i++)
    printf("%d",arr[i]);
  break;

case 4://Searching
  printf("Enter the elements to search:");
  scanf("%d",&value);
  found=0;
  for(i=0;i<n;i++){
  if(arr[i]==value){
printf("Element found at position%d\n",i+1);
found=1;
break;
}
}
if(found==0)
printf("Element not found\n");
break;

case 5:
printf("Exiting...\n");
break;
default:
printf("Invalid choice!\n");
}
}
while(choice!=5);
return 0;
}
