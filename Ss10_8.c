#include<stdio.h>

int main (){
	
	int a[3][3] = {{9,4,5},{2,1,7},{8,3,6}};
	int c = 0;
	int b[9];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			b[c]=a[i][j];
			c++;
		}
	}
    
	for(int i = 0;i < 9;i++){
		for(int j = 0;j < (9 - 1 - i);j++){
			if(b[j + 1] < b[j]){
				int temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	c = 0;
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			a[i][j]=b[c];
			c++;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

