#include<stdio.h>
int main(){
	int a[5];
	for(int i=1;i<6;i++){
		printf("moi ban nhap phan tu thu %d la: ",i);
		scanf("%d",&a[i]);
	}
		for(int i=1;i<6;i++){
		printf("phan tu thu %d la: %d\n",i,a[i]);
	}
	return 0;
}
