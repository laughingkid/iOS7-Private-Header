/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMAVDaemonListener, IMLocalObject, IMRemoteObject<IMAVDaemonProtocol>, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSString;



@interface IMAVDaemonController : NSObject

{

    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;

    IMLocalObject *_localObject;

    IMAVDaemonListener *_daemonListener;

    NSProtocolChecker *_protocol;

    NSString *_listenerID;

    NSMutableArray *_listeners;

    NSLock *_connectionLock;

    NSObject<OS_dispatch_queue> *_listenerLockQueue;

    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;

    NSObject<OS_dispatch_queue> *_remoteMessageQueue;

    NSObject<OS_dispatch_queue> *_localObjectLockQueue;

    struct __CFRunLoopSource *_runLoopSource;

    _Bool _hasCheckedForDaemon;

    _Bool _acquiringDaemonConnection;

}



+ (id)sharedInstance;

- (_Bool)__isLocalObjectValidOnQueue:(id)arg1;

- (_Bool)__isRemoteObjectValidOnQueue:(id)arg1;

- (void)_cleanUpConnection;

- (void)_connectToDaemon;

- (void)_disconnectFromDaemon;

- (void)_listenerSetUpdated;

- (void)_localObjectCleanup;

- (void)_localObjectDiedNotification:(id)arg1;

- (_Bool)_makeConnectionWithCompletionBlock:(id)arg1;

- (void)_noteSetupComplete;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;

- (void)_remoteObjectCleanup;

- (void)_remoteObjectDiedNotification:(id)arg1;

- (_Bool)addListenerID:(id)arg1;

- (void)dealloc;

- (void)forwardInvocation:(id)arg1;

- (_Bool)hasListenerForID:(id)arg1;

- (id)init;

- (_Bool)isConnected;

- (_Bool)isConnecting;

@property(readonly, nonatomic) IMAVDaemonListener *listener; // @synthesize listener=_daemonListener;

- (void)localObjectDiedNotification:(id)arg1;

- (_Bool)localObjectExists;

- (id)methodSignatureForSelector:(SEL)arg1;

- (void)remoteObjectDiedNotification:(id)arg1;

- (_Bool)remoteObjectExists;

- (_Bool)removeListenerID:(id)arg1;



@end

