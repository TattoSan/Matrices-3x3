#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int m1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int mf[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int x,y; 
	printf("SUMA DE MATRICES\n");
	printf("Matriz 1\n");
		for(x=0;x<3;x++){
				for(y=0;y<3;y++){
			printf("%d ", m1[x][y]);
		}
		printf("\n");
    }
    printf("\n");	
	printf("Matriz 2\n");
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("%d ", m2[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Suma de matrices\n");
	for(x=0;x<3;x++){
				for(y=0;y<3;y++){
					mf[x][y]= m1[x][y]+ m2[x][y];
			printf("%d ", mf[x][y]);
			
			}
		printf("\n");
}
return 0;
}
