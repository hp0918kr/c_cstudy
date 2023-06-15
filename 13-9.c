#include <stdio.h>
#include <malloc.h>

	struct student {
	char * name;
	int ages;
        };
	void main()
{
	int i, cnt;
	printf("입력할 학생 수 : ");
	scanf("%d", &cnt);

	struct student* students=malloc(sizeof(struct student)*cnt);

	for(i = 0; i < cnt; i++) {
		printf("이름과 나이 입력 : ");
		students[i].name=malloc(sizeof(char)*20);
		scanf("%s %d", students[i].name, &students[i].ages);
	}
	for(i = 0; i < cnt; i++){
		printf("이름:%s , 나이:%d\n", students[i].name,students[i].ages);
	}
	for(i = 0; i < cnt; i++){
		free(students[i].name);
	}
	free(students);

}

