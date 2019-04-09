//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int factor=2;
	int number;
	
	printf("1-n的所有質數，請輸入n:");
	scanf("%d、",&number);

	for(int i=2;i<=number;i++){

		if(i==2){
			printf("%d",i);
			printf(" ");
			continue;}

		while(i%factor!=0&&factor<=i){
			factor+=1;
			
			if(factor/i==1){
				printf("%d",i);
				printf(" ");
				factor=2;
				break;}
				
			if(i%factor==0){
				factor=2;
				break;}

		}

	}
	system("pause");
	return 0;
}
