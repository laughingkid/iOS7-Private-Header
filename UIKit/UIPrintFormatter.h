/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class UIPrintPageRenderer;



@interface UIPrintFormatter : NSObject <NSCopying>

{

    UIPrintPageRenderer *_printPageRenderer;

    double _maximumContentHeight;

    double _maximumContentWidth;

    struct UIEdgeInsets _contentInsets;

    long long _startPage;

    long long _pageCount;

    _Bool _needsRecalc;

}



- (struct CGRect)_pageContentRect:(_Bool)arg1;

- (void)_recalcIfNecessary;

- (long long)_recalcPageCount;

- (void)_setNeedsRecalc;

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;

- (id)init;

@property(nonatomic) double maximumContentHeight; // @synthesize maximumContentHeight=_maximumContentHeight;

@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;

@property(readonly, nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;

@property(nonatomic) UIPrintPageRenderer *printPageRenderer; // @synthesize printPageRenderer=_printPageRenderer;

- (struct CGRect)rectForPageAtIndex:(long long)arg1;

- (void)removeFromPrintPageRenderer;

@property(nonatomic) long long startPage; // @synthesize startPage=_startPage;



@end


