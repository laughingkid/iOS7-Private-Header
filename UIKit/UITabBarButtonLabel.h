/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UILabel.h"


@class UIColor, _UITabBarItemAppearanceStorage;



__attribute__((visibility("hidden")))

@interface UITabBarButtonLabel : UILabel

{

    double _boundsWidth;

    _UITabBarItemAppearanceStorage *_appearanceStorage;

    _Bool _isSelected;

    Class _appearanceGuideClass;

    UIColor *_unselectedTintColor;

}



- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;

- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@property(nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;

- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;

- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;

- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

- (id)_titleTextAttributesForState:(unsigned long long)arg1;

- (void)dealloc;

- (void)setSelected:(_Bool)arg1;

- (void)sizeToFitBounds:(struct CGRect)arg1;

- (void)tintColorDidChange;

- (void)updateTextColorsForSelection;



@end

