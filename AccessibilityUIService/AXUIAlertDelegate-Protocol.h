/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol AXUIAlertDelegate <NSObject>



@optional

- (void)alertWithIdentifierDidAppear:(id)arg1;

- (void)alertWithIdentifierDidDisappear:(id)arg1;

- (void)alertWithIdentifierWasEnqueued:(id)arg1;

- (double)delayForDequeuingAlertWithIdentifier:(id)arg1;

- (double)desiredWindowLevelForAlertWithIdentifier:(id)arg1;

- (id)styleProviderForAlertWithIdentifier:(id)arg1;

@end

