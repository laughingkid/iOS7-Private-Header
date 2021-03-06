/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CPTextObject.h"


#import "CPDisposable.h"



@class CPCharSequence, NSArray;



@interface CPTextLine : CPTextObject <CPDisposable>

{

    CPCharSequence *charSequence;

    CDStruct_2e2afed4 *wordArray;

    unsigned int wordCount;

    struct CPInlineContainer *inlineList;

    int lineNumber;

    int columnNumber;

    double baseline;

    _Bool baseLineIsNull;

    _Bool hasBeenSplit;

    _Bool hasBeenProcessed;

    _Bool maySplit;

    _Bool hasTabs;

    NSArray *columnBreaks;

    NSArray *xsegments;

    int levels;

    float maximumLetterGap;

    float maximumWordGap;

    int tabsBefore;

    _Bool irregular;

    unsigned int leftSpacerIndex;

    unsigned int rightSpacerIndex;

    _Bool isListItem;

    unsigned int listSpacerIndex;

    _Bool lineBreakAfter;

    struct CPPDFStyle *uniformStyle;

    unsigned short uniformStyleFlags;

    double monospaceWidth;

    unsigned int *spacesBefore;

    _Bool disposed;

}



- (void)accept:(id)arg1;

- (int)align;

- (struct CGPoint)anchor;

- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;

- (id)attributes;

- (long long)baseLineAscending:(id)arg1;

- (long long)baseLineDescending:(id)arg1;

- (double)baseline;

- (struct CGRect)bounds;

- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;

- (_Bool)changesFontAt:(id)arg1;

- (id)charSequence;

- (id)columnBreaks;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)dispose;

- (void)finalize;

- (CDStruct_2e2afed4 *)firstWord;

- (void)fitBoundsToChildren;

- (_Bool)hasBeenProcessed;

- (_Bool)hasBeenSplit;

- (_Bool)hasDropCap;

- (_Bool)hasJustifiedAlignment;

- (_Bool)hasTabs;

- (_Bool)hyphenated;

- (id)init;

- (unsigned int)inlineCount;

- (struct CPInlineContainer *)inlineList;

- (_Bool)irregular;

- (_Bool)isIndivisible;

@property(nonatomic) _Bool isListItem; // @synthesize isListItem;

- (_Bool)isMonospaced;

- (CDStruct_2e2afed4 *)lastWord;

@property(nonatomic) unsigned int leftSpacerIndex; // @synthesize leftSpacerIndex;

- (int)levels;

@property(nonatomic) _Bool lineBreakAfter; // @synthesize lineBreakAfter;

@property(nonatomic) unsigned int listSpacerIndex; // @synthesize listSpacerIndex;

- (_Bool)mapToWordPairs:(void *)arg1 passing:(void *)arg2;

- (_Bool)mapToWordPairsWithIndex:(void *)arg1 passing:(void *)arg2;

- (_Bool)mapToWords:(void *)arg1 passing:(void *)arg2;

- (_Bool)mapToWordsWithIndex:(void *)arg1 passing:(void *)arg2;

- (float)maximumLetterGap;

- (float)maximumWordGap;

- (double)medianFontSize;

- (double)monospaceWidth;

- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;

- (_Bool)overlapsHorizontally:(struct CGRect)arg1;

- (_Bool)overlapsWith:(id)arg1;

- (id)properties;

- (void)recomputeBaseline;

- (void)recomputeLevels;

- (_Bool)removeTextLines:(id)arg1 whereTrue:(void *)arg2 passing:(void *)arg3;

@property(nonatomic) unsigned int rightSpacerIndex; // @synthesize rightSpacerIndex;

- (void)setBaseline:(double)arg1;

- (void)setBaselineToNull;

- (void)setCharSequence:(id)arg1;

- (void)setColumnBreaks:(id)arg1;

- (void)setHasBeenProcessed:(_Bool)arg1;

- (void)setHasBeenSplit:(_Bool)arg1;

- (void)setHasTabs:(_Bool)arg1;

- (void)setIrregular:(_Bool)arg1;

- (void)setLevels:(int)arg1;

- (void)setMaximumLetterGap:(float)arg1;

- (void)setMaximumWordGap:(float)arg1;

- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;

- (void)setTabsBefore:(int)arg1;

- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;

- (_Bool)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;

- (int)tabsBefore;

- (long long)topIsAbove:(id)arg1;

- (void)translateObjectYBy:(double)arg1;

- (CDStruct_2e2afed4 *)wordArray;

- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;

- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;

- (unsigned int)wordCount;

- (long long)zOrder;



@end


