#!/bin/bash

cp kali-nethunter-kernel/nethunter/Image.gz-dtb /media/kimocoder/1cb8e994-e350-457c-bf6d-51c768f325cd/kali-nethunter-project/nethunter-installer/devices/ten/oneplus6-oos/Image.gz-dtb
rm -rf /media/kimocoder/1cb8e994-e350-457c-bf6d-51c768f325cd/kali-nethunter-project/nethunter-installer/devices/ten/oneplus6-oos/modules/system_root/lib/modules/*
cp -a kali-nethunter-kernel/nethunter/modules/system_root/lib/modules/4.9.259-NetHunter/ /media/kimocoder/1cb8e994-e350-457c-bf6d-51c768f325cd/kali-nethunter-project/nethunter-installer/devices/ten/oneplus6-oos/modules/system_root/lib/modules/

echo "Done!"
