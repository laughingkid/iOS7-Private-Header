/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ICSDate, NSMutableDictionary;



@interface CalDAVOccurrenceChange : NSObject

{

    _Bool _isMaster;

    ICSDate *_recurrenceID;

    NSMutableDictionary *_changes;

}



+ (id)changeWithItem:(id)arg1;

+ (id)changeWithOccurrenceID:(id)arg1;

- (void)addChangedParameter:(id)arg1 ofProperty:(id)arg2;

- (void)addChangedProperty:(id)arg1;

- (id)allChanges;

@property(readonly) _Bool attachmentsChanged;

@property(readonly) _Bool attendeesChanged;

@property(readonly) _Bool dateTimeChanged;

- (void)dealloc;

@property(readonly) _Bool descriptionChanged;

- (_Bool)didParameterChange:(id)arg1 onProperty:(id)arg2;

- (_Bool)didPropertyChange:(id)arg1;

@property(readonly) _Bool endTimeChanged;

- (id)init;

- (id)initWithOccurrenceID:(id)arg1;

@property _Bool isMaster; // @synthesize isMaster=_isMaster;

@property(readonly) _Bool locationChanged;

@property(readonly) _Bool participationChanged;

@property(readonly) _Bool privateCommentChanged;

@property(readonly) _Bool recurrenceChanged;

@property(retain) ICSDate *recurrenceID; // @synthesize recurrenceID=_recurrenceID;

@property(readonly) _Bool startTimeChanged;

@property(readonly) _Bool statusChanged;

@property(readonly) _Bool summaryChanged;

@property(readonly) _Bool timeZoneChanged;

@property(readonly) _Bool urlChanged;



@end


