#include<stdio.h>

struct complex
{
    float real;
    float img;
};
int main()
{
    struct complex c1,c2,c3;

    printf("enter the real part of complex1");
    scanf("%f",&(c1.real));
    printf("enter the imaginay part complex 1");
    scanf("%f",&(c1.img));
    
    printf("enter the real part complex 2");
    scanf("%f",&(c2.real));
    printf("enter the imaginay part complex 2");
    scanf("%f",&(c2.img));
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    printf("sum = %.1f + i %.1f",c3.real,c3.img);
    return 0;
}


// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP>  & 'c:\Users\KIIT\.vscode\extensions\ms-vscode.cpptools-1.11.3-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-pf35sb3g.ooz' '--stdout=Microsoft-MIEngine-Out-vwzubsiv.3mp' '--stderr=Microsoft-MIEngine-Error-4axiseej.neq' '--pid=Microsoft-MIEngine-Pid-mjoqjils.chl' '--dbgExe=C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gdb.exe' '--interpreter=mi' 
// enter the real part of complex1
// 3
// enter the imaginay part complex 1
// 4
// enter the real part complex 2
// 5
// enter the imaginay part complex 2
// 6
// sum = 8.0 + i 10.0
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP>
