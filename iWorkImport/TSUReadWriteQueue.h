/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;



__attribute__((visibility("hidden")))

@interface TSUReadWriteQueue : NSObject

{

    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;

    NSObject<OS_dispatch_queue> *mGlobalQueue;

    NSObject<OS_dispatch_group> *mInFlightReaders;

    NSObject<OS_dispatch_group> *mInFlightWriters;

}



- (void)dealloc;

- (id)initWithIdentifier:(id)arg1;

- (void)performAsyncWrite:(id)arg1;

- (void)performSyncRead:(id)arg1;

- (void)performSyncWrite:(id)arg1;

- (void)waitOnInFlightWriters;



@end

