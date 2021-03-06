/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIColor, UIFont;



@protocol TKVibrationPickerStyleProvider <NSObject>

- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;

- (id)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;

@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;

@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;

@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;

@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;

@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;

@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;

@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;

@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;

@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;

@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;

@property(readonly, nonatomic) _Bool vibrationPickerUsesOpaqueBackground;

@property(readonly, nonatomic) _Bool wantsCustomVibrationPickerHeaderView;

@end


