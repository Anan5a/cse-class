#include <stdio.h>
#include <string.h>

void sort123(float*, int*, char*, int);

int main()
{
    int max = 3;
    int roll[3] = {2342, 34234, 35234}, i;
    char name[3][100];


    float gpa[3] = {4.34, 3.222, 2.22};

    printf("Enter the Name Roll GPA: \n");
    for(i=0;i<max;i++)
        gets(name[i]);

      for(i=0;i<max;i++)
        printf("%s, %d, %f", name[i], roll[i], gpa[i]);
    sort123(gpa, roll, name, max);
}

void sort123(float *gpa, int *roll, char *name, int elements)
{
    int i,j;
    for(i=0;i<elements-1;i++){
           // printf("DBG %d %f %s\n", *(gpa+i), *(roll+i), *(name+i));
        for(j=0;j<elements-1-i;j++){
            if(*(gpa+j) > *(gpa+j+1)){
                float tmp = *(gpa+j);
                int tmp_roll = *(roll+j);
                char tmp_name[100];
              //  printf("%s %s %s\n", tmp_name, (name+j), (name+j+1));
                //tmp_name = *(name+j);

                *(gpa+j) = *(gpa+j+1);
                *(gpa+j+1) = tmp;

                strcpy(tmp_name, (name+(j*100)));
                strcpy((name+(j*100)), (name+((j+1)*100)));
               // printf("%s\n", name+j);
                strcpy((name+(j+1)*100), tmp_name);
               // printf("%s %s %s %x %x %x\n", tmp_name, (name+j), (name+j+1), &tmp_name, *(name+j), *(name+j+1));

                //* = *;
                //* = ;

                *(roll+j) = *(roll+j+1);
                *(roll+j+1) = tmp_roll;
            }
        }
    }
}
