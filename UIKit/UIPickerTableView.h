/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableView.h"


#import "UITableViewDelegate.h"



@class NSMutableIndexSet, UIColor;



__attribute__((visibility("hidden")))

@interface UIPickerTableView : UITableView <UITableViewDelegate>

{

    struct CGRect _selectionBarRect;

    long long _selectionBarRow;

    NSMutableIndexSet *_checkedRows;

    double _lastClickedOffset;

    long long _lastSelectedRow;

    _Bool _usesModernStyle;

    UIColor *_textColor;

    struct CGRect _visibleRect;

    struct {

        unsigned int allowsMultipleSelection:1;

        unsigned int scrollingDirection:2;

        unsigned int didSelectDisabled:1;

        unsigned int skipRowChangeNotifications:1;

        unsigned int scrollingForSelection:1;

        unsigned int pickerViewImplementsSelectionBarChanged:2;

        unsigned int cancellingAnimation:1;

        unsigned int updatingContentInset:1;

    } _pickerTableFlags;

}



- (id)_anyDateLabel;

- (_Bool)_beginTrackingWithEvent:(id)arg1;

- (id)_checkedRows;

- (id)_containerView;

- (double)_distanceToCenterForY:(double)arg1;

- (void)_notifyContentOffsetChange;

- (id)_pickerView;

- (void)_playClickIfNecessary;

- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;

- (double)_rotationForCellCenterY:(double)arg1;

- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;

- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;

- (void)_scrollingFinished;

- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;

- (void)_setContentOffset:(struct CGPoint)arg1 notify:(_Bool)arg2;

- (void)_setSelectionBarRow:(long long)arg1;

@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;

@property(getter=_usesModernStyle, setter=_setUsesModernStyle:) _Bool _usesModernStyle;

- (_Bool)_shouldWrapCells;

- (struct CATransform3D)_transformForCellAtY:(double)arg1;

- (double)_unitYForViewY:(double)arg1;

- (void)_updateContentInsets;

- (double)_viewYForUnitY:(double)arg1;

- (struct CGRect)_visibleBounds;

- (double)_yForY:(double)arg1;

- (double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2;

- (double)_zCoordinateForYCoordinate:(double)arg1;

- (double)_zForUnitY:(double)arg1;

- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;

- (void)dealloc;

- (_Bool)didSelectDisabled:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 visibleRect:(struct CGRect)arg3;

- (_Bool)isRowChecked:(long long)arg1;

@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;

- (void)layoutSubviews;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

- (_Bool)scrollViewShouldScrollToTop:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;

- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;

@property(nonatomic) struct CGRect selectionBarRect; // @synthesize selectionBarRect=_selectionBarRect;

@property(nonatomic) long long selectionBarRow; // @synthesize selectionBarRow=_selectionBarRow;

- (void)setBounds:(struct CGRect)arg1;

- (void)setContentOffset:(struct CGPoint)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;



@end

