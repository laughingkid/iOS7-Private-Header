/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSArray.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface _CTFontFallbacksArray : NSArray

{

    int _lock;

    const struct TBaseFont *_baseFont;

    unsigned long long _count;

    NSArray *_cascade;

    NSMutableArray *_fallbacks;

}



- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)initWithBaseFont:(const struct TBaseFont *)arg1 cascade:(id)arg2;

- (id)objectAtIndex:(unsigned long long)arg1;



@end

