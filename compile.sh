#!/bin/sh

echo "sudo umount ~/Music"
sudo umount ~/Music
echo "sudo rmmod wrapfs"
sudo rmmod wrapfs
echo "sudo make"
sudo make
echo "sudo insmod wrapfs.ko"
sudo insmod wrapfs.ko
echo "sudo mount -t wrapfs ~/Music ~/Music"
sudo mount -t wrapfs ~/Music ~/Music

