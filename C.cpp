#include<stdio.h>
#include<conio.h>
void char_C();
int main(){
    printf("*** Print C Charector *** \n\n");
    char_C();
	return 0;
}
void char_C(){
 	// code 
 	char matrix[5][4];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
			if(i==0 || i==4){
			  if(j==0){
			  	matrix[i][j]=' ';
			  }
			}
			if(i==1||i==2||i==3){
				int n;
				if(i==1||i==3){
					n=3;
			    }
				for(int k=1;k<=n;k++){
					matrix[i][k]=' ';
				}
			}
		}
	}
	// print matrix 4*3
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<4;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}	
}
