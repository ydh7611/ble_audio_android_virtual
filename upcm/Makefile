########################
# CSR UPCM ALSA driver #
########################
KERNEL_DIR ?= /media/ydh7611/ANDROID_O/android_p/mokee4sagit/out/target/product/sagit/obj/KERNEL_OBJ 
PWD             := $(shell pwd)
obj-m           := upcm.o
CCPATH := /media/ydh7611/ANDROID_O/android_p/mokee4sagit/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin

all:upcm.ko
upcm.ko:
#	$(MAKE) -C $(KDIR) M=`pwd` EXTRA_CLFAGS=-fno-pic modules
	@echo "Building upcm_loopback driver..."
	$(MAKE) ARCH=arm64 CROSS_COMPILE=$(CCPATH)/aarch64-linux-android- -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
