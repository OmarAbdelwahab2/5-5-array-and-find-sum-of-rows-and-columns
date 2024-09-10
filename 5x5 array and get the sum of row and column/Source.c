#include<stdio.h>
int arr[5][5] = { 0 },sumrow,sumcolumn,r,c;
void read(void);
void print(void);
int sum_row(int );
int sum_column(int);
void main(void)
{
	read();
	print();
	printf("\n enter which row you want its sum");
	scanf_s("%d", &r);
	printf("\n the sum of row %d id %d", r, sum_row(r-1));
	printf("\n enter which column you want its sum");
	scanf_s("%d", &c);
	printf("\n the sum of column %d id %d", c , sum_column(c - 1));
	
}
void read(void)
{
	for (int i = 0; i < 5; i++)
	{
		printf("Enter row %d", i + 1);
		for (int j = 0; j < 5; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}

}
void print(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
int sum_row(int x)
{
	for (int j = 0; j < 5; j++)
	{
		sumrow = sumrow + arr[x][j];
	}
	return sumrow;
}
int sum_column(int x)
{
	for (int i = 0; i < 5; i++)
	{
		sumcolumn = sumcolumn + arr[i][x];
	}
	return sumcolumn;
}