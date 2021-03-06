/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableAttributedString.h"



@class NSAttributeDictionary;



__attribute__((visibility("hidden")))

@interface _NSCachedAttributedString : NSMutableAttributedString

{

    id _contents;

    NSAttributeDictionary *_baseAttributes;

    long long _length;

    unsigned long long _hashValue;

    struct {

        id _field1;

        long long _field2;

    } *_runs;

    long long _numRuns;

    long long _allocedRunsSize;

    long long _numHits;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (void)initialize;

- (_Bool)_baselineMode;

- (_Bool)_isDeallocating;

- (_Bool)_isStringDrawingTextStorage;

- (_Bool)_tryRetain;

- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;

- (void)cache;

- (id)copyCachedInstance;

- (void)dealloc;

- (void)finalize;

- (unsigned long long)hash;

- (id)init;

- (id)initWithAttributedString:(id)arg1;

- (id)initWithString:(id)arg1;

- (id)initWithString:(id)arg1 attributes:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (unsigned long long)length;

- (oneway void)release;

- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;

- (id)string;



@end


