/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray;



@interface GKContiguousContainerView : UIView

{

    _Bool _vertical;

    _Bool _applyOrthogonalConstraints;

    UIView *_baselineView;

    double _overlap;

    NSArray *_replaceableConstraints;

}



+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3;

+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3 applyOrthogonalConstraints:(_Bool)arg4;

- (void)_addContiguousSubviews:(id)arg1;

@property(nonatomic) _Bool applyOrthogonalConstraints; // @synthesize applyOrthogonalConstraints=_applyOrthogonalConstraints;

@property(nonatomic) UIView *baselineView; // @synthesize baselineView=_baselineView;

- (void)dealloc;

- (struct CGSize)intrinsicContentSize;

@property(nonatomic) double overlap; // @synthesize overlap=_overlap;

- (void)replaceSubviews:(id)arg1;

@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;

@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (id)viewForBaselineLayout;



@end


