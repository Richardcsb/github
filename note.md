#### 1.
- git clone https://github.com/racaljk/hosts.git	
- sudo rm /etc/hosts
- sudo ln -s /home/c/hosts /etc/s/hosts
- watch -n 5 who (等待用户登录)
- stat
---
#### 2.scrip:
- 写一个后缀为.sh的文本
- chmod +x ./scrip.sh                            //添加权限
-  ./srip.sh
---
#### 3.配置xx-net全局变量
- 自动
- URL:http://127.0.0.1:8086/proxy.pac
---
#### 4.server
- ssh root@60.205.223.161 			//root权限登录服务器
- ssh chen@60.205.223.161	
- ##### 添加一个用户:
- adduser username
- usermod -aG sudo username//添加sudo权限

- passwd chen
-  visuso//添加普通用户权限
- userdel -r chen//删除
---
#### 5.install mqtt
- sudo apt install mosquitto
- mosquitto -r 1883 -d
---
#### 6.remove
- sudo apt purge <package>   //删除软件包不保留配置文件
- sudo apt autoremove <package>  //删除为满足依赖而安装的软件包但现在不需要
- sudo apt autoclean <package>   //删除archives/目录下过期*.deb
- sudo apt clean <package>       //删除archives/目录下所有*.deb
#### \#删除软件及其配置文件
- sudo apt --purge remove <*package*>
***
#### 7.ps command
- ps -e | grep apt (ever use)
- \-e：显示所有程序
- \-f：显示UID,PPIP,C与STIME栏位
- \-f：显示UID,PPIP,C与STIME栏位
#### 8.hexo安装
-
-sudo apt-get install nodejs-legacy
-sudo npm install -g hexo-cli
-参考https://hexo.io
#### 9.创建桌面图标
[Desktop Entry]
  2 Version=default
  3 Name=XX-Net
  4 Exec=/home/shao/Documents/install/XX-Net-master/start > /dev/null
  5 Terminal=false
  6 Icon=/home/shao/Documents/install/XX-Net-master/code/default/launcher/web_ui    /favicon.ico
  7 Type=Application
  8 Categories=Development

cp XX-Net.desktop ~/.local/share/applications