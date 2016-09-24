#cocos2d-x
开发流程：
开发环境的配置：win 10 + vs2012 + coco2d-x-3.9 + python 2.7.3
1.安装配置python2.7.3，参见官网：http://www.cocos.com/docs/cocos2d-x/v3/getting-started/setting-up-development-environments-on-windows7-with-vs2013/zh.html

2.运行cocos目录下的setup.py,设置好android SDK，NDK等相应环境变量；
	Android NDK 安装：
		下载网站：http://www.androiddevtools.cn/（最新版本，无影响）
		将下载的压缩包解压到coco2d-x 中目录Cocos下，先不要配置环境变量；运行setup.py的时候，将路径（打开build路径）复制进去即可。

	Apache-ANT安装：
		下载网站：http://archive.apache.org/dist/ant/binaries/
		同上，复制到coco2d-x 中目录Cocos下，先不要配置环境变量；运行setup.py的时候，将路径（打开bin路径）复制进去即可。
	android SDK 安装： 由于写过Android的开发，直接将sdk 的路径复制进去；
3.设置完成之后新建一个cocos工程：
	打开终端，进入D:\cocos2d-x-3.9\tools\cocos2d-console\bin（D:\cocos2d-x-3.9\	我的安装路径），运行：python cocos.py new HelloCpp -p com.coco2dx.org -l cpp 		-d ~/Desktop即可创建；
	参数说明：
		· HelloCpp为项目名称
		· -p后面接包名
		· -l后面接开发语言类型，有cpp, lua, js三种类型
		 .-d后面接项目存放的目录
4.用VS运行该项目：
	打开项目中proj.win32目录，用vs打开HelloCpp.sln 即可（我比较幸运，直接能编译	运行）；

5.想深入学习C++ ,于是找了coco2d-x，制作几个小程序，练练手：第一个小程序《时钟程序》，敬请期待下一个更高级一些的作品：游戏
	知识点：1.生命周期
		2.基础概念介绍——导演、场景、层、精灵
		3.计时器的使用
		4.director 类设计设计模式，事件监听的回调机制
6.项目介绍：
	resource目录下是:资源文件
	其余为主要的类；

千里之行始于足下，贵于坚持不懈！！