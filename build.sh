##!/bin/bash

##配置环境
npm install -g hexo-cli
mkdir hexo
cd hexo
hexo init
npm install
rm -rf source/_posts
mkdir -p source/_posts

##安装主题(可以修改成自己喜欢的主题)
npm i hexo-theme-ayer -S

##安装实现网页搜索功能(看你的主题是否支持)(可选)
npm install hexo-generator-searchdb --save

##安装文章置顶(可选)
npm install hexo-generator-index-pin-top --save

##复制文章到指定目录
cd ../
cp -r `ls | grep -v hexo | grep -v config.yml | xargs` hexo/source
##复制配置文件
cp config.yml hexo

##开始构建
cd hexo && hexo g --config config.yml