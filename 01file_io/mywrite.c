#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int fd = -1; // 文件描述符
                 // 打开文件
    fd = open("data.txt", O_RDWR);

    if (-1 == fd)
    {
        printf("文件打开失败\n");
    }
    else
    {
        printf("文件打开成功,fd=%d\n", fd);
    }
    // 写文件
    char buf[] = "Hello,Linux!,I can write a file.";
    int count = 0;
    count = write(fd, buf, strlen(buf));
    if (-1 == count)
    {
        printf("文件写入失败\n");
    }
    else
    {
        printf("文件写入成功，实际写入的字节数目为:%d\n", count);
    }

    // 关闭文件
    close(fd);

    return 0;
}