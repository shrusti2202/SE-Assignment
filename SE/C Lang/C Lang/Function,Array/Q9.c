//9. WAP to show difference between Structure and Union.
#include <stdio.h>
//created a union
union unionjob
{
	char name[50];
	float salary;
	int workno;
	
} ujob;
//created a structure
struct structjob
{
	char name[50];
	float salary;
	int workno;
	
} sjob;
int main()
{
//	print union size
	printf("Size of union =%d bytes",sizeof(ujob));
//	print structure size
	printf("\nSize of structure =%d bytes",sizeof(sjob));
}
