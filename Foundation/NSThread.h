/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSThread : NSObject

{

    id _private;

    unsigned char _bytes[44];

}



+ (id)callStackReturnAddresses;

+ (id)callStackSymbols;

+ (id)currentThread;

+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;

+ (void)exit;

+ (_Bool)isDying;

+ (_Bool)isMainThread;

+ (_Bool)isMultiThreaded;

+ (id)mainThread;

+ (_Bool)setThreadPriority:(double)arg1;

+ (void)sleepForTimeInterval:(double)arg1;

+ (void)sleepUntilDate:(id)arg1;

+ (double)threadPriority;

- (void)_nq:(id)arg1;

- (void)cancel;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (_Bool)isCancelled;

- (_Bool)isDying;

- (_Bool)isExecuting;

- (_Bool)isFinished;

- (_Bool)isMainThread;

- (void)main;

- (id)name;

- (id)runLoop;

- (void)setName:(id)arg1;

- (void)setStackSize:(unsigned long long)arg1;

- (void)setThreadPriority:(double)arg1;

- (unsigned long long)stackSize;

- (void)start;

- (id)threadDictionary;

- (double)threadPriority;



@end

