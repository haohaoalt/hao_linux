
# 使用说明

创建虚拟can接口
```shell
sudo modprobe can
sudo modprobe vcan
sudo ip link add vcan0 type vcan
sudo ip link set up van0
```

编译 cantalker.cpp 生成a.out

sudo apt install can-utils

candump vcan0   #监听vcan0 虚拟can口

运行 a.out

candump有输出 vcan0  123   [2]  11 22