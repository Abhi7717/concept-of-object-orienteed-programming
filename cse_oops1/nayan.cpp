#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    string name;
    int roll;
    int marks[5];

};
int tmarkPerc(student *s2,int n);
void display(student *s2,int n,int *m);
void ascending(student *s2,int n);
int n;
int sum[n];
int main()
{
    int *m;
    cout<<"enter the numebr of student\n";
    cin>>n;
    struct student s1[n];
    for(int i=0;i<n;i++)
    {
    cout<<"\nenter the name of the student 1\n";
    cin>>s1[i].name;
    cout<<"emter the roll number of the student\n";
    cin>>s1[i].roll;
    for(int j=0;j<5;j++)
    {
    cout<<"enter the marks of all 5 subject\n";
    cin>>s1[i].marks[j];
    }
    }

    *m=tmarkPerc(s1,n);
    // cout<<"sum ="<<m;
    display(s1,n,m);
    return 0;
}


int tmarkPerc(student *s2,int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        sum[i]+=s2[i].marks[j];
       
    }
//    cout<<"total marks = "<<sum<<"percentage ="<<(sum/5)*100;
 return sum;
}


void display(student *s2,int n,int *m)
{
    // int m;
    for(int i=0;i<n;i++)
    {
    cout<<"\nenter the name of the student 1\n"<<s2[i].name<<endl;
    // cin>>s1[i].name;
    cout<<"\nemter the roll number of the student\n"<<s2[i].roll<<endl;
    // cin>>s1[i].roll;
    for(int j=0;j<5;j++)
    {
    cout<<"\nenter the marks of all 5 subject\n"<<s2[i].marks[j]<<endl;
    // cin>>s1[i].marks[j];
    }
    //  m=tmarkPerc(s1,n);
    // cout<<"sum ="<<m<<endl;
    cout<<"total marks = "<<m[i]<<"percentage ="<<(m[i]/10)*100<<endl;
    }
}
void ascending(student *s2,int n)
{

}


// #include <iostream>

// #define NUMBER_OF_STUDENTS 5
// #define NUMBER_OF_SUBJECTS 5

// char subjects[5][31] = {"Mathematics", "Physics", "Data Structures and Algorithms",
//                         "Discrete Mathematics", "Object Oriented Programming"};

// typedef struct {
//     char name[30];
//     int roll_number;
//     float marks[NUMBER_OF_SUBJECTS];
// } Student;

// void createStudent(Student *student) {
//     printf("Please enter the required details for the student as followed:\n");
//     printf(">>> Name        :");
//     scanf("%s", student->name);
//     printf(">>> Roll Number :");
//     scanf("%i", &student->roll_number);
//     for (int i = 0; i < NUMBER_OF_SUBJECTS; ++i) {
//         printf(">>> Marks in %-30s:", subjects[i]);
//         scanf("%f", &student->marks[i]);
//     }
// }

// float calculateTotalMarks(Student *student) {
//     float marks = 0;
//     for (int i = 0; i < NUMBER_OF_SUBJECTS; ++i)
//         marks += student->marks[i];
//     return marks;
// }

// float calculatePercentage(Student *student) {
//     return calculateTotalMarks(student) / NUMBER_OF_SUBJECTS;
// }

// void display(Student *student) {
//     printf("Student Details\n");
//     printf(" | Name        : %s\n", student->name);
//     printf(" | Roll Number : %i\n", student->roll_number);
//     for (int i = 0; i < NUMBER_OF_SUBJECTS; ++i)
//         printf(" | Marks in %-30s: %f\n", subjects[i], student->marks[i]);
// }

// void displayAllWithin(Student students[], float minimum, float maximum) {
//     for (int i = 0; i < NUMBER_OF_STUDENTS; ++i) {
//         float marks = calculatePercentage(students + i);
//         if (marks < maximum && marks > minimum)
//             display(students + i);
//     }
// }

// void swapStudents(Student *a, Student *b) {
//     Student t = *a;
//     *a = *b;
//     *b = t;
// }

// void sort(Student students[]) {
//     float marks[NUMBER_OF_STUDENTS];
//     for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
//         marks[i] = calculatePercentage(students + i);
//     for (int i = 0; i < NUMBER_OF_STUDENTS; ++i) {
//         for (int j = i + 1; j < NUMBER_OF_STUDENTS; ++j) {
//             if (marks[i] > marks[j]) {
//                 marks[i] += marks[j];
//                 marks[j] = marks[i] - marks[j];
//                 marks[i] = marks[i] - marks[j];
//                 swapStudents(students + i, students + j);
//             }
//         }
//     }
// }

// int main() {
//     Student students[NUMBER_OF_STUDENTS];

//     for (int i = 0; i < NUMBER_OF_STUDENTS; ++i) {
//         createStudent(&(students[i]));
//     }

//     return 0;
// }