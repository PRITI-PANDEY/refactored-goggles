#include<stdio.h>

	struct student 
	{
	  int rollno;
	  char name[15];
	  double total;
	};
	
	int main() {
	  struct student s1;
	  printf("size=%d\n",sizeof(struct student));
	  
	  s1.rollno=101;
	  strcpy(s1.name,"Scott");
	  s1.total=80;
	
	  printf("Rollno=%d, name=%s,marks=%lf\n",
	       s1.rollno, s1.name, s1.total);
	  return 0;
	}
