/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMDaemonListener, IMLocalObject, IMRemoteObject<IMRemoteDaemonProtocol>, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSString;



@interface IMDaemonController : NSObject

{

    id _delegate;

    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;

    NSMutableDictionary *_listenerMap;

    IMLocalObject *_localObject;

    IMDaemonListener *_daemonListener;

    NSMutableArray *_services;

    NSProtocolChecker *_protocol;

    NSString *_listenerID;

    NSObject<OS_dispatch_queue> *_listenerLockQueue;

    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;

    NSObject<OS_dispatch_queue> *_localObjectLockQueue;

    NSObject<OS_dispatch_queue> *_remoteMessageQueue;

    NSLock *_connectionLock;

    NSArray *_servicesToAllow;

    NSArray *_servicesToDeny;

    struct __CFRunLoopSource *_runLoopSource;

    NSLock *_blockingLock;

    _Bool _hasCheckedForDaemon;

    _Bool _preventReconnect;

    _Bool _inBlockingConnect;

    _Bool _acquiringDaemonConnection;

    _Bool _autoReconnect;

    _Bool _blocksConnectionAtResume;

    _Bool _hasBeenSuspended;

    unsigned int _gMyFZListenerCapabilities;

    unsigned int _cachedCapabilities;

    unsigned int _lastUpdatedCapabilities;

}



+ (_Bool)_applicationWillTerminate;

+ (void)_blockUntilSendQueueIsEmpty;

+ (void)_setApplicationWillTerminate;

+ (id)sharedController;

+ (id)sharedInstance;

- (_Bool)__isLocalObjectValidOnQueue:(id)arg1;

- (_Bool)__isRemoteObjectValidOnQueue:(id)arg1;

@property(setter=__setCapabilities:) unsigned int _capabilities; // @synthesize _capabilities=_gMyFZListenerCapabilities;

- (_Bool)_acquiringDaemonConnection;

- (void)_addressBookChanged:(id)arg1;

- (void)_agentDidLaunchNotification:(id)arg1;

@property(setter=_setAutoReconnect:) _Bool _autoReconnect; // @synthesize _autoReconnect;

- (void)_blockUntilSendQueueIsEmpty;

@property(nonatomic, setter=_setBlocksConnectionAtResume:) _Bool _blocksConnectionAtResume; // @synthesize _blocksConnectionAtResume;

- (void)_connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2;

- (void)_handleDaemonException:(id)arg1;

@property(retain, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;

- (void)_listenerSetUpdated;

- (void)_localObjectCleanup;

- (_Bool)_makeConnectionWithLaunch:(_Bool)arg1 completionBlock:(id)arg2;

- (void)_noteSetupComplete;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;

- (id)_remoteObject;

- (void)_remoteObjectCleanup;

@property(retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // @synthesize _servicesToAllow;

@property(retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // @synthesize _servicesToDeny;

- (void)_setCapabilities:(unsigned int)arg1;

- (_Bool)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;

- (void)blockUntilConnected;

@property(readonly, nonatomic) unsigned int capabilities;

- (unsigned int)capabilitiesForListenerID:(id)arg1;

- (_Bool)connectToDaemon;

- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1;

- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(_Bool)arg3;

- (void)dealloc;

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

- (void)disconnectFromDaemon;

- (void)disconnectFromDaemonWithForce:(_Bool)arg1;

- (void)forwardInvocation:(id)arg1;

- (_Bool)hasListenerForID:(id)arg1;

- (id)init;

@property(readonly, nonatomic) _Bool isConnected;

@property(readonly, nonatomic) _Bool isConnecting;

@property(readonly, nonatomic) IMDaemonListener *listener; // @synthesize listener=_daemonListener;

- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;

- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;

- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;

- (void)localObjectDiedNotification:(id)arg1;

- (_Bool)localObjectExists;

- (id)methodSignatureForSelector:(SEL)arg1;

- (void)remoteObjectDiedNotification:(id)arg1;

- (_Bool)remoteObjectExists;

- (_Bool)removeListenerID:(id)arg1;

- (void)sendABInformationToDaemon;

- (_Bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;

- (void)setDaemonLogsOutWithoutStatusListeners:(_Bool)arg1;

- (void)setDaemonTerminatesWithoutListeners:(_Bool)arg1;

- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;

- (void)setMyProfile:(id)arg1;

- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;

- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3;

- (void)systemApplicationDidEnterBackground;

- (void)systemApplicationDidResume;

- (void)systemApplicationDidSuspend;

- (void)systemApplicationWillEnterForeground;



@end


