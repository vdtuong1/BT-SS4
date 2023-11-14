#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("nhap so nguyen: ");
	scanf("%d", &a);
	if(a%15 == 0){
		printf("chia het cho 3 va 5");
    }else{
    	printf("khong chia het cho 3 va 5");
	}   
	return 0;
}
