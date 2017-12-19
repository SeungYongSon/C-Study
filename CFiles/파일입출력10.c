#include <stdio.h>

int main()
{
	FILE *fp;
	int age;
	char name[20];
	
	fp = fopen("c.txt", "r");
	if(fp == NULL){
		printf("ERROR!!!!!!\n");
		return 1;
	}
	
	fscanf(fp, "%d", &age);
	//fscanf(fp, "%s", name); // 결과 나이: 17 이름:  길동  
	
	//fflush(fp); //-> 쓰레기 값 나옴. r 일때 사용하지 말자. (버퍼 비우는 함수임) 그래서 r에서 사용하면 안됨 
	//fgetc(fp); 1번째 방법 -> 한글자(엔터) 읽고 한번더 읽어서 그다음 이름을 저장 
	//while(fgetc(fp) != '\n'){} 2번째 방법 -> 개행문자(엔터, \n) 가 아닌동안 저장오면 탈출 
	//---> 결과 나이: 17 이름: 홍 길동 

	//fgetc가 제일 나음 
	fgetc(fp);	
	fgets(name, sizeof(name), fp);
	
	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);
	
	return 0;

} 
