#include<stdio.h>
#include<stdlib.h>

#define TOTAL 4
struct{
  char name[20];
  int num;
  char sex;
  char profession;
  union{
    float score;
    char course[20];
  } sc;
} bodys[TOTAL];

int main(){
  int i;
  for(i=0; i<TOTAL; i++){
    printf("Input info: ");
    scanf("%s %d %c %c", bodys[i].name, &(bodys[i].num), &(bodys[i].sex), &(bodys[i].profession));
    if(bodys[i].profession == 's'){
      scanf("%f", &bodys[i].sc.score);
    }else{
      scanf("%s", bodys[i].sc.course);
    }
    fflush(stdin);
  }

  printf("\nName\t\tNum\tSex\tProfession\tScore / Course\n");
  for(i=0; i<TOTAL; i++){
    if(bodys[i].profession == 's'){
      printf("%s\t%d\t%c\t%c\t\t%f\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].score);
    }else{
      printf("%s\t%d\t%c\t%c\t\t%f\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].course);
    }
  }
}

/*
  Input info: 
  chen 101 m t 100
  Input info: Yang 102 w s 150
  Yang 102 w s 150
  Input info: Nil 103 m t 111
  Nil 103 m t 111
  Input info: Emacs 104 w s 130
  Emacs 104 w s 130

  Name		Num	Sex	Profession	Score / Course
  chen	101	m	t		100
  Yang	102	w	s		150.000000
  Nil	103	m	t		111
  Emacs	104	w	s		130.000000
 */
