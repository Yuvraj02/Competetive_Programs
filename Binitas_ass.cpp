#include <stdio.h>

int main(){
int s1, s2, s3, s4, s5;
float per;

scanf("%d %d %d %d %d", &s1, &s2, &s3,&s4,&s5);
per = (s1+s2+s3+s4+s5)/500;
printf("%f", per);

if(per>=90){
  printf("%.2f %s", per, "Percent\nGrade A");
}else if(per>=80){
  printf("%.2f %s", per, "Percent\nGrade B");
}

}