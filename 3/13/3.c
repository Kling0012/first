
#include <stdio.h>
#define NAME_LEN 64
typedef struct {
char name[NAME_LEN];
int height;
float weight;
long schols;
} Student;
char *top_bmi_name(Student s[], int n) {
/* sの中でBMIが一番大きい人の名前を返す．nは配列の要素数． */

int i ,j,bmi,top=0,id=0;
i=0;
while (1)
{
    /* code */
    
    bmi=s[i].weight/(s[i].height * s[i].height);
    i++;
    if (top<bmi)
    {
        /* code */
        top=bmi;
        id=i;
    }
    
    if (i==n)
    {
        /* code */
        break;
    }
    
    return s[id].name ;

}


}
int main(void) {
Student std[] = {
{ "Sato", 178, 61.2, 80000},
{ "Sanaka", 175, 62.5, 73000},
{ "Takao", 173, 86.2, 0},
{ "Mike", 165, 72.3, 70000},
{ "Masaki", 179, 77.5, 70000},
};
printf("BMIが最大なのは%sです．\n", top_bmi_name(std, 5));
}