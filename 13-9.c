#include <stdio.h>
#include <malloc.h>

	struct student {
	char * name;
	int ages;
        };
	void main()
{
	int i, cnt;
	printf("�Է��� �л� �� : ");
	scanf("%d", &cnt);

	struct student* students=malloc(sizeof(struct student)*cnt);

	for(i = 0; i < cnt; i++) {
		printf("�̸��� ���� �Է� : ");
		students[i].name=malloc(sizeof(char)*20);
		scanf("%s %d", students[i].name, &students[i].ages);
	}
	for(i = 0; i < cnt; i++){
		printf("�̸�:%s , ����:%d\n", students[i].name,students[i].ages);
	}
	for(i = 0; i < cnt; i++){
		free(students[i].name);
	}
	free(students);

}

