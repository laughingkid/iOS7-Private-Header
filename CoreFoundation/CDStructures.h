/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#pragma mark Named Structures



struct Block_byref {

    void *_field1;

    struct Block_byref *_field2;

    int _field3;

    unsigned int _field4;

};



struct NSMethodFrameArgInfo {

    struct NSMethodFrameArgInfo *_field1;

    struct NSMethodFrameArgInfo *_field2;

    unsigned int _field3;

    unsigned int _field4;

    unsigned int _field5;

    unsigned int _field6;

    unsigned char _field7;

    char _field8;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned int :1;

    unsigned char _field9;

    char _field10[0];

};



struct _CFXPreferencesStatInfo {

    unsigned long long st_ino;

    long long st_size;

    struct timespec st_mtimex;

};



struct _NSRange {

    unsigned long long _field1;

    unsigned long long _field2;

};



struct __va_list_tag {

    unsigned int _field1;

    unsigned int _field2;

    void *_field3;

    void *_field4;

};



struct edge {

    unsigned long long _field1;

    unsigned long long _field2[2];

    unsigned long long _field3;

};



struct timespec {

    long long tv_sec;

    long long tv_nsec;

};



struct vertex {

    unsigned long long _field1;

    unsigned long long _field2;

    unsigned long long *_field3;

};



#pragma mark Typedef'd Structures



typedef struct {

    unsigned long long _field1;

    id *_field2;

    unsigned long long *_field3;

    unsigned long long _field4[5];

} CDStruct_70511ce9;



typedef struct {

    long long version;

    void *info;

    void *retain;

    void *release;

    void *copyDescription;

} CDStruct_4210025a;



typedef struct {

    long long _field1;

    long long _field2;

} CDStruct_912cb5d2;



typedef struct {

    struct NSMethodFrameArgInfo *_field1;

    struct NSMethodFrameArgInfo *_field2;

    unsigned int _field3;

    unsigned int _field4;

} CDStruct_52991635;


