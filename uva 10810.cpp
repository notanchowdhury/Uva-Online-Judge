#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<stdlib.h>
using namespace std;
long int count=0;
void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

		i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]){ A[k++] = L[i++];}
		else {
                count+=leftCount-i;

                A[k++] = R[j++];
		}
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) {

            A[k++] = R[j++];
	}
}

void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return;

	mid = n/2;


	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n- mid)*sizeof(int));

	for(i = 0;i<mid;i++) L[i] = A[i];
	for(i = mid;i<n;i++) R[i-mid] = A[i];

	MergeSort(L,mid);
	MergeSort(R,n-mid);
	Merge(A,L,mid,R,n-mid);
        free(L);
        free(R);
}

int main() {
    int p;
    long int numberOfElements;


  while(scanf("%ld",&numberOfElements)==1&&numberOfElements!=0){
	int A[500003] ;
	count=0;
	for(p=0;p<numberOfElements;p++)
        cin>>A[p];


	MergeSort(A,numberOfElements);

	cout<<count<<endl;
  }
	return 0;
}
