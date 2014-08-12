LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := out-of-bound.c
LOCAL_MODULE := out_of_bound
LOCAL_CFLAGS := -g -O0
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := out-of-bound2.c
LOCAL_MODULE := out_of_bound2
LOCAL_CFLAGS := -g -O0
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := out-of-bound3.c
LOCAL_MODULE := out_of_bound3
LOCAL_CFLAGS := -g -O0
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := memory-leak.c
LOCAL_MODULE := memory_leak
LOCAL_CFLAGS := -g -O0
include $(BUILD_EXECUTABLE)

