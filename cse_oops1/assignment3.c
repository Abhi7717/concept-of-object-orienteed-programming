#include<stdio.h>
#include<string.h>
struct studentt
{
    char name[30];
    int rollno;
    float cgpa;
};
int main()
{
    struct studentt x[3];
    for(int i=0;i<3;i++)
    {
        
        printf("\nenter the name\n");
                gets(x[i].name);
        
        printf("enter the ropll no amd cgpa");
        scanf("%d %f",&x[i].rollno,&x[i].cgpa);
        getchar();
    }
    for(int j=0;j<3;j++)
    {
        printf("\nname of the students : ");
        puts(x[j].name);
    
        printf("\nroll no. = %d cgpa = %f \n",x[j].rollno,x[j].cgpa);

    }
    return 0;
}

// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP>  & 'c:\Users\KIIT\.vscode\extensions\ms-vscode.cpptools-1.11.3-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-gqf2ewka.uud' '--stdout=Microsoft-MIEngine-Out-rs0ccshh.fbr' '--stderr=Microsoft-MIEngine-Error-4opbvtsv.3z0' '--pid=Microsoft-MIEngine-Pid-40iucs2f.tgv' '--dbgExe=C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gdb.exe' '--interpreter=mi' 

// /enter the name
// abhijit kumar
// enter the ropll no amd cgpa
// 2044
// 9.09

// enter the name
// abhishek kuamr
// enter the ropll no amd cgpa
// 2045
// 9.8

// enter the name
// abhi
// enter the ropll no amd cgpa
// 2044
// 9.99

// name of the students : abhijit kumar

// roll no. = 2044 cgpa = 9.090000

// name of the students : abhishek kuamr

// roll no. = 2045 cgpa = 9.800000

// name of the students : abhi

// roll no. = 2044 cgpa = 9.990000
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP> 