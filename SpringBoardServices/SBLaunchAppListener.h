/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSLock, NSString;



@interface SBLaunchAppListener : NSObject

{

    NSString *_displayIdentifier;

    id _block;

    NSLock *_lock;

    _Bool _launched;

    int _notifyToken;

    int _notifyAppExitedToken;

    unsigned int _notifyRegisterStatus;

    unsigned int _notifyAppExitedStatus;

}



+ (_Bool)waitForLaunchThatSpringBoardKnowsAbout:(id)arg1 timeout:(double)arg2;

- (void)_didFailToLaunch;

- (void)_didLaunch;

- (void)dealloc;

- (id)initWithDisplayIdentifier:(id)arg1 handlerBlock:(id)arg2;

- (void)invalidate;



@end

