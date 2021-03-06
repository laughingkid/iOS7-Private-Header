/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate, NSMutableDictionary, NSObject<OS_dispatch_source>;



@interface DADClientAccountTimers : NSObject

{

    NSObject<OS_dispatch_source> *_deferredAllFolderContentsSource;

    NSObject<OS_dispatch_source> *_deferredFolderListSource;

    NSObject<OS_dispatch_source> *_deferredFolderContentsSource;

    NSDate *_lastAllFolderContentsRequestDate;

    NSMutableDictionary *_folderIdToLastFolderContentsRequestDate;

    NSDate *_lastFolderListRequestDate;

    NSDate *_lastFolderWipeRequestDate;

}



- (id)_folderIdToLastFolderContentsRequestDate;

- (_Bool)allowFolderWipe;

- (long long)clientBehaviorForFolderContents;

- (long long)clientBehaviorForFolderIds:(id)arg1;

- (long long)clientBehaviorForFolderList;

- (void)dealloc;

@property(nonatomic) NSObject<OS_dispatch_source> *deferredAllFolderContentsSource; // @synthesize deferredAllFolderContentsSource=_deferredAllFolderContentsSource;

@property(nonatomic) NSObject<OS_dispatch_source> *deferredFolderContentsSource; // @synthesize deferredFolderContentsSource=_deferredFolderContentsSource;

@property(nonatomic) NSObject<OS_dispatch_source> *deferredFolderListSource; // @synthesize deferredFolderListSource=_deferredFolderListSource;

- (double)deferredTimerInterval;

- (void)killAllTimers;

@property(retain) NSDate *lastAllFolderContentsRequestDate; // @synthesize lastAllFolderContentsRequestDate=_lastAllFolderContentsRequestDate;

@property(retain) NSDate *lastFolderListRequestDate; // @synthesize lastFolderListRequestDate=_lastFolderListRequestDate;

@property(retain) NSDate *lastFolderWipeRequestDate; // @synthesize lastFolderWipeRequestDate=_lastFolderWipeRequestDate;

- (void)setLastFolderContentRequestDate:(id)arg1 forFolderWithId:(id)arg2;



@end


