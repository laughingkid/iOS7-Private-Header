/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class SUStorePageProtocol;



@interface UIViewController (SUStorePageChildViewController)

- (id)displayedURL;

@property(readonly, nonatomic) struct CGRect documentBounds;

- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;

@property(retain, nonatomic) SUStorePageProtocol *storePageProtocol;

- (void)storePageCleanupBeforeTearDown;

- (void)storePageProtocolDidChange;

- (_Bool)viewIsReady;

@end


