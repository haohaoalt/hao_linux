# hao_linux
hao_linux
## 01 FILE_IO
背景知识
● open()函数用于打开或创建文件，在打开或者创建文件时可以指定文件的属性及用户的权限等各种参数。

● close()函数用于关闭一个被打开的文件。当一个进程终止时，所有被它打开的文件都由内核自动关闭，很多程序都使用这一功能而不显示地关闭一个文件。

● read()函数用于将从指定的文件中读出的数据放到缓存区中，并返回实际读入的字节数。若返回0，则表示没有数据可读，即已到达文件尾。读操作从文件的当前指针位置开始。当从设备文件中读出数据时，通常一次最多读一行。

● write()函数用于向打开的文件写数据。写操作从文件的当前指针位置开始，对磁盘文件进行写操作，若磁盘已满或者超出该文件的长度，则write()函数返回失败。

● lseek()函数用于在指定的文件描述符中将文件指针定位到相应的位置。每一个已打开的文件都有一个读写位置，当打开文件时，其读写位置通常指向文件开头；若是以附加的方式打开文件（如O_APPEND），则读写位置会指向文件尾。当read()或者write()时，读写位置会随之增加，lseek()便是用来控制该文件的读写位置的。它只能用在可定位（可随机访问）文件操作中。管道、套接字和大部分字符设备文件是不可定位的，所以在这些文件的操作中无法使用lseek()调用。