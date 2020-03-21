# EasyLang-Study
易语言学习 篇 辅助编写就靠你了  
这个学完 玩下  C++

### 基础篇章 
- hello world [day1/demo1.e]
- 数据类型&函数 [day/demo2.e]
- 窗口组件 & 局部变量 & 全局变量 & struct & 数组 & 窗口事件 &循环 & 模块调用  [day2/demo3.e] `易语言这货是傻逼 数组从1开始 这么不按套路出牌`
- 资源表与窗口类型 [day2/demo1.e]
- 菜单与网络 & 配置文件 & 注册表 [day2/demo2.e]
- 代码纠错 & 调试分析
- 文件读写 & 易类 [day2/demo3.e]
- 时钟和线程 [day3/demo1.e] (时钟 一个线程定时执行某方法)
- 一个简单游戏登陆器 [day3/demo2.e]


### 获取进程
- CMD获取启动的进程
```
wmic
process
process where (description="chrome.exe")
```
- OD 在CreateProcessA api上断点 捕获


### 辅助入门
- 窗口相关 与 热键 [day3/demo3.e]  (需要超级模块支持)
- 鼠标和键盘事件 模拟操作  获取东西(窗口句柄 等) [day4/demo1.e]
- 获取控件坐标 和 获取颜色 [day4/demo1.e]
- 进制转换 [day4/demo2.e]
- 进程 和 程序

### 内存
1. 字节(cha)  (一字节 8bit  每一个bit可以存储0 or 1) = 256 种不同的结果  （0~255）
2. int32 (32bit) 2^31 -1