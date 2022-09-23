#include <stdio.h>                                                                                         
#include <unistd.h>
#include <string.h>

void ProcBar()
{
    int i = 0;
    char proc[102];
    memset(proc, '\0', sizeof(proc));

    while(i <= 100)
    {
        //C语言格式控制时默认右对齐，在前面加 - 变成左对齐
        printf("[%-100s] [%d%%]\r", proc, i);
        fflush(stdout); //刷新屏幕打印
        proc[i] = '#';
        usleep(10000); //以微妙为单位
        i++;
    }
    printf("\n");
}

int main()
{
    ProcBar();    
    return 0;
}


