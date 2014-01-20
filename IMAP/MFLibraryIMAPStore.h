/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFLibraryStore.h"



#import "MFIMAPSequenceIdentifierProvider.h"



@class MFIMAPCommandPipeline, MFIMAPConnection, MFIMAPDownloadCache, NSArray, NSLock, NSString;



@interface MFLibraryIMAPStore : MFLibraryStore <MFIMAPSequenceIdentifierProvider>

{

    unsigned int _supportsCustomPermanentFlags:1;

    unsigned int _supportsJunkFlag:1;

    unsigned int _supportsDollarJunkFlag:1;

    unsigned int _supportsNotJunkFlag:1;

    unsigned int _supportsDollarNotJunkFlag:1;

    unsigned int _supportsForwardedFlag:1;

    unsigned int _supportsDollarForwardedFlag:1;

    unsigned int _updatingCache:1;

    unsigned int _updateMetadata:1;

    unsigned int _readyToDealloc:1;

    unsigned int _didSynchronizeOldMessages:1;

    unsigned int _recentsExist:1;

    unsigned int _settingServerCount:1;

    unsigned int _reserved:16;

    NSString *_mailboxName;

    MFIMAPDownloadCache *_downloadCache;

    MFIMAPCommandPipeline *_fetchPipeline;

    unsigned long long _serverDeletedCount;

    unsigned long long _serverUidNext;

    unsigned long long _lastHighestModSequence;

    unsigned long long _highestModSequence;

    NSString *_selectedUID;

    unsigned int _currentFetchUid;

    NSString *_relativePath;

    NSArray *_additionalSynchronizationSearchArguments;

    NSArray *_additionalFetchHeaders;

    id _downloadDelegate;

    MFIMAPConnection *_cachedConnection;

    NSLock *_cachedConnectionLock;

}



+ (id)copyRemoteIDForTemporaryUid:(unsigned int)arg1;

+ (void)setHandlerForTemporaryUidToRemoteIDMapping:(id)arg1;

- (void)_addOfflineTransferMessages:(id)arg1;

- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;

- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;

- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;

- (_Bool)_changedFlagsForMessage:(id)arg1 fetchResponse:(id)arg2 newFlags:(unsigned long long *)arg3;

- (id)_dataForMessage:(id)arg1 readHeadersOnly:(_Bool)arg2;

- (unsigned long long)_doAppend:(CDStruct_fce757f3 *)arg1;

- (_Bool)_doUidCopy:(CDStruct_fce757f3 *)arg1 toStore:(id)arg2 newMessages:(id)arg3;

- (id)_downloadForMessageBodyData:(id)arg1;

- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;

- (_Bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 consumer:(id)arg4;

- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3;

- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;

- (void)_fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 handler:(id)arg3;

- (unsigned long long)_fetchMessagesWithArguments:(id)arg1 idRange:(id)arg2 onConnection:(id)arg3 synchronize:(_Bool)arg4 limit:(unsigned long long)arg5 topUIDToCompact:(unsigned long long)arg6 topKnownUID:(unsigned long long)arg7 success:(_Bool *)arg8 examinedRange:(struct _NSRange *)arg9 fetchableUIDsFound:(unsigned long long *)arg10 preserveUID:(unsigned long long *)arg11;

- (void)_fetchServerUnreadCountWithConnection:(id)arg1;

- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;

- (void)_performActionsOnConnection:(id)arg1 uidsToFetch:(id *)arg2 uidsToSync:(id *)arg3 messagesToCompact:(id *)arg4 libraryDetails:(id)arg5 flagSearchResults:(id)arg6 shouldForce:(_Bool)arg7 newUIDsToFetch:(unsigned int *)arg8;

- (id)_performBodyDataDownload:(id)arg1 usingConnection:(id)arg2 isPartial:(_Bool *)arg3;

- (id)_searchArgumentsForSynchronize;

- (id)_searchFlagsForUIDs:(id)arg1 usingConnection:(id)arg2;

- (void)_setFlagsForMessages:(id)arg1;

- (void)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

- (_Bool)_shouldContinueToPreservedUID:(unsigned long long)arg1;

- (void)_synchronouslySetFlags:(id)arg1 clearFlags:(id)arg2 forMessages:(id)arg3 originalChanges:(id)arg4;

- (id)_uidsForMessages:(id)arg1;

- (void)_updateSelectedUID:(unsigned long long *)arg1;

- (void)_updateServerUnreadCount:(unsigned long long)arg1;

- (void)addFlagChanges:(id)arg1 forMessages:(id)arg2;

- (id)addMessages:(id)arg1 newMessagesByOldMessage:(id)arg2;

- (_Bool)allowsAppend;

- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;

- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 customIMAPFlagsToSet:(id)arg6;

- (_Bool)canCompact;

- (_Bool)canFetchMessageIDs;

- (_Bool)canFetchSearchResults;

- (_Bool)canPerformOfflineAppend;

- (void)close;

- (void)connection:(id)arg1 didBeginBodyLoad:(id)arg2;

- (void)connection:(id)arg1 didFinishLoadingBodyData:(id)arg2;

- (void)connection:(id)arg1 didLoadMoreBodyData:(id)arg2;

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(CDStruct_1f207a6d *)arg3;

- (_Bool)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(CDStruct_1f207a6d *)arg3;

- (void)connectionDidDisconnect:(id)arg1;

- (void)dealloc;

- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;

- (id)deletedMessages;

- (void)doCompact;

- (id)downloadCache;

- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;

- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;

- (long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;

- (unsigned long long)fetchMessagesWithUIDs:(id)arg1 connection:(id)arg2 newCount:(unsigned long long)arg3 flagsToSet:(unsigned long long)arg4 queueClass:(Class)arg5;

- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;

- (id)fetchPipeline;

- (void)focusedMessageDidChange:(id)arg1;

- (unsigned long long)growFetchWindow;

- (_Bool)hasValidCacheFileForMessage:(id)arg1;

- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;

- (id)mailboxName;

- (id)messageForRemoteID:(id)arg1;

- (id)newDictionaryForLocalFlags:(unsigned long long)arg1 serverFlags:(unsigned long long)arg2 existingDictionary:(id)arg3;

- (id)offlineCache;

- (id)offlineCacheIfOffline;

- (_Bool)performOperationRequiringConnection:(_Bool)arg1 withOptions:(int)arg2 operation:(id)arg3;

- (id)relativePath;

- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;

- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id *)arg3;

- (void)removeAllLocalMessages;

- (void)reselectMailbox;

- (id)sequenceIdentifierForUIDs:(id)arg1;

- (unsigned long long)serverMessageCount;

- (void)setAdditionalFetchHeaders:(id)arg1;

- (void)setAdditionalSynchronizationSearchArguments:(id)arg1;

- (void)setDownloadDelegate:(id)arg1;

- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;

- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;

- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

- (void)setHighestModSequence:(unsigned long long)arg1;

- (void)setMailboxUidValidity:(unsigned int)arg1;

- (_Bool)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;

- (void)setSequenceIdentifier:(id)arg1 forUIDs:(id)arg2;

- (void)setServerMessageCount:(unsigned long long)arg1;

- (void)setUid:(unsigned int)arg1 forMessageWithTemporaryUid:(unsigned int)arg2;

- (_Bool)shouldRetryEmptyBodyDownloadForMessage:(id)arg1;

- (unsigned long long)syncMessagesWithUIDs:(id)arg1 connection:(id)arg2 libraryDetails:(id)arg3 flagSearchResults:(id)arg4;

- (id)uniqueRemoteIDsForMessages:(id)arg1;

- (void)updateDeletedCount;

- (void)updateDeletedCountWithNotDeletedCount:(unsigned long long)arg1;

- (void)willRemoveDelegation:(id)arg1;

- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;



@end

