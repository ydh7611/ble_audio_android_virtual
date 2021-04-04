#!/bin/bash

# The following definitions should be modified to match the user's installation and toolchain
KERNEL_DIR      ?= /media/ydh7611/ANDROID_O/android_p/mokee4sagit/out/target/product/sagit/obj/KERNEL_OBJ
NDK=/home/ydh7611/nfs_rootfs/toolchain/android-ndk-r22
TOOLCHAIN=$(NDK)/toolchains/llvm/prebuilt/linux-x86_64
API=21
SYSROOT=$(TOOLCHAIN)/sysroot
CC=$(TOOLCHAIN)/bin/aarch64-linux-android$(API)-clang
CXX=$(TOOLCHAIN)/bin/aarch64-linux-android$(API)-clang++

CFLAGS=-march=armv8-a -fpic

SRCS =  dev_list.c audio.c main.c

SRCS += dev_default.c
SRCS += ADPCMDecoder.c
hidraw_daemon: FORCE
	$(CC) $(CFLAGS) $(DFLAGS) -o audio_d $(SRCS) --sysroot=$(SYSROOT)  $(LIBS)
#	adb push hidraw_daemon /data/
#	adb shell /data/hidraw_daemon

capture_audio: FORCE
	$(CC)  -o  capture_audio adpcm_decoder.c audiod.c

clearpair: FORCE
	$(CC) -o clearpair clearpair.c

FORCE:

clean:
	rm -rf audio_d *.o

