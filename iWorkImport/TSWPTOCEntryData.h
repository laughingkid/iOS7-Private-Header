/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class NSString, TSWPParagraphStyle;



__attribute__((visibility("hidden")))

@interface TSWPTOCEntryData : TSPObject

{

    int _numberFormat;

    unsigned long long _paragraphIndex;

    unsigned long long _pageNumber;

    NSString *_heading;

    TSWPParagraphStyle *_indexedStyle;

}



+ (id)tocEntryDataWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSString *heading; // @synthesize heading=_heading;

@property(readonly, nonatomic) TSWPParagraphStyle *indexedStyle; // @synthesize indexedStyle=_indexedStyle;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5;

- (_Bool)isEqual:(id)arg1;

- (void)loadFromArchive:(const struct TOCEntryInstanceArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) int numberFormat; // @synthesize numberFormat=_numberFormat;

@property(readonly, nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;

@property(readonly, nonatomic) unsigned long long paragraphIndex; // @synthesize paragraphIndex=_paragraphIndex;

- (void)saveToArchive:(struct TOCEntryInstanceArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end

