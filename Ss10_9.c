#include<stdio.h>

int main(){

int num[3][3]={{1,4,3},{5,2,9},{7,8,6}};
    int b[9]={0};

	for (int i = 0; i < 3; i++) {
		b[i] = num[i][i];
    }
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < (3 - 1 - i);j++){
			if(b[j + 1] < b[j]){
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
        num[i][i] =b[i];
    }
    for(int i = 0;i < 3;i++){
    	for(int j = 0;j < 3;j++){
    		printf("%d",num[i][j]);
		}
		printf("\n");
	}   
    

	return 0;
}

