/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UIRemoteViewController.h"



#import "SKUIClientStorePageViewController.h"



@class SKStorePageViewController;



__attribute__((visibility("hidden")))

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController>

{

    SKStorePageViewController *_storePageViewController;

}



+ (id)exportedInterface;

+ (id)serviceViewControllerInterface;

- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

@property(nonatomic) __weak SKStorePageViewController *storePageViewController; // @synthesize storePageViewController=_storePageViewController;

- (void)showProductPageWithItemIdentifier:(id)arg1;



@end


