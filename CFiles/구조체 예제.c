#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#pragma pack(1);
struct profile{

	char name[20];
	int age;
	char *intro;
};

int main()
{
	struct profile me;
	printf("이름 ? ");
	scanf("%s", me.name); 
	printf("나이 ? ");
	scanf("%d", &me.age);
	//strcpy(me.name, "홍길동");
	//me.age = 17;
	me.intro = (char *)malloc(80); //동적할당 
	printf("자기를 소개하세요\n");
	getchar(); //이걸 통해 scanf 에서 나온 공백을 빼줌. 
	gets(me.intro);
	printf("이름: %s 나이: %d 소개 : %s \n", me.name, me.age, me.intro);
	free(me.intro);	
}
