#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void part1(FILE *fp,int horizontal,int depth){
	
	int tmp;
	char direct[10];
	
	while(!feof(fp)){
		
		fscanf(fp,"%s %d\n",direct,&tmp);
		if(strcmp(direct,"forward")==0){
			horizontal +=tmp;
		}
		else if(strcmp(direct,"down")==0){
			depth += tmp;
		}
		else if(strcmp(direct,"up")==0){
			depth -= tmp;
		}	
	}
	printf("%d %d\n",horizontal,depth);
}

void part2(FILE *fp,int horizontal,int depth){
	
	int tmp;
	char direct[10];
	int aim=0;
	
	while(!feof(fp)){
		
		fscanf(fp,"%s %d\n",direct,&tmp);
		if(strcmp(direct,"forward")==0){
			horizontal +=tmp;
			depth += tmp*aim ;
		}
		else if(strcmp(direct,"down")==0){
			aim += tmp;
		}
		else if(strcmp(direct,"up")==0){
			aim -= tmp;
		}	
	}
	printf("%d",horizontal*depth);
}

int main(){
	
	FILE *fp = fopen("input.txt","r");
	part1(fp,0,0);
	fclose(fp);
	fp = fopen("input.txt","r");
	part2(fp,0,0);
	fclose(fp);
	
	
	
	
	
	return 0;
}
