/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MFContactsSearchConsumer.h"



@class MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber;



@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer>

{

    id <MFMailComposeContactsSearchControllerDelegate> _delegate;

    MFContactsSearchManager *_manager;

    MFContactsSearchResultsModel *_model;

    NSNumber *_taskID;

    NSNumber *_corecipientSearchTaskID;

    _Bool _foundAnySearchResults;

    unsigned long long _waitingOnSearchResultsCount;

}



- (void)_cancelSearchAndNotify:(_Bool)arg1;

- (void)_finishSearch;

- (void)beganNetworkActivity;

- (void)cancelSearch;

- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;

- (void)dealloc;

@property(nonatomic) id <MFMailComposeContactsSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)endedNetworkActivity;

- (void)findCorecipientsWithRecipients:(id)arg1;

- (void)finishedSearchingForType:(int)arg1;

- (void)finishedTaskWithID:(id)arg1;

- (id)init;

- (void)searchWithString:(id)arg1;

- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2;

@property(retain, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;



@end

