obj-$(CONFIG_SOC_CAMERA_AR0261)		+= ar0261_v4l2.o
obj-$(CONFIG_SOC_CAMERA_IMX074)		+= imx074.o
obj-$(CONFIG_SOC_CAMERA_IMX135)		+= imx135_v4l2.o
obj-$(CONFIG_SOC_CAMERA_IMX214)		+= imx214_v4l2.o
obj-$(CONFIG_SOC_CAMERA_IMX230)		+= imx230_v4l2.o
obj-$(CONFIG_SOC_CAMERA_MT9M001)	+= mt9m001.o
obj-$(CONFIG_SOC_CAMERA_MT9M111)	+= mt9m111.o
obj-$(CONFIG_SOC_CAMERA_MT9T031)	+= mt9t031.o
obj-$(CONFIG_SOC_CAMERA_MT9T112)	+= mt9t112.o
obj-$(CONFIG_SOC_CAMERA_MT9V022)	+= mt9v022.o
obj-$(CONFIG_SOC_CAMERA_OV2640)		+= ov2640.o
obj-$(CONFIG_SOC_CAMERA_OV23850)	+= ov23850_v4l2.o
obj-$(CONFIG_SOC_CAMERA_OV5640)		+= ov5640.o
obj-$(CONFIG_SOC_CAMERA_OV5642)		+= ov5642.o
obj-$(CONFIG_SOC_CAMERA_OV5650)		+= ov5650_v4l2.o
obj-$(CONFIG_SOC_CAMERA_OV5693)		+= ov5693_v4l2.o
obj-$(CONFIG_SOC_CAMERA_OV6650)		+= ov6650.o
obj-$(CONFIG_SOC_CAMERA_OV772X)		+= ov772x.o
obj-$(CONFIG_SOC_CAMERA_OV9640)		+= ov9640.o
obj-$(CONFIG_SOC_CAMERA_OV9740)		+= ov9740.o
obj-$(CONFIG_SOC_CAMERA_OV13860)		+= ov13860_v4l2.o
obj-$(CONFIG_SOC_CAMERA_RJ54N1)		+= rj54n1cb0c.o
obj-$(CONFIG_SOC_CAMERA_TW9910)		+= tw9910.o
obj-$(CONFIG_SOC_CAMERA_TC358840)	+= tc358840_v4l2.o

ifneq (,$(filter $(CONFIG_SOC_CAMERA_OV5693),y m))
	ccflags-y += -I$(srctree)/drivers/media/platform/tegra
endif
