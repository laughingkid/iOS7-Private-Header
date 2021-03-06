/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TKVibrationPickerStyleProvider.h"



@class UIColor, UIFont;



@interface ABFaceTimeVibrationPickerStyleProvider : NSObject <TKVibrationPickerStyleProvider>

{

    UIFont *_vibrationPickerCellTextFont;

    UIColor *_vibrationPickerCellHighlightedTextColor;

    UIFont *_vibrationPickerHeaderTextFont;

    UIColor *_vibrationPickerHeaderTextShadowColor;

    struct UIOffset _vibrationPickerHeaderTextShadowOffset;

    struct UIEdgeInsets _vibrationPickerHeaderTextPaddingInsets;

}



- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;

- (id)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;

@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;

@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor; // @synthesize vibrationPickerCellHighlightedTextColor=_vibrationPickerCellHighlightedTextColor;

@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;

@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont; // @synthesize vibrationPickerCellTextFont=_vibrationPickerCellTextFont;

@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;

@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont; // @synthesize vibrationPickerHeaderTextFont=_vibrationPickerHeaderTextFont;

@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; // @synthesize vibrationPickerHeaderTextPaddingInsets=_vibrationPickerHeaderTextPaddingInsets;

@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor; // @synthesize vibrationPickerHeaderTextShadowColor=_vibrationPickerHeaderTextShadowColor;

@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset; // @synthesize vibrationPickerHeaderTextShadowOffset=_vibrationPickerHeaderTextShadowOffset;

@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;

@property(readonly, nonatomic) _Bool vibrationPickerUsesOpaqueBackground;

@property(readonly, nonatomic) _Bool wantsCustomVibrationPickerHeaderView;



@end


