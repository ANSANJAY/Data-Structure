#include<stdio.h>
#include<ncurses.h>

int stk[10];
int top = -1;
int pop();
void push(int);


int main()
{
int i,n,val;
int arr[10];
	printf("Enter the number of  array element \n");
	scanf("%d",&n);
	printf("Enter the array element \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		push(arr[i]);
	for(i=0;i<n;i++)
	{
		val = pop();
		arr[i]=val;
	}
	printf("The reverse array \n");
	for(i=0;i<n;i++)
		printf("\n %d",arr[i]);
	return 0;
}

void push(int val)
{

stk[++top]=val;
}

int  pop()
{
return(stk[top--]);
}
