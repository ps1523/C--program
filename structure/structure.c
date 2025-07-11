#include<stdio.h>
#include<stdint.h>
struct details
	{
		char *name[20];
		int age;
		int regno;
		float height;
	};
int main()
{
	printf("Enter the details:");
	struct details student;
	scanf("\n%s\n%d\n%d\n%f",&student.name,&student.age,&student.regno,&student.height);
	printf("Name=%s\nAge=%d\nRegNo=%d\nHeight=%f",student.name,student.age,student.regno,student.height);
	return 0;
}

