/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class NSString, UIWindow;



__attribute__((visibility("hidden")))

@interface UISpringBoardHostedView : UIView

{

    NSString *_remoteViewIdentifier;

    UIWindow *_remoteWindow;

    _Bool _remoteViewOpaque;

}



- (void)dealloc;

- (void)registerWithIdentifier:(id)arg1;

- (id)remoteViewIdentifier;

- (void)setRemoteViewOpaque:(_Bool)arg1;

- (void)unregister;



@end


