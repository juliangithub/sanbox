#!/bin/bash

boot="uboot"
kernel="linux-2.6.30"

echo "boot name : $boot"
echo "kernel name : $kernel"

if [ ! -d "./config" ]; then
        echo "missing config dir !";
        exit;
fi

if [  -d "./config_release" ]; then
        rm ./config_release -rf;
fi
mkdir config_release
mkdir -p ./config_release/$boot
mkdir -p ./config_release/$kernel
mkdir -p ./config_release/users
if [ ! -f ".config" ]; then
        echo "missing root config file!";
		rm config_release -rf ;
        exit;
else
		cp -rf .config ./config_release/
fi

if [ ! -f "$boot/.config" ]; then
        echo "missing $boot config file!";
		rm config_release -rf ;
        exit;
else
		cp -rf $boot/.config ./config_release/$boot
fi

if [ ! -f "$kernel/.config" ]; then
        echo "missing $kernel config file!";
		rm config_release -rf ;
        exit;
else
		cp -rf $kernel/.config ./config_release/$kernel
fi

if [ ! -f "./users/.config" ]; then
        echo "missing users config file!";
		rm config_release -rf ;
        exit;
else
		cp -rf ./users/.config ./config_release/users
fi

tar -cf config_release.tar config_release
echo "=====release config file success ===="
echo "************************************"
tree config_release -a
echo "************************************"