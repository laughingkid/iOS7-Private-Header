/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSLock;



@interface _MFMailAccountProxySource : NSObject

{

    NSLock *_lock;

    NSArray *_accountProxies;

    _Bool _registeredForNotifications;

    int _notifyToken;

}



+ (id)defaultInstance;

- (void)_applicationDidEnterBackground:(id)arg1;

- (void)_deregisterForNotifications_nts;

- (void)_registerForNotifications_nts;

- (void)_resetAccountsChanged:(_Bool)arg1;

- (id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;

- (void)dealloc;

- (id)init;



@end


