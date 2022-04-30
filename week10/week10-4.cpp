#include <stdio.h>
#include <vector> ///�I�X���N�� std::vector<Student>
#include <algorithm> ///�I�X���N�� std::sort() �����Ƨ�,��!
class Student { ///(�j�g)�ǥ� �̭���
public: ///���}���O�H��,�ҥH main()�i�H�s����̭������
    char name[30];///�W�r(30�r��)
    int grade;///����
};
///Student student[100];///(�j�g)Student student[100];//��100��student
bool compare( Student a, Student b ){
    return (a.grade > b.grade) ;
}
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf( fin, "%d", &N );

    std::vector<Student> student(20);
    for(int i=0; i<N; i++){
        fscanf( fin, "%s %d", student[i].name, &student[i].grade );
    }

    std::sort( student.begin(), student.end(), compare );

    for(int i=0; i<N; i++){
        printf("%s %d\n", student[i].name, student[i].grade );
    }
}

