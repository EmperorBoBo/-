##Linux 入门

>在Linux中第一个字符代表这个文件是目录、文件或链接文件等等。

-  当为【d】 则是   `目录`(directory)
-  当为【-】 则是   `文件`
-  当为 【l】 则是`链接文档` （link file）
- 当为 【b】则表示为  `装置文件里面的可供存储的接口设备`（可随机存储设备）
- 当为 【c】则表示为 `为装置文件里面的串行端口设备，例如键盘、鼠标`（一次性读取装置）

```

[root@www /]# ls -l
total 64
dr-xr-xr-x   2 root root 4096 Dec 14  2012 bin                    (d  r-x  r-x  r-x)
dr-xr-xr-x   4 root root 4096 Apr 19  2012 boot                   ( d r-x r-x r-x)
……

```
>目录和常见命令

* ls         列出文件目录                                 (list)    
* cd       切换目录                                      （ change directory）
* pwd     显示当前目录                                   (print  working directory)
* mkdir    创建新的目录                                （make directory）
* rmdir    移除空目录                                    （remove  directory）
* cp         复制文件或者目录                        （copy）
* rm       移除文件或者目录                         （remove）
* mv      移动或者修改 文件或者目录名字      （move）

**可用   ``man (manufacture)`` 命令查看   相应命令的 详细用法**

>文件内容查看

- cat    从第一行 开始显示文件内容   
- tac    从最后一行开始显示内容
- nl      显示的时候显示行号
- more 一页一页的现实内容
- less   与more 类似，可以向前翻页
- head  只看头几行
- tail     只看末尾几行

>磁盘管理

- df  列出磁盘使用量
- du  检查磁盘使用量  (disk usage)
- fdisk 磁盘分区操作工具
 - fsck 磁盘系统检测   （file system ckeck）
-  mount 磁盘的挂载
- unmount 磁盘的卸载




