/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVWeakReference, NSObject<OS_dispatch_queue>;



@interface AVPlayerItemOutputInternal : NSObject

{

    AVWeakReference *weakReference;

    NSObject<OS_dispatch_queue> *timebaseReadWriteQueue;

    struct OpaqueCMTimebase *timebase;

}



@end


