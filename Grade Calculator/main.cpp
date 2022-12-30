#include <iostream>

using namespace std;

void grade_calculator(int ptr, int mark1, int mark2, int mark3)
{
float result = (float)(ptr + mark1 + mark2)/1.5;
char grade[] = {'0','0'};

if(result >= 84.5){
    grade[0] = 'A';
    grade[1] = 'A';
}
else if(result >= 74.5)
{

    grade[0] = 'A';
    grade[1] = 'B';
}
else if(result >= 64.5)
{

    grade[0] = 'B';
    grade[1] = 'B';
}else if(result >= 54.5)
{

    grade[0] = 'B';
    grade[1] = 'C';
}else if(result >= 44.5)
{

    grade[0] = 'C';
    grade[1] = 'C';
}else if(result >= 40)
{

    grade[0] = 'C';
    grade[1] = 'D';
}
else
{

    grade[0] = 'F';
    grade[1] = 'F';
}
printf("%4d. %4c \t %5d  %5c \t %5d %5c \t %4d %3c \t %s \n",ptr + 1,' ',mark1,' ',mark2,' ',mark3,' ',grade);
}
int main()
{
    int sub;
    cout << "Enter the number of subjects for the current sem:" << endl;
    cin >> sub;

    int sessional[sub];
    int practical[sub];
    int external[sub];

    cout << "Enter sub marks for the mentioned exams" << endl;

    for(int i = 0; i <= sub - 1; i++)
        {
         cout << "Enter avg marks for the 3 sessionals for the subject "<< i + 1 << " (Out of 40)" << endl;
         cin >> sessional[i];

         cout << "Enter practical marks for the subject " << i + 1 << "( Out of 50)" << endl;
         cin >> practical[i];

         cout << "Enter external marks for the subject " << i + 1 << "( Out of 60)" << endl;
         cin >> external[i];
        }
        cout << "Subjects \t Sessionals \t Practical \t External \t Grade \n\n\n" << endl;
        for(int i = 0; i <= sub - 1; i++){
                grade_calculator(i, sessional[i], practical[i], external[i]);
        }

    return 0;
}
