/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSException.h"



@class CPMessageEntry;



__attribute__((visibility("hidden")))

@interface CPMessageException : NSException

{

    CPMessageEntry *m_entry;

}



+ (id)exceptionWithMessage:(struct CPTaggedMessageStructure *)arg1;

+ (id)exceptionWithUntaggedMessage:(id)arg1;

+ (void)initialize;

+ (id)nsError:(id)arg1 domain:(id)arg2;

+ (void)raise:(struct CPTaggedMessageStructure *)arg1;

+ (void)raiseUntaggedMessage:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)getEntry;

- (id)initWithMessage:(struct CPTaggedMessageStructure *)arg1;

- (id)initWithUntaggedMessage:(id)arg1;



@end


