/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMObject.h"


@class DOMNode, NSString;



__attribute__((visibility("hidden")))

@interface DOMXPathResult : DOMObject

{

}



@property(readonly) _Bool booleanValue;

- (void)dealloc;

- (void)finalize;

@property(readonly) _Bool invalidIteratorState;

- (id)iterateNext;

@property(readonly) double numberValue;

@property(readonly) unsigned short resultType;

@property(readonly) DOMNode *singleNodeValue;

- (id)snapshotItem:(unsigned int)arg1;

@property(readonly) unsigned int snapshotLength;

@property(readonly) NSString *stringValue;



@end


