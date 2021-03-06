/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SFUOutputStream.h"



__attribute__((visibility("hidden")))

@interface SFUOffsetOutputStream : NSObject <SFUOutputStream>

{

    id <SFUOutputStream> mOutputStream;

    long long mInitialOffset;

}



- (_Bool)canCreateInputStream;

- (_Bool)canSeek;

- (void)close;

- (id)closeLocalStream;

- (void)dealloc;

- (id)initWithOutputStream:(id)arg1;

- (id)inputStream;

- (long long)offset;

- (void)seekToOffset:(long long)arg1 whence:(int)arg2;

- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;



@end


