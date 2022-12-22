#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int rollno;
    int sub1,sub2,sub3;

};
int main()
{
    struct student x;
    printf("enter the name of the student\n");
    gets(x.name);
    // puts(x.name);
    printf("enter the roll no.\n");
    scanf("%d",&x.rollno);
    printf("enter the marks of the subject1\n");
    scanf("%d",&x.sub1);
    printf("enter the marks of the subject2\n");
    scanf("%d",&x.sub2);
    printf("enter the marks of the subject3\n");
    scanf("%d",&x.sub3);
    int avg=(x.sub1+x.sub2+x.sub3)/3;
    printf("name of the student : ");
    puts(x.name);
    printf("\n Roll no. of the student : %d",x.rollno);
    printf("\n Avg. of the student marks : %d",avg);

}

// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP>  & 'c:\Users\KIIT\.vscode\extensions\ms-vscode.cpptools-1.11.3-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-twi5izfy.yz4' '--stdout=Microsoft-MIEngine-Out-slgqwvep.udb' '--stderr=Microsoft-MIEngine-Error-2i3wkzh4.v0f' '--pid=Microsoft-MIEngine-Pid-bxavkn2e.ath' '--dbgExe=C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gdb.exe' '--interpreter=mi' 
// enter the name of the student
// abhijit kumar
// enter the roll no.
// 2044
// enter the marks of the subject1
// 80
// enter the marks of the subject2
// 82
// enter the marks of the subject3
// 90
// name of the student : abhijit kumar

//  Roll no. of the student : 2044
//  Avg. of the student marks : 84
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP> 