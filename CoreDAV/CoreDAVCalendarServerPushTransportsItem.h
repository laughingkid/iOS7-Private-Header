/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"


@class NSMutableSet;



@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

{

    NSMutableSet *_transports;

}



+ (id)copyParseRules;

- (void)addTransport:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)init;

@property(retain) NSMutableSet *transports; // @synthesize transports=_transports;



@end


