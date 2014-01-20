/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



@interface AADeviceLocatorService : NSObject

{

    int _lastKnownState;

    _Bool _hasAttemptedToFetchState;

    _Bool _wantsToEnable;

    NSObject<OS_dispatch_queue> *_stateUpdateQueue;

}



+ (id)sharedInstance;

- (void).cxx_destruct;

- (void)_updateStateAndNotify:(_Bool)arg1;

- (void)disableInContext:(int)arg1 withWipeToken:(id)arg2;

- (void)enableInContext:(int)arg1;

- (id)init;

- (_Bool)isChangingState;

- (_Bool)isEnabled;

- (void)setShouldEnable:(_Bool)arg1;

- (_Bool)shouldEnable;



@end

