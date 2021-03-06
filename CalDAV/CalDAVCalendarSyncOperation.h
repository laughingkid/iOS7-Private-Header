/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CalDAVOperation.h"


@class NSError, NSString;



@interface CalDAVCalendarSyncOperation : CalDAVOperation

{

    _Bool _getScheduleTags;

    _Bool _getScheduleChanges;

    NSError *_savedError;

    NSString *_nextCtag;

    NSString *_nextSyncToken;

    id <CalDAVCalendar> _calendar;

}



- (id)_distantFutureEndDate;

- (void)_finishWithError:(id)arg1;

- (void)_processAddedOrModified:(id)arg1 removed:(id)arg2;

- (void)_syncEventsForMerge;

- (void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;

- (void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;

- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;

- (id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;

- (void)dealloc;

@property _Bool getScheduleChanges; // @synthesize getScheduleChanges=_getScheduleChanges;

@property _Bool getScheduleTags; // @synthesize getScheduleTags=_getScheduleTags;

- (id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4;

- (_Bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;

- (_Bool)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;

- (void)syncCalendar;

- (_Bool)syncDeleteTask:(id)arg1 error:(id)arg2;

- (_Bool)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;



// Remaining properties

@property(nonatomic) id <CalDAVCalendarSyncDelegate> delegate; // @dynamic delegate;



@end


