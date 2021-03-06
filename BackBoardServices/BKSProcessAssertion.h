/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class BKSSignal, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;



@interface BKSProcessAssertion : NSObject

{

    NSObject<OS_dispatch_queue> *_queue;

    NSObject<OS_xpc_object> *_serverConnection;

    _Bool _valid;

    BKSSignal *_invalidationSignal;

    int _pid;

    NSString *_bundleIdentifier;

    NSString *_name;

    unsigned int _flags;

    unsigned int _reason;

    id _invalidationHandler;

    id _acquisitionHandler;

}



+ (id)NameForReason:(unsigned int)arg1;

@property(copy, nonatomic) id acquisitionHandler; // @dynamic acquisitionHandler;

- (void)dealloc;

@property(nonatomic) unsigned int flags; // @dynamic flags;

- (id)init;

- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id)arg5;

- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id)arg5;

- (void)invalidate;

@property(copy, nonatomic) id invalidationHandler; // @dynamic invalidationHandler;

@property(copy, nonatomic) NSString *name; // @dynamic name;

- (void)queue_acquireAssertion;

- (void)queue_invalidate:(_Bool)arg1;

- (void)queue_notifyAssertionAcquired:(_Bool)arg1;

- (void)queue_registerWithServer;

- (void)queue_updateAssertion;

@property(readonly, nonatomic) unsigned int reason; // @dynamic reason;

- (void)setReason:(unsigned int)arg1;

- (void)setValid:(_Bool)arg1;

@property(readonly, nonatomic) _Bool valid; // @dynamic valid;



@end


