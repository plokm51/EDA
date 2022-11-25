#include<iostream>
#include<cstdlib>
#include<ctime>
#define MAX 10
//#define SWAP(x,y) {int temp;temp=x;x=y;y=temp;}
using namespace std;


int partition(int[],int left,int right);
void quickSort(int [],int left,int right);
void SWAP(int *a,int *b);
int main(void)
{
	srand(time(NULL));

	int number[MAX]={0};

	cout << "Before:";
	for(int i=0;i<MAX;i++){
		number[i]=rand()%100;
		cout << number[i];
	}

	quickSort(number,0,MAX-1);

	cout << "After:";
	for(int i=0;i<MAX;i++){
		cout << number[i];
	}

	return 0;
}

void SWAP(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int number[],int left,int right){
	int i=left-1;
	for(int j=left;j<right;j++){
		if(number[j]<=number[right]){
			i++;
			SWAP(&number[i],&number[j]);
		}
	}

	SWAP(&number[i+1],&number[right]);
	return i+1;
}

void quickSort(int number[],int left,int right){
	if(left<right){
		int q=partition(number,left,right);
		quickSort(number,left,q-1);
		quickSort(number,q+1,right);
	}
}
